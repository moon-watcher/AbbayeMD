#include "../inc/include.h"



// "mcb" stands for Map Collision Behaviours



static void _relocate_x ( GameObject *go )
{
	s16 pos = goGetLeft ( go );
	s16 inc = 8;

	if ( go->vel_x > zero )
	{
		pos = goGetRight ( go );
		inc = -goGetWidth ( go );
	}

	s16 x = ( pos >> 3 << 3 ) - goGetPaddingHorizontal(go,0) + inc - scrollHorizontal;

	goSetX ( go, x );
}



static void _relocate_y ( GameObject *go )
{
	s16 pos = goGetTop ( go );
	s16 inc = 8;

	if ( go->vel_y > zero )
	{
		pos = goGetBottom ( go );
		inc = -goGetHeight ( go );
	}

	s16 y = ( pos >> 3 << 3 ) - goGetPaddingVertical(go,0) + inc - scrollVertical;

	goSetY ( go, y );
}



static u8 _find_value ( Mcb *collisions, u8 value )
{
	u8 len = collisions->length;

	while ( len-- )
	{
		//if ( collisions->values [ len ] == value )
		if ( collisions->values [ len ] & value )
		{
			return value;
		}
	}

	return 0;
}



static u8 _find_values ( Mcb *collisions, u8 value, ... )
{
   va_list ap;
   va_start ( ap, value );

   while ( value )
   {
		if ( ( value = _find_value ( collisions, value ) ) )
		{
			break;
		}

		value = va_arg ( ap, int );
   }

   va_end ( ap );

   return value;
}



void _vertical ( GameObject *go, Mcb *collisions )
{
	s16 pos = goGetTop  ( go );
	s8  len = goGetHeight ( go );


	// top
	if ( pos <= 0 )
	{
		len += pos;
		pos = 0;
	}

	// bottom
	else if ( pos + len - 1 >= GAME_AREA_HEIGHT )
	{
		len = GAME_AREA_HEIGHT - pos;
	}

	if ( len <= 0 )
	{
		return ;
	}


	u8  resto = len & 7; // len % 8;
	s16 pos_8 = pos & 7; // pos % 8;

	len = ( len >> 3 ) + ( resto ? 1 : 0 ) ;

	if ( ( resto > ( 8 - pos_8 ) )  ||  ( resto == 0 && pos_8 > 0 ) )
	{
		++len;
	}


	collisions->x      = (go->vel_x < zero ? goGetLeft ( go ) : goGetRight  ( go )) >> 3;
	collisions->y      = pos >> 3;
	collisions->length = len;

   if ( collisions->length  &&  MASK_MAX_WIDTH > collisions->x )
   {
		for ( pos = 0; pos < collisions->length; pos++ )
      {
         collisions->values [ pos ] = currentMask.array [ collisions->y + pos ] [ collisions->x ];
      }
   }
}



void _horizontal ( GameObject *go, Mcb *collisions )
{
	s16 pos = goGetLeft ( go );
	s8  len = goGetWidth ( go );


	// left
	if ( pos <= 0 )
	{
		len += pos;
		pos = 0;
	}

	// right
	else if ( pos + len - 1 >= GAME_AREA_WIDTH )
	{
		len = GAME_AREA_WIDTH - pos;
	}

	if ( len <= 0 )
	{
		return ;
	}


	u8  resto = len & 7; // len % 8;
	s16 pos_8 = pos & 7; // pos % 8;

	len = ( len >> 3 ) + ( resto ? 1 : 0 ) ;

	if ( ( resto > ( 8 - pos_8 ) )  ||  ( resto == 0 && pos_8 > 0 ) )
	{
		++len;
	}


	collisions->x      = pos >> 3;
	collisions->y      = ( go->vel_y < zero ? goGetTop ( go ) : goGetBottom ( go ) ) >> 3;
	collisions->length = len;

   if ( collisions->length  &&  MASK_MAX_HEIGHT > collisions->y )
   {
		for ( pos = 0; pos < collisions->length; pos++ )
      {
         collisions->values [ pos ] = currentMask.array [ collisions->y ] [ collisions->x + pos ];
      }
   }
}



