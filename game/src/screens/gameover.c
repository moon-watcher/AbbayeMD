#include "../../inc/include.h"



void screen_gameover ( )
{


	displayOff();

//	SPR_clear();
//	SPR_end();

	palette_init();
	vram_init ( VRAM_DEFAULT );

	resetScreen();
	resetScroll();

	play_music ( MUSIC_GAMEOVER );


	Screen *screen = (Screen*) screen_get ( 0 );

	drawImage ( (Image*) screen->foreground, APLAN );

	if ( screen->background != NULL )
	{
		drawImage ( (Image*) screen->background, BPLAN );
	}


//	VDP_setEnable ( TRUE );
//	show_screen();
	displayOn();


	waitMs ( 7000 );
	JOY_waitPressBtn();

	vram_destroy();


	//while ( !joy1_pressed_btn ) JoyReader_update();
}
