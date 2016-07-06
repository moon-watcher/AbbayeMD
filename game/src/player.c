#include "../inc/include.h"


u16 _blocks_over_jean ( Player *player )
{
	s16 left   = goGetLeft  ( player->go );
	s16 right  = goGetRight ( player->go );
	s16 top    = goGetTop   ( player->go );

	if ( left  <            0 ) left  =               0;
	if ( right >= screenWidth ) right = screenWidth - 1;

	left   = ( left  - 0 ) >> 3;
	right  = ( right - 1 ) >> 3;
	top    = ( top   - 0 ) >> 3;


	u8  value1 = currentMask.array [ top - 1 ] [ left  ];
	u8  value2 = currentMask.array [ top - 1 ] [ right ];
	u8  value3 = currentMask.array [ top - 2 ] [ left  ];
	u8  value4 = currentMask.array [ top - 2 ] [ right ];

	return ( value1 == 1 || value2 == 1 || value3 == 1 || value4 == 1 );
}



void _make_jean_jumps ( Player *player, PlayerAction *action )
{
	u16 liedown = playerIsLieDown ( player ) ;

	if (  !liedown  ||  ( liedown  &&  !_blocks_over_jean ( player ) )  )
	{
		play_fx ( FX_JUMP );
		*action += PLAYER_JUMP_PRESSED;
	}
}



static s16 _can_change_action ( Player *player, PlayerAction nueva  )
{
	if ( playerIsLieDown ( player )  &&  _blocks_over_jean ( player )  )
	{
			  if ( nueva == PLAYER_STAY        ) nueva = PLAYER_LIEDOWN;
		else if ( nueva == PLAYER_WALKS_LEFT  ) nueva = PLAYER_SNEAKS_LEFT;
		else if ( nueva == PLAYER_WALKS_RIGHT ) nueva = PLAYER_SNEAKS_RIGHT;
	}

	return nueva;
}



static void _relocate_player ( Player *player, PlayerAction action )
{
	//
	// very bad code aproaching :/
	//

	if ( player->action == action  ||
		! (
			player->action == PLAYER_LIEDOWN      ||
			player->action == PLAYER_SNEAKS_RIGHT ||
			player->action == PLAYER_SNEAKS_LEFT  ||
			action         == PLAYER_LIEDOWN      ||
			action         == PLAYER_SNEAKS_RIGHT ||
			action         == PLAYER_SNEAKS_LEFT
		)
	)
	{
		return;
	}


	GameObject *go  = player->go;
	Object     *obj = (Object *) &player_actions [ game.version ] [ action ] [ game.crusader ] ;


	//if ( SPR_getVFlip ( go->sprite ) == 0 )
	{
		u8 h1 = objectGetHeight ( go->object );
		u8 h2 = objectGetHeight ( obj );

		goIncY ( go, h1 - h2 );
	}


	s16 w1 = objectGetPaddingRight ( go->object );
	s16 w2 = objectGetPaddingRight ( obj );


	if ( action == PLAYER_SNEAKS_LEFT  &&  player->action == PLAYER_LIEDOWN  &&  SPR_getHFlip ( go->sprite ) == 0 )
	{
		w1 = objectGetPaddingLeft ( obj ) + 1;
	}
	else if ( action == PLAYER_SNEAKS_RIGHT  &&  player->action == PLAYER_LIEDOWN  &&  SPR_getHFlip ( go->sprite ) == 1  )
	{
		w1 = objectGetWidth ( obj ) - objectGetPaddingLeft ( obj ) - 1;
		w2 = objectGetWidth ( obj ) - w2;
	}
	else if ( action == PLAYER_SNEAKS_LEFT  &&  SPR_getHFlip ( go->sprite ) == 0 )
	{
		// not necesary
	}
	else if ( action == PLAYER_SNEAKS_RIGHT  &&  SPR_getHFlip ( go->sprite ) == 1 )
	{
		w1 = objectGetWidth ( go->object ) - objectGetPaddingLeft ( go->object );
		w2 = objectGetWidth ( obj )        - w2;
	}
 	else if ( SPR_getHFlip ( go->sprite ) == 0 )
	{
		w1 = objectGetWidth ( go->object ) - w1;
		w2 = objectGetWidth ( obj )        - w2;
	}

	goIncX ( go, w1 - w2 );
}



static void _process_burning ( Player *player )
{
	if ( vtimer % 10 == 0 )
	{
		SPR_setHFlip (  player->go->sprite, SPR_getHFlip ( player->go->sprite ) ? 0 : 1 );
	}


	if ( player->burning == 0 )
	{
		if ( player->plunge == 0 )
		{
			musicStop ( NULL );
			play_fx ( FX_HIT );
		}

		//_relocate_player ( player, player->action );
		goSetObject ( player->go, (Object*) &player_actions [ game.version ] [ player->action ] [ game.crusader ] );

		player->burning = getHz() * 2;

	}


	if ( player->burning  &&  --player->burning == 0 )
	{
		game.status = GAME_STATUS_RESTART;
	}


	player->go->vel_x = zero;

	if ( player->go->vel_y < zero )
	{
		player->go->vel_y = zero;
	}
}


