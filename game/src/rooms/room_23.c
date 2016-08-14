#include "../inc/include.h"


static GameObject *archer [ 3 ] = { };
static GameObject *arrow [ 3 ] = { };
static GameObject *explosion = NULL;

static u8          nb_archer = 0;
static u16         i = 0;




static void _room_enter ( Room *room )
{
	nb_archer = goManagerFindAllByEntityId ( &waObjects, archer, 33 ); // Archer skeleton
	goManagerFindAllByEntityId ( &waObjects, arrow, 34 ); // Arrow

	explosion = goManagerFindByEntityId ( &waObjects, 65, 0 ); // Arrow explosion

	enemy_bullet_init ( arrow[0], explosion );

	alternate_color_in_cm ( );

	philippe_init ( );
	philippe_add ( 172, 196 );
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
}



void room_funct_23_all ( Room *room, u8 action )
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
