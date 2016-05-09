#include "../inc/include.h"




Room *room_get ( )
{
   return (Room*) room_list [ game.version ] [ game.room.y ] [ game.room.x ];
}



void room_draw ( Room *room )
{
	SYS_disableInts();

	u16 pos = vram_new ( room->foreground->tileset->numTile );

	VDP_drawImageEx ( APLAN, (Image*) room->foreground, TILE_ATTR_FULL(PAL1,0,0,0, pos), 0, 0, 0, 0 );

	preparePal ( PAL1, room->foreground->palette->data );

   if ( room->background != NULL )
   {
   	pos = vram_new ( room->background->tileset->numTile );

		VDP_drawImageEx ( BPLAN, (Image*) room->background, TILE_ATTR_FULL(PAL0,0,0,0,pos), 0, 0, 0, 0 );

		preparePal ( PAL0, room->background->palette->data );
	}

	SYS_enableInts();
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
