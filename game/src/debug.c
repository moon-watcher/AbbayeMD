#include "../inc/include.h"



void debug_info ( )
{
	if ( !DEV ) return;


	debug_fps       = getFPS();
	//debug_z80load   = SND_getCPULoad_XGM();
	debug_nbObjects = goManagerCount ( &waObjects );


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






	// current room
	if ( debug_show_nb_room )
	{
		drawUInt ( game.room.x, 26, 25, 1 );
		drawText ( ",", 27,25 );
		drawUInt ( game.room.y, 28, 25, 1 );
		debug_show_nb_room = false;
	}


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
			VDP_clearPlan ( PLAN_B, 1 );
			SYS_enableInts();

			room_draw ( currentRoom );
			mask_ini_priorities ( );
		}
	}


	// fast move
	if ( joy1_active_z )
	{
		player.go->vel_y = FIX32(0);
		player.go->grabity = false;

		     if ( joy1_pressed_up    ) { game_room_y ( -1 ); game.status = GAME_STATUS_GONEXT; }
		else if ( joy1_pressed_down  ) { game_room_y ( +1 ); game.status = GAME_STATUS_GONEXT; }
		else if ( joy1_pressed_left  ) { game_room_x ( -1 ); game.status = GAME_STATUS_GONEXT; }
		else if ( joy1_pressed_right ) { game_room_x ( +1 ); game.status = GAME_STATUS_GONEXT; }
	}
	else if ( joy1_released_z )
	{
		player.go->grabity = true;
	}
}



void showFps ( )
{
	char str[40] = {};

	uintToStr ( debug_fps, str, 2 );
	VDP_drawText ( str, 30, 25 );
}


void showZ80Load ( )
{
	char str[40] = {};

	uintToStr ( debug_z80load, str, 3);
	VDP_drawText ( str, 22, 25 );
}


void showNbObjects ()
{
	char str[40] = {};

	uintToStr ( debug_nbObjects, str, 2 );
	VDP_drawText ( str, 19, 25 );
}

void showOcb()
{
	char str[40] = {};

	uintToStr ( devu2, str, 2 );
	VDP_drawText ( str, 16, 25 );
}

void showMcb()
{
	char str[40] = {};

	uintToStr ( devu1, str, 2 );
	VDP_drawText ( str, 13, 25 );
}
