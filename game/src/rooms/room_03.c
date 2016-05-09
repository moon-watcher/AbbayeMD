#include "../inc/include.h"


static GameObject *drop [ 5 ];


static u8          nb_drop;
static u16         i;




static void _room_enter ( Room *room )
{
	nb_drop = goManagerFindAllByEntityId ( &waObjects, drop, 54 ); // Drop

	for ( i = 0; i < nb_drop;   i++ )
	{
		drop [ i ]->grabity = false;
		drop [ i ]->counter = 0;
	}
}



static void _room_stay ( Room *room )
{
	for ( i=0; i<nb_drop; i++ )
	{
		enemy_drop ( drop, i );
	}
}



void room_funct_03_all ( Room *room, u8 action )
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
