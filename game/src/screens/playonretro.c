#include "../../inc/include.h"
#include "../../res/all/screens.h"

#define IMAGES  1


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


	const u16 x = 9;
	const u16 y = 8;


	u16 i, vram_pos [ IMAGES ];



	Image *images [ IMAGES ] =
	{
		(Image*) &screen_playonretro_00
	};

	for ( i=0; i<IMAGES; i++ )
	{
		u16 size = images[i]->tileset->numTile;
		vram_pos [ i ] = vram_new ( size );
		VDP_loadTileData ( images[i]->tileset->tiles, vram_pos[i], size, 0 );
	}


	waitHz(20);

	for ( i=0; i<IMAGES; i++ )
	{
		waitHz(3);

		SYS_disableInts();
		VDP_setPalette ( PAL1, images[i]->palette->data );
		VDP_setMap ( PLAN_A, images[i]->map,TILE_ATTR_FULL ( PAL1, 0, 0, 0, vram_pos[i] ), x, y );
		SYS_enableInts();
	}

	vram_destroy();

	waitJoySc(6);

	displayOff(10);
	//musicStop ( );
}



//#include "../../inc/include.h"
//#include "../../res/all/screens.h"
//
//void screen_playonretro ( )
//{
//	if ( DEV ) return;
//
//	displayOff(0);
//
//	VDP_setScreenWidth320();
//	VDP_setPlanSize ( 64, 32 );
//
//	palette_init();
//	vram_init ( VRAM_DEFAULT );
//
//	resetScroll();
//	resetScreen();
//
//	//play_music ( MUSIC_PROLOGUE );
//
//	drawImage ( (Image*) &screen_playonretro_all, PLAN_B );
//
//	displayOn(30);
//
//	vram_destroy();
//
//	waitJoySc(6);
//
//	displayOff(30);
//	//musicStop ( );
//}
