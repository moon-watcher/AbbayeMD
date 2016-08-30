#include "../inc/include.h"



static void _add_objects()
{
	u16 i, objs = room_objects_count ( currentRoom );

	pack_vram_init ( );


	for ( i = 0; i < objs; i++ )
	{
		GameObject *go       =  goManagerAdd ( &waObjects, &currentRoom->objects->array [ i ] );
		EntityType  entity   =  goGetEntityType ( go );
		Sprite     *sprite   = &waSprites [ wvSpriteCounter ];
		u16         itemtype =  goIsItem ( go );

		goSetSprite ( go, sprite );
		pack_vram_add ( go );

		if ( itemtype )
		{
			Item *item = (Item*) itemManagerAdd ( &waItems, i, game.room.x, game.room.y, false, true, 0 );

			goSetItem ( go, item );

			if ( !itemGetVisible ( item ) )
			{
				setActive ( go, 0 );

				continue;
			}
			else if ( itemGetChecked ( item ) )
			{
				Switch *s = (Switch*) switch_find ( game.room.x, game.room.y );

				if ( s != NULL )
				{
					goSetObject ( go, &s->on );
				}
			}

			if ( itemtype == ENTITY_CHECKPOINT )
			{
				checkpoint_draw ( go );
			}

			else if ( invertedCross  &&  in_array ( itemtype, (u16[]) { ITEM_IS_CROSS, 0 } )  )
			{
				invert_cross ( go );
			}
		}

		if ( player.in_passage  &&  entity == ENTITY_PASSAGE )
		{
			SPR_setHFlip ( player.go->sprite, 1 );
			goSetXY ( player.go, go->x-10, go->y ) ;//goGetTop(go) + player.go->object->entity->padding.top + 9 );
			player.in_passage = false;
		}

		++wvSpriteCounter;
	}
}


