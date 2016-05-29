#include "../../inc/include.h"



static const u16 waits [ 7 ] = { 300, 100, 50, 50, 50, 150, 200 };



void screen_ending ( )
{
	displayOff(0);

	vram_init ( VRAM_DEFAULT );

	resetScroll();
	resetScreen();

	palette_init();
	play_music( MUSIC_HOPE );


	u8 i, hz = getHz();

	VDP_waitVSync();

	for ( i = 0; i < 7; i++ )
	{
		SYS_disableInts ( );
		drawImage ( (Image*) screen_get ( i+3 )->foreground, APLAN );
		SYS_enableInts();

		if ( i == 0 )
		{
			show_screen ( 10 );
		}
		else
		{
			show_screen ( 0 );
		}

		waitHz ( waits[i] * hz / 100 );
	}

	vram_destroy();

	waitSc(6);
	waitJoySc(7);

	displayOff(0);
}
