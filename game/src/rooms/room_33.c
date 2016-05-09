#include "../inc/include.h"


static GameObject *death;
static GameObject *scythe [ 5 ];





static void _room_enter ( Room *room )
{
	death = goManagerFindByEntityId ( &waObjects, 39, 0 ); // Death
	goManagerFindAllByEntityId ( &waObjects, scythe, 41 ); // Scythe
}



static void _room_stay ( Room *room )
{
	enemy_death ( death, scythe );
}



void room_funct_33_all ( Room *room, u8 action )
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





