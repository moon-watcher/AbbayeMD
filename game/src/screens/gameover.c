#include "../../inc/include.h"



void screen_gameover ( )
{
	displayOff(0);

	palette_init ( );
	vram_init ( VRAM_DEFAULT );

	resetScreen();
	resetScroll();

	Screen *screen = (Screen*) screen_get ( 0 );

	drawImage ( (Image*) screen->foreground, PLAN_A );

	if ( screen->background != NULL )
	{
		drawImage ( (Image*) screen->background, PLAN_B );
	}


	displayOn ( 30 );
	play_music ( MUSIC_GAMEOVER );

	waitSc ( 6 );
	waitJoySc ( 7 );

	displayOff ( 10 );

	musicStop();

	vram_destroy();
}
