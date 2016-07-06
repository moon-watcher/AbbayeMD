#include "../inc/include.h"



static u16 _vrampos[2];



Room *room_get ( )
{
   return (Room*) room_list [ game.version ] [ game.room.y ] [ game.room.x ];
}



void room_draw ( Room *room )
{
	debug_show_nb_room = true;

	_vrampos [ 0 ] = drawImageXY ( room->foreground, APLAN, 0, 0 );
	_vrampos [ 1 ] = drawImageXY ( room->background, BPLAN, 0, 0 );
}



u8 room_objects_count ( Room *room )
{
	u8 inc = 0;

	while ( room->objects->array[inc].entity != NULL )
	{
		++inc;
	}

	return inc;
}



void room_function ( Room *room, u8 action )
{
	room->function ( room, action );
}



void room_null ( Room * room, u8 action )
{

}


u16 room_get_vrampos ( u16 plan )
{
	if ( plan == APLAN ) return _vrampos [ 0 ];
	if ( plan == BPLAN ) return _vrampos [ 1 ];

	return 0;
}
