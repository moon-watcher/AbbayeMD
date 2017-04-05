#include "../inc/include.h"



Passage *passage_find ( u8 room_x, u8 room_y )
{
	u8 i;

	for ( i=0; i<PASSAGE_MAX; i++ )
	{
		Passage *p = (Passage*) &passage_list [ game.version ] [ i ];

		if ( p->room_src.x == room_x  &&  p->room_src.y == room_y )
		{
			return (Passage*) p;
		}
	}

	return NULL;
}



void passage_touched ( )
{
	Passage *p = (Passage*) passage_find ( game.room.x, game.room.y );

	if ( p )
	{
		play_sfx ( SFX_DOOR );

		VDP_fadeOutAll ( getHz ( ) / 3, 1 );
		waitHz ( getHz ( ) / 2 );

		game.room.x = p->room_dst.x;
		game.room.y = p->room_dst.y;
		game.status = GAME_STATUS_GONEXT;

		player.in_passage  = true;
		player.go->vel_x   = zero;
		player.go->vel_y   = zero;
		player.action      = PLAYER_STAY;
		player.saved.vel_x = zero;
		player.saved.vel_y = zero;
		player.saved.object = player_actions [ game.version ] [ PLAYER_STAY ] [ game.crusader ];
	}
}
