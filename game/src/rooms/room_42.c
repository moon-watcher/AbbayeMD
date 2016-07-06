#include "../inc/include.h"



static GameObject *plant [ 3 ];
static GameObject *spit  [ 6 ];

static u8          nb_plant;
static u8          nb_spit;

static u16         i;



static void _room_enter ( Room *room )
{
	nb_spit  = goManagerFindAllByEntityId ( &waObjects, spit,  28 ); // Spit
	nb_plant = goManagerFindAllByEntityId ( &waObjects, plant, 27 ); // Plant

	for ( i = 0; i < nb_spit; i++ )
	{
		setActive ( spit[i], 0 );
	}

	philippe_init ( );
	philippe_add ( 60, 88 );
	philippe_add ( 188, 212 );
}



static void _room_stay ( Room *room )
{
	for ( i = 0; i < nb_plant; i++ )
	{
		enemy_plant ( plant, spit, i );
	}

	philippe_update();
}



void room_funct_42_all ( Room *room, u8 action )
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
		//_room_leave ( room );
	}
}
