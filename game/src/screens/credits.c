#include "../../inc/include.h"





static s16 y;



void write ( const char *str, u16 pal, s16 inc )
{
	u16 x = VDP_getScreenWidth() / 8 / 2 - strlen(str) / 2;

	VDP_setTextPalette ( pal );

	drawText( str, x, y );

	y += inc;
}



void screen_credits ( )
{
	if ( DEVELOPEMENT ) return;

	displayOff(0);
	displayInit();

	VDP_setScreenWidth320( );
	VDP_setPlanSize(64,32);

	vram_init ( VRAM_DEFAULT );

	font_load ( 1 );

	resetScroll ( );
	resetScreen ( );

	preparePal ( PAL1, palette_get(6)->data );
	prepareColor ( PAL1 * 16 + 1, 0xf0f );
	prepareColor ( PAL2 * 16 + 1, 0xf88 );

	y = 3;

	write ( "L'Abbaye des morts for", PAL1, 1 );
	write ( "Sega Genesis/Megadrive by", PAL1, 1 );
	write ( "Mun - @MoonWatcherMD", PAL2, 1  );
	write ( "2011-2016", PAL2, 3  );

	write ( "Original game by", PAL1, 1 );
	write ( "Locomalito & Gryzor87", PAL2, 1 );
	write ( "2010", PAL2, 2 );

	write ( "MSX skin", PAL1, 1 );
	write ( "Gerardo Herce - @pipagerardo", PAL2, 2  );

	write ( "GB, CGA & PCW skin", PAL1, 1 );
	write ( "Felipe Monge - @vakapp", PAL2, 2 );

	write ( "Megadrive skin", PAL1, 1 );
	write ( "Daniel Nevado - @DanySnowyman", PAL2, 2 );

	//write ( "NES skin", PAL1, 1 );
	//write ( "Juan Valencia - @calvellido", PAL2, 2 );

	write ( "Music & SFX", PAL1, 1 );
	write ( "David Sanchez - @DavidBonus", PAL2, 2 );



	show_screen ( 10 );

	waitJoySc ( 6 );


	displayOff ( 10 );
	VDP_setScreenWidth256 ( );
	VDP_setPlanSize(32,64);

	vram_destroy();
}

