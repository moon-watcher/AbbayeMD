#include "../inc/include.h"


static GameObject *archer [ 1 ] = { };
static GameObject *arrow [ 1 ] = { };
static GameObject *explosion = NULL;

static u8          nb_archer = 0;
static u16         i = 0;




      static u16 _steps = 14;
const static u16 _colors [ 3 ] [ 30 ] =
{
	{ 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x001, 0x002, 0x003, 0x004, 0x004, 0x003, 0x002, 0x001, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000 },
	{ 0x000, 0x001, 0x002, 0x003, 0x004, 0x005, 0x006, 0x007, 0x008, 0x009, 0x00A, 0x00B, 0x00C, 0x00D, 0x00E, 0x00E, 0x00D, 0x00C, 0x00B, 0x00A, 0x009, 0x008, 0x007, 0x006, 0x005, 0x004, 0x003, 0x002, 0x001, 0x000 },
	{ 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x001, 0x002, 0x003, 0x004, 0x005, 0x006, 0x007, 0x008, 0x008, 0x007, 0x006, 0x005, 0x004, 0x003, 0x002, 0x001, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000 }
};

static _voidCallback *_md_palette_swap ( )
{
	if ( game.version == VERSION_MD )
	{
		if ( vtimer % 3 != 0 )
		{
			return 0;
		}

		if ( _steps == 30 )
		{
			_steps = 0;
		}

		VDP_setPaletteColor ( PAL1*16 +  9, _colors[0][_steps] );
		VDP_setPaletteColor ( PAL1*16 + 10, _colors[1][_steps] );
		VDP_setPaletteColor ( PAL1*16 + 11, _colors[2][_steps] );

		++_steps;
	}

	return 0;
}

static void _md_palette_init ( )
{
	_steps = 14;
	SYS_setVIntCallback ( (_voidCallback*) _md_palette_swap );
}

static void _md_palette_stop ( )
{
	SYS_setVIntCallback ( (_voidCallback*) NULL );
}





static void _room_enter ( Room *room )
{
	nb_archer = goManagerFindAllByEntityId ( &waObjects, archer, 33 ); // Archer skeleton
	goManagerFindAllByEntityId ( &waObjects, arrow, 34 ); // Arrow

	explosion = goManagerFindByEntityId ( &waObjects, 65, 0 ); // Arrow explosion

	enemy_bullet_init ( arrow[0], explosion );

	_md_palette_init();
	philippe_init ( );
	philippe_add ( 220, 228 );
}



static void _room_stay ( Room *room )
{
	for ( i=0; i<nb_archer; i++ )
	{
		enemy_archer ( archer, arrow, i );
		enemy_bullet ( arrow[i] );
	}

	philippe_update();
}



static void _room_leave ( room )
{
	enemy_bullet_delete ( );

	_md_palette_stop ( );
}



void room_funct_14_all ( Room *room, u8 action )
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
