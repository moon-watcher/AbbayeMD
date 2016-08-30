#include "../inc/include.h"







Room *room_get ( )
{
   return (Room*) room_list [ game.version ] [ game.room.y ] [ game.room.x ];
}



void room_draw ( Room *room )
{
	debug_show_nb_room = true;

	drawImageXY ( room->foreground, PLAN_A, 0, 0 );
	drawImageXY ( room->background, PLAN_B, 0, 0 );
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

