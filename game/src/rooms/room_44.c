#include "../inc/include.h"




static GameObject *crusader[8] = { };
static GameObject *door = NULL;
static GameObject *satan = NULL;
static GameObject *bullet[12] = { };
static GameObject *cross = NULL;
//static GameObject *explosion = NULL;
static GameObject *grial = NULL;
static GameObject *hint = NULL;
static GameObject *rosette = NULL;


static u16 nb_crusader = 0;
static u16 nb_bullet = 0;
static u16 i = 0;

static s8 sequence = 0;






      static s16 _steps = 0;
const static u16 _colors [ 2 ] [ 34 ] =
{
	{ 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x001, 0x002, 0x003, 0x004, 0x005, 0x006, 0x006, 0x006, 0x006, 0x006, 0x006, 0x006, 0x006, 0x006, 0x006, 0x005, 0x004, 0x003, 0x002, 0x001, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000 },
	{ 0x000, 0x001, 0x002, 0x003, 0x004, 0x005, 0x006, 0x007, 0x008, 0x009, 0x00A, 0x00B, 0x00C, 0x00C, 0x00C, 0x00C, 0x00C, 0x00C, 0x00C, 0x00C, 0x00C, 0x00C, 0x00B, 0x00A, 0x009, 0x008, 0x007, 0x006, 0x005, 0x004, 0x003, 0x002, 0x001, 0x000 }
};

static _voidCallback *_md_palette_swap ( )
{
	if ( game.version == VERSION_MD && _steps >= 0  )
	{
		if ( vtimer % 3 != 0 )
		{
			return 0;
		}

		if ( _steps == 34 )
		{
			_steps = 0;
		}

		VDP_setPaletteColor ( PAL1*16 + 8, _colors[0][_steps] );
		VDP_setPaletteColor ( PAL1*16 + 9, _colors[1][_steps] );

		++_steps;
	}

	return 0;
}

static void _md_palette_init ( )
{
	_steps = 0;

	prepareColor ( PAL1*16 + 8, _colors[0][_steps] );
	prepareColor ( PAL1*16 + 9, _colors[1][_steps] );

	SYS_setVIntCallback ( (_voidCallback*) _md_palette_swap );
}

static void _md_palette_stop ( )
{
	_steps = -1;

	VDP_setPaletteColor ( PAL1*16 + 8, _colors[0][0] );
	VDP_setPaletteColor ( PAL1*16 + 9, _colors[1][0] );

	SYS_setVIntCallback ( (_voidCallback*) NULL );
}




static s8 _inc_secuence ( s8 expr )
{
	if ( expr )
	{
		++sequence;
	}
	else
	{
		sequence = -1;
	}

	i = 0;

	return sequence;
}



static void _remove_crosses()
{
	s8 y, x;

	for ( y = MASK_MAX_HEIGHT-1; y >= 0; y-- )
	{
		for ( x = MASK_MAX_WIDTH-1; x >= 0; x-- )
		{
			if ( mask_get ( &currentMask, x, y ) & 128 )
			{
				VDP_setTileMapXY ( PLAN_A, 0, x, y );
				currentMask.array [ (u8) y ] [ (u8) x ] = 0;
			}
		}
	}
}



static void _show_starts ( )
{
	s8 y, x, crosses = hudGetCrosses() ;

	setActive ( cross, 1 );

	for ( y = MASK_MAX_HEIGHT-1; y >= 0; y-- )
	{
		for ( x = MASK_MAX_WIDTH-1; x >= 0; x-- )
		{
			if ( crosses == 0 )
			{
				break;
			}

			u8 *value = &currentMask.array[(u8)y][(u8)x];

			if ( *value & 128 )
			{
				--crosses;

				*value = 128 + 1;

				VDP_setTileMapXY ( PLAN_A, TILE_ATTR_FULL ( cross->object->entity->palette, 0, 0, 0, cross->vram ), x, y );


				play_fx ( FX_DOOR );

				if ( !DEV )
				{
					waitHz ( 20 );
				}
			}
		}
	}

	_inc_secuence ( hudGetCrosses () == 12 );
}



static void _close_door ( )
{
	setActive ( rosette, 1 );

	if ( player.go->x == 10  &&  !door->active )
	{
		setActive ( door, 1 );
		SPR_update ( );

		play_fx_pause ( FX_DOOR, getHz() );

		_inc_secuence ( true );
		setDoor(door,1);

		currentMask.array [ 19 ] [ 0 ] =
		currentMask.array [ 18 ] [ 0 ] =
		currentMask.array [ 17 ] [ 0 ] =
		currentMask.array [ 16 ] [ 0 ] = 1;
	}
}



static void _update_door ( )
{
	if ( door->x > 0 )
	{
		goIncX ( door, -1 );
	}

	else if ( door->x == 0  &&  ( vtimer % 30 == 0 )  &&  ( random() % 2 == 0 ) )
	{
		play_fx ( FX_CLOSED_DOOR );
		goIncX ( door, 2 );
	}
}






static void _show_objects ( )
{
	setActive ( grial, 1 );
	setActive ( satan, 1 );

	for ( i=0; i<nb_bullet; i++ )
	{
		setActive ( bullet[i], 1 );
	}

	_inc_secuence ( true );
}


static void _fight ( )
{
	for ( i=0; i<nb_bullet; i++ )
	{
		enemy_bullet ( bullet[i] );
	}

	enemy_satan ( satan, bullet );


	if ( player.grial )
	{
		for ( i=0; i<nb_bullet; i++ )
		{
			setActive ( bullet[i], 0 );
		}

		_md_palette_stop ( );
		_remove_crosses();
		setActive ( cross, 0 );


		_inc_secuence ( true );
	}
}


