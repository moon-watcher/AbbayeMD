#include "../inc/include.h"

void debug_info ( )
{
	if ( !DEVELOPEMENT )
	{
		return;
	}


//	// which cross
//	drawUInt ( invertedCross?1:0, 6, 25, 0 );
//
//
//	// vram objects
//	drawUInt ( vram_count(), 8, 25, 2 );
//
//
//	// number of gameobjects
//	drawUInt ( listptr_size(&waObjects), 11, 25, 2 );
//
//
//
//	// number of collisionable objects
//	drawUInt ( devu2, 14, 25, 2 );
//
//
//
//	// free mem
//	drawMem ( 17, 25 );


//	// invulnerability
//	if ( player.invulnerable )
//	{
//		drawText ( "IN", 23, 25 );
//	}
//	else
//	{
//		drawText ( "  ", 23, 25 );
//	}


//	// current room
//	drawUInt ( game.room.x, 26, 25, 1 );
//	drawText ( ",", 27,25 );
//	drawUInt ( game.room.y, 28, 25, 1 );


	//frames per second
	showFps ( );



	// invulnerability
	if ( joy1_pressed_y )
	{
		player.invulnerable = !player.invulnerable;
	}


	//	show mask
	if ( joy1_pressed_x )
	{
		if ( devu5++ % 2 == 0 )
		{
			mask_draw ( &currentMask );
		}
		else
		{
			SYS_disableInts();
			VDP_clearPlan ( BPLAN, 1 );
			SYS_enableInts();

			room_draw ( currentRoom );
			mask_ini_priorities ( );
		}
	}


	// fast move
	if ( joy1_active_z )
	{
		     if ( joy1_pressed_up    ) { game_room_y ( -1 ); game.status = GAME_STATUS_GONEXT; }
		else if ( joy1_pressed_down  ) { game_room_y ( +1 ); game.status = GAME_STATUS_GONEXT; }
		else if ( joy1_pressed_left  ) { game_room_x ( -1 ); game.status = GAME_STATUS_GONEXT; }
		else if ( joy1_pressed_right ) { game_room_x ( +1 ); game.status = GAME_STATUS_GONEXT; }
	}
}



void showFps ( )
{
	drawUInt ( getFPS(), 30, 25, 2 );
}
