#include "../../inc/include.h"



void screen_gameover ( )
{
	displayOff(0);

	palette_init ( );
	vram_init ( VRAM_DEFAULT );

	resetScreen();
	resetScroll();

	play_music ( MUSIC_GAMEOVER );


	Screen *screen = (Screen*) screen_get ( 0 );

	drawImage ( (Image*) screen->foreground, PLAN_A );

	if ( screen->background != NULL )
	{
		drawImage ( (Image*) screen->background, PLAN_B );
	}


	displayOn ( 0 );

	waitSc ( 6 );
	waitJoySc ( 7 );

	vram_destroy();
}