static void _process_plunge ( Player *player )
{
	if ( player->plunge == 0 )
	{
		if ( player->burning == 0 )
		{
			musicStop ( NULL );
			play_fx ( FX_HIT );
		}

		goSetObject ( player->go, (Object*) &player_actions [ game.version ] [ player->action ] [ game.crusader ] );

		player->plunge = getHz() * 2;

		goIncY ( player->go, goGetHeight(player->go) + 8 );
	}

	if ( player->plunge )
	{
		if ( player->go->sprite->frameInd == 2 && player->go->sprite->timer == 1 )
		{
			SPR_setNeverVisible ( player->go->sprite, 1 );
		}

		if ( --player->plunge == 0 )
		{
			game.status = GAME_STATUS_RESTART;
		}
	}

	player->go->vel_x = zero;
	player->go->vel_y = zero;
}



static void _process_captured ( Player *player )
{
	player->go->vel_x = zero;
	player->go->vel_y = zero;

	SPR_setHFlip (  player->go->sprite,  ( vtimer / getHz ( ) ) % 2  );

	goSetObject ( player->go, (Object*) &player_actions [ game.version ] [ PLAYER_CAPTURED ] [ game.crusader ] );
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





void playerInit ( Player *player )
{
	player->go                  = NULL;
	player->action              = PLAYER_STAY;
	player->burning             = 0;
	player->plunge              = 0;
	player->in_passage          = false;
	player->grial               = false;
	player->invulnerable        = INVULNERABLE;

	player->saved.object.entity = (Entity*) player_actions [ game.version ] [ player->action ] [ game.crusader ].entity;
	player->saved.object.x      = checkpoint_get()->pos_x-8;
	player->saved.object.y      = checkpoint_get()->pos_y + scrollVertical - 4;
	player->saved.object.dir_x  = 0;
	player->saved.object.dir_y  = 0;

	player->saved.vel_x         = zero;
	player->saved.vel_y         = zero;
}



void playerAdd ( Player *player, listptr *list, Sprite *sprite )
{
	player->go = goManagerAdd ( list, &player->saved.object );
	goSetSprite ( player->go, sprite );

	player->go->vel_x = player->saved.vel_x;
	player->go->vel_y = player->saved.vel_y;

	//vc_add(player->go->object->entity->id, 0, player->go->vram );
}



void playerSave ( Player *player )
{
	player->saved.object.dir_x  = SPR_getHFlip(player->go->sprite) ? -1 : +1;
	player->saved.object.dir_y  = SPR_getVFlip(player->go->sprite) ? -1 : +1;
	player->saved.object.entity = player->go->object->entity;
	player->saved.object.x      = player->go->x;
	player->saved.object.y      = player->go->y;

	player->saved.vel_x         = player->go->vel_x;
	player->saved.vel_y         = player->go->vel_y;
}



u16 playerIsOnAir ( Player *player )
{
	return player->go->vel_y != zero;
}



u16 playerIsLieDown ( Player *player )
{
	return ( goGetHeight(player->go) <= 8 ) ? 1 : 0;
}



PlayerAction playerGetAction ( Player *player )
{
	PlayerAction action = PLAYER_STAY;

	if ( player->action == PLAYER_BURNS )
	{
		action = PLAYER_BURNS;
	}

	else if ( playerIsOnAir ( player ) )
	{
		action = PLAYER_JUMPS;

		if ( joy1_active_right )
		{
			action = PLAYER_JUMPS_RIGHT;
		}

		else if ( joy1_active_left )
		{
			action = PLAYER_JUMPS_LEFT;
		}
	}

	else
	{
		if ( joy1_active_right && joy1_active_down )
		{
			action = PLAYER_SNEAKS_RIGHT;
		}

		else if ( joy1_active_left && joy1_active_down )
		{
			action = PLAYER_SNEAKS_LEFT;
		}

		else if ( joy1_active_right )
		{
			action = PLAYER_WALKS_RIGHT;
		}

		else if ( joy1_active_left )
		{
			action = PLAYER_WALKS_LEFT;
		}

		else if ( joy1_active_down  )
		{
			action = PLAYER_LIEDOWN;
		}

		//if ( joy1_pressed_b | joy1_pressed_c )
		if ( joy1_pressed_abc )
		{
			_make_jean_jumps ( player, &action );
		}


//		//
//		// for debug
//		//
//		if ( joy1_pressed_up )
//		{
//			action = PLAYER_JUMPS;
//		}
//		//
//		//
//		//
	}

	return action;
}



void playerUpdate ( Player *player, PlayerAction action )
{
	if ( player->action == PLAYER_CAPTURED )
	{
		_process_captured ( player );
		return;
	}

	if ( player->action == PLAYER_BURNS )
	{
		_process_burning ( player );
		return;
	}

	if ( player->action == PLAYER_PLUNGE )
	{
		_process_plunge ( player );
		return;
	}


	action = _can_change_action ( player, action );

	if ( action == player->action )
	{
		return;
	}


	GameObject *go = player->go;


	if ( action >= PLAYER_JUMP_PRESSED )
	{
		action -= PLAYER_JUMP_PRESSED;
		go->vel_y = playerGetData()->jump;
	}


	_relocate_player ( player, action );
	goSetObject ( go, (Object*) &player_actions [ game.version ] [ action ] [ game.crusader ] );

	fix32 vx = player_actions [ game.version ] [ action ] [ game.crusader ].entity->vel_x;
	//fix32 vy = player_actions [ game.version ] [ action ] [ game.crusader ].entity->vel_y;

	switch ( action )
	{
		case PLAYER_STAY         : go->vel_x = zero; break;
		case PLAYER_WALKS_RIGHT  : go->vel_x =  +vx; break;
		case PLAYER_WALKS_LEFT   : go->vel_x =  -vx; break;

		case PLAYER_JUMPS        : go->vel_x = zero; break;
		case PLAYER_JUMPS_RIGHT  : go->vel_x =  +vx; break;
		case PLAYER_JUMPS_LEFT   : go->vel_x =  -vx; break;

		case PLAYER_LIEDOWN      : go->vel_x = zero; break;
		case PLAYER_SNEAKS_RIGHT : go->vel_x =  +vx; break;
		case PLAYER_SNEAKS_LEFT  : go->vel_x =  -vx; break;

		default: break;
	}



//	//
//	// for debugging
//	//
//	go->vel_x = zero;
//	go->vel_y = zero;
//
//	     if ( joy1_active_down && joy1_active_right ) { action = PLAYER_WALKS_RIGHT; go->vel_y =            player_actions [ game.version ] [ PLAYER_WALKS_RIGHT ].entity->vel_x;   go->vel_x =            player_actions [ game.version ] [ PLAYER_WALKS_RIGHT ].entity->vel_x;   }
//	else if ( joy1_active_down && joy1_active_left  ) { action = PLAYER_WALKS_LEFT;  go->vel_y =            player_actions [ game.version ] [ PLAYER_WALKS_RIGHT ].entity->vel_x;   go->vel_x = fix32Neg ( player_actions [ game.version ] [ PLAYER_WALKS_LEFT  ].entity->vel_x ); }
//	else if ( joy1_active_up   && joy1_active_right ) { action = PLAYER_WALKS_RIGHT; go->vel_y = fix32Neg ( player_actions [ game.version ] [ PLAYER_WALKS_RIGHT ].entity->vel_x ); go->vel_x =            player_actions [ game.version ] [ PLAYER_WALKS_RIGHT ].entity->vel_x;   }
//	else if ( joy1_active_up   && joy1_active_left  ) { action = PLAYER_WALKS_LEFT;  go->vel_y = fix32Neg ( player_actions [ game.version ] [ PLAYER_WALKS_RIGHT ].entity->vel_x ); go->vel_x = fix32Neg ( player_actions [ game.version ] [ PLAYER_WALKS_LEFT  ].entity->vel_x ); }
//
//	else if ( joy1_active_down                      ) { action = PLAYER_WALKS_RIGHT; go->vel_y =            player_actions [ game.version ] [ PLAYER_WALKS_RIGHT ].entity->vel_x;   }
//	else if ( joy1_active_up                        ) { action = PLAYER_WALKS_RIGHT; go->vel_y = fix32Neg ( player_actions [ game.version ] [ PLAYER_WALKS_RIGHT ].entity->vel_x ); }
//	else if ( joy1_active_right                     ) { action = PLAYER_WALKS_RIGHT; go->vel_x =            player_actions [ game.version ] [ PLAYER_WALKS_RIGHT ].entity->vel_x;   }
//	else if ( joy1_active_left                      ) { action = PLAYER_WALKS_LEFT;  go->vel_x = fix32Neg ( player_actions [ game.version ] [ PLAYER_WALKS_LEFT  ].entity->vel_x ); }
//	//
//	//
//	//



	playerSetAction ( player, action ) ;
}




void playerSetAction ( Player *player, PlayerAction action )
{
	if ( DEVELOPEMENT  &&  player->invulnerable  &&  action == PLAYER_BURNS )
	{
		action = PLAYER_STAY;
	}

	player->action = action;
}



PlayerData *playerGetData ( )
{
	return (PlayerData*) &player_data [ game.version ];
}