static void _go_next_room ()
{
	if ( player.action == PLAYER_BURNS  ||  player.action == PLAYER_PLUNGE  ||  game.status == GAME_STATUS_GONEXT )
	{
		return;
	}


	GameObject *go = player.go;


	#define 	width_div_2   ( goGetWidth(go)  >> 1 )
	#define 	height_div_2  ( goGetHeight(go) >> 1 )


	//if ( go->vel_x > zero  &&  goGetRight(go) - width_div_2 >= GAME_AREA_WIDTH )
	if ( SPR_getHFlip(go->sprite) == 0  &&  goGetRight(go) - width_div_2 >= GAME_AREA_WIDTH )
	{
		goSetX ( go, 0 - go->object->entity->padding.left - width_div_2  + 1 );
		goSetY ( go, goGetTop(go) - go->object->entity->padding.top ) ;
		game_room_x ( +1 );

		game.status = GAME_STATUS_GONEXT;
	}

	//else if ( go->vel_x < zero  &&  goGetLeft(go) + width_div_2 <= 0 )
	else if ( SPR_getHFlip(go->sprite) == 1  &&  goGetLeft(go) + width_div_2 <= 0 )
	{
		goSetX ( go, GAME_AREA_WIDTH + (scrollHorizontal>>1) - go->object->entity->padding.right - width_div_2  - 1 );
		goSetY ( go, goGetTop(go) - go->object->entity->padding.top );
		game_room_x ( -1 );

		game.status = GAME_STATUS_GONEXT;
	}

	else if ( go->vel_y > zero  &&  goGetBottom(go) - height_div_2 + (scrollVertical>>1) >= GAME_AREA_HEIGHT )
	{
		goSetX ( go, goGetLeft(go) - go->object->entity->padding.left );
		goSetY ( go, 0 - go->object->entity->padding.top - height_div_2 + 1 );
		game_room_y ( +1 );

		game.status = GAME_STATUS_GONEXT;
	}

	else if ( go->vel_y < zero  &&  goGetTop(go) + height_div_2 - (scrollVertical>>1) <= 0 )
	{
		goSetX ( go, goGetLeft(go) - go->object->entity->padding.left );
		goSetY ( go, GAME_AREA_HEIGHT + (scrollVertical>>1) - go->object->entity->padding.bottom - height_div_2 - 2 );
		game_room_y ( -1 );

		game.status = GAME_STATUS_GONEXT;
	}
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




void game_init ()
{
//	game.version      = VERSION_MD;
	game.status       = GAME_STATUS_OK;
	game.room.x       = checkpoint_get()->room_x;
	game.room.y       = checkpoint_get()->room_y;
	game.rnd          = random();
	game.crusader     = false;
}



u8 game_room_x ( s8 inc )
{
	game.room.x = set_value_in ( game.room.x + inc, 0,  ROOMS_MAX_WIDTH-1 );

	return game.room.x;
}



u8 game_room_y ( s8 inc )
{
	game.room.y = set_value_in ( game.room.y + inc, 0,  ROOMS_MAX_HEIGHT-1 );

	return game.room.y;
}



void game_loop ( )
{
	while ( game.status == GAME_STATUS_OK )
	{
		displayOff(0);

		devu5 = 0;
		wvSpriteCounter = 0;

		vram_init ( VRAM_DEFAULT );

		currentRoom = room_get ( );
		memcpy ( &currentMask, currentRoom->mask, sizeof(Mask) );

		resetScreen();
		resetScroll();

		scrollSet ( SCROLL_INIT );

		room_draw ( currentRoom );

		palette_init();

		hudResetVram ( );
		hudDrawText ( );
		hudIncHearts ( 0 );
		hudIncCrosses ( 0 );
		enemy_reset ( );

		SPR_init ( 0, 0, 0 );
		goManagerInit ( &waObjects );

		playerAdd ( &player, &waObjects, &waSprites [ wvSpriteCounter++ ] );
		_add_objects ( );

		mask_ini_priorities ( );
		room_function ( currentRoom, ROOM_ACTION_ENTER );
		apply_alt_palettes ( );

		SPR_update ( );
		displayOn ( 0 );
		musicPlay ( currentRoom->track );


		while ( game.status == GAME_STATUS_OK )
		{
			devu1 = 0;

			JoyReader_update ( );

			debug_info ();
			apply_alt_palettes_joy ( );

			if ( joy1_pressed_start )
			{
				hint_show ( true );
				continue;
			}


			mask_set_priorities ( &currentMask );

			PlayerAction action = playerGetAction ( &player );
			playerUpdate ( &player, action );


			_go_next_room ();

			if ( game.status == GAME_STATUS_GONEXT )
			{
				playerSave ( &player );
				break;
			}

			else if ( game.status == GAME_STATUS_RESTART )
			{
				hudIncHearts ( -1 );
				break;
			}


			room_function ( currentRoom, ROOM_ACTION_STAY );


			devu2 = 0;
			listptrNode *node = waObjects.head;

			while ( node )
			{
				GameObject *go = (GameObject *) node->pointer;


				node = node->next;

				if ( !go->active )
				{
					continue;
				}

				goUpdate ( go );
				go->object->entity->mcbFn ( go );             // map collisions
				ocb_collisions ( (GameObject*) go, &player ); // objects collisions
				SPR_setPosition ( go->sprite, go->x, go->y ); // update sprite
			}


			SPR_update ( );
			VDP_waitVSync ( );
		}



		VDP_waitVSync ( );

		SND_stopPlayPCM_XGM ( SOUND_PCM_CH1 );
		SND_stopPlayPCM_XGM ( SOUND_PCM_CH2 );
		SND_stopPlayPCM_XGM ( SOUND_PCM_CH3 );
		SND_stopPlayPCM_XGM ( SOUND_PCM_CH4 );

		displayOff(0);


//play_fx(FX_HIT);



		room_function ( currentRoom, ROOM_ACTION_LEAVE );

		goManagerEnd ( &waObjects );

		SPR_end ( );

		vram_destroy();



		if ( game.status == GAME_STATUS_GONEXT )
		{
			game.status = GAME_STATUS_OK;
		}

		if ( game.status == GAME_STATUS_RESTART )
		{
			if ( hudGetHearts() == 0 )
			{
				// goes to game over
				game.status = GAME_STATUS_GAMEOVER;

				if ( game.crusader )
				{
					// resumes ending secuence
					game.room.x = 4;
					game.room.y = 4;
					game.status = GAME_STATUS_OK;
				}
			}
			else
			{
				game.status = GAME_STATUS_OK;

				// goes to checkpoint
				game.room.x = checkpoint_get()->room_x;
				game.room.y = checkpoint_get()->room_y;

				playerInit (&player);
			}
		}

		if ( game.status == GAME_STATUS_ENDING )
		{
			// goes to ending
		}
	}

}
