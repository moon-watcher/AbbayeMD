#include "../inc/include.h"



static void _room_enter ( Room *room )
{
	philippe_init ( );
	philippe_add ( 66, 92 );

	alternate_color_in_cm ( );
}


static void _room_stay ( Room *room )
{
	philippe_update ( );
}



void room_funct_22_all ( Room *room, u8 action )
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





