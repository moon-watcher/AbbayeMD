#include "../inc/include.h"


static GameObject *gargoyle [ 1 ] = {};
static GameObject *spit [ 1 ] = {};
//static GameObject *explosion = NULL;

static u8          nb_gargoyle = 0;
static u16         i = 0;




static void _room_enter ( Room *room )
{
	nb_gargoyle = goManagerFindAllByEntityId ( &waObjects, gargoyle, 51 ); // Gargoyle
	goManagerFindAllByEntityId ( &waObjects, spit,     52 ); // Gargoyle spit

	//explosion = goManagerFindByEntityId ( &waObjects, 66, 0 ); // Gargoyle spit explosion

	//enemy_bullet_init ( spit[0], explosion );
	enemy_bullet_init ( spit[0] );

	philippe_init ( );
	philippe_add ( 110, 135 );
}



static void _room_stay ( Room *room )
{
	for ( i=0; i<nb_gargoyle; i++ )
	{
		enemy_gargoyle ( gargoyle, spit, i );
		enemy_bullet ( spit[i] );
	}

	philippe_update();
}



static void _room_leave ( )
{
	enemy_bullet_delete ( );
}



void room_funct_24_all ( Room *room, u8 action )
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
