#include "../../inc/include.h"
#include "../../res/all/screens.h"

void screen_playonretro ( )
{
	if ( DEV ) return;

	displayOff(0);

	VDP_setScreenWidth320();
	VDP_setPlanSize ( 64, 32 );

	palette_init();
	vram_init ( VRAM_DEFAULT );

	resetScroll();
	resetScreen();

	//play_music ( MUSIC_PROLOGUE );

	drawImage ( (Image*) &screen_playonretro_all, PLAN_B );

	displayOn(30);

	vram_destroy();

	waitJoySc(6);

	displayOff(30);
	//musicStop ( );
}