static void _collisions ( GameObject *go, Mcb *collisions_v, Mcb *collisions_h )
{
	++devu1;

	u16 h = goIsMovingHorizontally(go);
	u16 v = goIsMovingVertically(go);

	if ( h  &&  !v )
	{
		_vertical ( go, collisions_v );
	}

	else if ( !h  &&  v )
	{
		_horizontal ( go, collisions_h );
	}

	else if ( h  &&  v )
	{
		s16 aux = go->y;
		go->y = go->prev_y;
		_vertical   ( go, collisions_v );
		go->y = aux;

		if ( _find_values ( collisions_v, 1, 2, 0 ) )
		{
			aux = go->x;
			go->x = go->prev_x;
			_horizontal ( go, collisions_h );
			go->x = aux;
		}
		else
		{
			_horizontal ( go, collisions_h );
		}
	}
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





void mcb_null ( void *data )
{
	// nothing
}



void mcb_player ( void *data )
{
	GameObject *go = (GameObject*) data;


	if ( go->vel_x == zero  &&  go->vel_y == zero )
	{
		return;
	}



	Mcb collisions_v = { };
	Mcb collisions_h = { };

	_collisions ( go, &collisions_v, &collisions_h );

	u8 bv1 = _find_value ( &collisions_v, 1 );
	u8 bh1 = _find_value ( &collisions_h, 1 );
	u8 bh2 = _find_value ( &collisions_h, 2 );
	u8 bv4 = _find_value ( &collisions_v, 4 );
	u8 bh4 = _find_value ( &collisions_h, 4 );


	if ( bv1 || bv4 )
	{
		_relocate_x ( go );

		if ( bv4 )
		{
			playerSetAction ( &player, PLAYER_BURNS ) ;
		}
	}


	if ( bh1 || bh4 || ( go->vel_y > zero && bh2 && goGetBottomPos ( go, go->prev_y ) <= (collisions_h.y<<3) ) )
	{
		bool relocate = true;

		// bh4 kills you
		if ( bh4 )
		{
			playerSetAction ( &player, PLAYER_BURNS ) ;

			// check if water
			if ( bh1 )
			{
				playerSetAction ( &player, PLAYER_PLUNGE );
			}

			// Check if lava
			else if ( bh2 )
			{
				go->grabity = false;
				go->vel_y   = FIX32(0.2);
				relocate    = false;
			}
		}

		if ( relocate )
		{
			_relocate_y ( go );

			if ( go->vel_y > zero )
			{
				go->vel_y = zero;
			}
		}
	}

	// makes Jean to fall down on narrow blocks. Eg: platforms at 3,1
	else
	{
		if ( go->vel_y == go->object->entity->weight )
		{
			goIncY ( go, 3 );
		}
	}



//	u8 i;
//
//	VDP_clearTextLine(24);
//	VDP_clearTextLine(25);
//
//	for ( i=0; i<collisions_v.length; i++ ) drawUInt ( collisions_v.values [ i ], 0+i*3, 24, 2 );
//	for ( i=0; i<collisions_h.length; i++ ) drawUInt ( collisions_h.values [ i ], 0+i*3, 25, 2 );
//
//	waitMs(1000);
}



void mcb_udlr ( void *data )
{
	GameObject *go = (GameObject*) data;

	if ( go->vel_x == zero  &&  go->vel_y == zero )
	{
		return;
	}


	Mcb collisions_v = { };
	Mcb collisions_h = { };

	_collisions ( go, &collisions_v, &collisions_h );

	u8 relocate_x = _find_values ( &collisions_v, 1, 16, 0 );
	u8 relocate_y = _find_values ( &collisions_h, 1, 16, 0 );


	if ( relocate_x )
	{
		_relocate_x ( go );
		go->vel_x = -go->vel_x;
	}

	if ( relocate_y )
	{
		_relocate_y ( go );
		go->vel_y = -go->vel_y;
	}
}




//
// This enemy jumps to avoid pits or one height blocks
//
void mcb_crusader ( void *data )
{
	GameObject *go = (GameObject*) data;

	if ( goGetRight(go) >= screenWidth + 10 )
	{
		setActive(go, 0);

		return;
	}


	if ( goGetLeft(go) < 0 || goGetRight(go) >= screenWidth - 8 )
	{
		go->vel_y = zero;
		goSetY ( go, go->prev_y );

		return;
	}

	Mcb collisions_v = { };
	Mcb collisions_h = { };

	s16 aux_x = go->x;
	//s16 aux_y = go->y;

	u8 i;
	s8 relocate_y;





	s16 x = goGetRight ( go );

	if ( game.room.x == 2 && ( x == 16 ) )
	{
	    //crusarder_jump ( );
		go->vel_y = -FIX32 ( 1.9 );
		return;
	}

	if ( game.room.x == 1 && ( x == 78 || x == 126 || x == 158 ) )
	{
	    //crusarder_jump ( );
		go->vel_y = -FIX32 ( 3.3 );
		return;
	}

	if ( game.room.x == 0 && ( x == 206 ) )
	{
	    //crusarder_jump ( );
		go->vel_y = -FIX32 ( 2.5 );
		return;
	}




	go->x += 7;
	_collisions ( go, &collisions_v, &collisions_h );
	go->x = aux_x;

	relocate_y = _find_value ( &collisions_h, 1 );



	if ( relocate_y )
	{
		_relocate_y ( go );
		go->vel_y = go->object->entity->vel_y;

		//
		// Jumps blocks
		//
		for ( i = 0; i < collisions_v.length; i++ )
		{
			if ( collisions_v.values[i] == 1 )
			{
			    //crusarder_jump ( );
				go->vel_y = -FIX32(2.1);
				return;
			}
		}
	}
}



void mcb_ud_flipH ( void *data )
{
	GameObject *go = (GameObject*) data;

	Mcb collisions_h = { };

	_horizontal ( go, &collisions_h  );

	u8 relocate_y = _find_values ( &collisions_h, 1, 16, 0 );

	if ( relocate_y )
	{
		_relocate_y ( go );
		go->vel_y = -go->vel_y;

		SPR_setHFlip ( go->sprite, SPR_getHFlip ( go->sprite ) ? 0 : 1 );
	}
}



void mcb_coco ( void *data )
{
	GameObject *go = (GameObject*) data;

//	ia_emeny_t4 ( go );

	Mcb collisions_v = { };
	Mcb collisions_h = { };

	_collisions ( go, &collisions_v, &collisions_h );

	u8 relocate_x = _find_value ( &collisions_v, 1 );
	u8 relocate_y = _find_value ( &collisions_h, 1 );

	if ( relocate_x )
	{
		_relocate_x ( go );
		go->vel_x = -go->vel_x;
	}

	if ( relocate_y )
	{
		_relocate_y ( go );
		go->vel_y = -go->vel_y;
	}
}



void mcb_bullet ( void *data )
{
	GameObject *go = (GameObject*) data;

	if ( go->vel_x == zero  &&  go->vel_y == zero )
	{
		return;
	}

	Mcb collisions_v = { };
	Mcb collisions_h = { };

	_collisions ( go, &collisions_v, &collisions_h );

	u8 relocate_x = _find_value ( &collisions_v, 1 );
	u8 relocate_y = _find_value ( &collisions_h, 1 );

	if ( relocate_y || relocate_x )
	{
		enemy_bullet_deactivate ( go );
	}
}



void mcb_fireball ( void *data )
{
	GameObject *go = (GameObject*) data;

	Mcb collisions_h = { };

	_horizontal ( go, &collisions_h );

	if ( go->y > GAME_AREA_HEIGHT + 8  ||  _find_values ( &collisions_h, 1, 0 ) )
	{
		_relocate_y ( go );
		go->vel_y = -go->vel_y;

		if ( go->vel_y < 0  )
		{
			play_sfx(SFX_LAVABALL);
		}
	}
}



void mcb_scythe ( void *data )
{
	GameObject *go = (GameObject*) data;

	if ( go->vel_x == zero  &&  go->vel_y == zero )
	{
		return;
	}


	Mcb collisions_v = { };
	Mcb collisions_h = { };

	_collisions ( go, &collisions_v, &collisions_h );

	u8 relocate_x = _find_value ( &collisions_v, 1 );
	u8 relocate_y = _find_value ( &collisions_h, 1 );


	if ( relocate_x )
	{
		go->vel_x = -go->vel_x;
	}

	if ( relocate_y )
	{
		_relocate_y ( go );

		if ( go->vel_x == zero )
		{
			if ( random() % 2 == 0)
			{
				go->vel_x = -go->object->entity->vel_x;
			}
			else
			{
				go->vel_x = +go->object->entity->vel_x;
			}
		}
	}
	else
	{
		go->vel_y = +go->object->entity->vel_y;
		go->vel_x = 0;
	}
}


void mcb_drop ( void *data )
{
	GameObject *go = (GameObject*) data;

	if ( go->vel_y == zero )
	{
		return;
	}

	Mcb collisions_h = { };

	_horizontal ( go, &collisions_h );

	if ( _find_value ( &collisions_h, 1 ) )
	{
		_relocate_y(go);

		go->vel_y   = zero;
		go->grabity = false;
		SPR_nextFrame(go->sprite);
		//go->data    = (Data)
	}
}