static void _satan_kill ( )
{
	if ( ++i < getHz()*2 )
	{
		SPR_setAnim ( satan->sprite, 1 );

		satan->vel_x = zero;
		satan->vel_y = zero;
	}
	else
	{
		setActive ( satan, 0 );
		setActive ( hint, 1 );

		_inc_secuence ( true );
	}
}


static void _catch_the_hint ( )
{
	if ( enemy_reset_satan == false )
	{
		_update_door ( );
	}
	else
	{
		_inc_secuence ( true );
	}
}



static void _wait_for_crusaders ( )
{
	JoyReader_init ( 0 );

	playerSetAction ( &player, PLAYER_CAPTURED );

	_update_door ();

	++i;

	if ( cm_can_be_activated() )
	{
		if (  i == getHz() * 4 )
		{
			VDP_fadeOutAll ( getHz() * 2, 1 );
		}

		else if ( i == getHz() * 10 || DEV )
		{
			cm_activate ( );
			_inc_secuence ( true );
		}
	}
	else if ( i == getHz() * 2 )
	{
		_inc_secuence ( true );
	}
}


static void _activate_crusaders ( )
{
	if ( game.version == VERSION_MD )
	{
		VDP_setPalette ( PAL2, crusader[0]->object->entity->sd->palette->data );
	}

	if ( hudGetHearts() == 0 )
	{
		--nb_crusader;
	}

	for ( i=0; i<nb_crusader; i++ )
	{
		setActive ( crusader[i], 1 );
	}

	play_music ( MUSIC_WOODS ) ;

//	JoyReader_init(0);
//
//	playerSetAction ( &player, PLAYER_CAPTURED );

	waitSc ( 1 );
	setActive ( door, 0 );
	play_fx(FX_DOOR);


	_inc_secuence ( true );
}


static void _move_crusaders ( )
{
	if ( crusader[nb_crusader-1]->x == 200 )
	{
		game.room.x = 99;
		game.room.y = 99;
		game.status = GAME_STATUS_ENDING;

		JoyReader_init(1);

		hint_show ( false );

		JoyReader_init(0);

		_inc_secuence ( true );
	}
}






static void _room_enter ( Room *room )
{
	door      = goManagerFindByEntityId ( &waObjects,  35, 0 ); // Door
	satan     = goManagerFindByEntityId ( &waObjects,  57, 0 ); // Satan
	cross     = goManagerFindByEntityId ( &waObjects,  61, 0 ); // Catched cross
	grial     = goManagerFindByEntityId ( &waObjects,  59, 0 ); // Grial
	hint      = goManagerFindByEntityId ( &waObjects,  60, 0 ); // Red hint
	//explosion = goManagerFindByEntityId ( &waObjects,  64, 0 ); // Satan bullets explosion // MD
	rosette   = goManagerFindByEntityId ( &waObjects, 103, 0 ); // Evil rossete // PCW

	nb_bullet   = goManagerFindAllByEntityId ( &waObjects, bullet,   58 ); // Satan bullets
	nb_crusader = goManagerFindAllByEntityId ( &waObjects, crusader, 14 ); // Crusader

	//enemy_bullet_init ( bullet[0], explosion );
	enemy_bullet_init ( bullet[0] );

	setActive ( door,      0 );
	setActive ( satan,     0 );
	setActive ( cross,     1 );
	setActive ( grial,     0 );
	setActive ( hint,      0 );
	//setActive ( explosion, 0 );
	setActive ( rosette,   0 );

	for ( i=0; i<nb_crusader; i++ ) setActive ( crusader[i], 0 );
	for ( i=0; i<nb_bullet;   i++ ) setActive ( bullet[i],   0 );

	if ( DEV )
	{
		hudIncCrosses(15);
	}

	_md_palette_init ( );


	sequence = 0;

	if ( game.crusader )
	{
		setActive ( door, 1 );

		sequence = 7;
		game.crusader = false;

		playerSetAction ( &player, PLAYER_CAPTURED );
		playerUpdate ( &player, PLAYER_CAPTURED );

		SPR_setPosition ( player.go->sprite, 220, 120 ); // update sprite
		goSetXY ( player.go, 220, 120 );
//		goUpdate ( player.go );

		SPR_update ( );
		//VDP_updateSprites ( );
		VDP_waitVSync ( );
	}

}





static void _room_stay ( Room *room )
{
	switch ( sequence )
	{
		case 0: _show_starts ( );        break;
		case 1: _close_door ( );         break;
		case 2: _show_objects ( );       break;
		case 3: _fight ( );              break;
		case 4: _satan_kill ( );         break;
		case 5: _catch_the_hint ( );     break;
		case 6: _wait_for_crusaders ( ); break;
		case 7: _activate_crusaders ( ); break;
		case 8: _move_crusaders ( );     break;
	}
}



static void _room_leave ( room )
{
	enemy_bullet_delete ( );
	_md_palette_stop ( );
}



void room_funct_44_all ( Room *room, u8 action )
{
	if ( action == ROOM_ACTION_ENTER ) // enter
	{
		_room_enter ( room );
	}

	else if ( action == ROOM_ACTION_STAY ) // stay
	{
		_room_stay ( room );
	}

	else if ( action == ROOM_ACTION_LEAVE ) // leave
	{
		_room_leave ( room );
	}
}

