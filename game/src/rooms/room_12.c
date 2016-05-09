#include "../inc/include.h"


static GameObject *coco;





static void _room_enter ( Room *room )
{
	coco = goManagerFindByEntityId ( &waObjects, 26, 0 ); // Coco
}



static void _room_stay ( Room *room )
{
	enemy_coco ( coco );
}



void room_funct_12_all ( Room *room, u8 action )
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
