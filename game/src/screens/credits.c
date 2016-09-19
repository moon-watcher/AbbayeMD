#include "../../inc/include.h"





static s16 y = 0;



void write ( const char *str, u16 pal, s16 inc )
{
	u16 x = VDP_getScreenWidth() / 8 / 2 - strlen(str) / 2;

	VDP_setTextPalette ( pal );

	drawText( str, x, y );

	y += inc;
}



void screen_credits ( )
{
	if ( DEV ) return;

	displayOff(0);
	VDP_setScreenWidth320( );
	VDP_setPlanSize ( 64, 32 );
	vram_init ( VRAM_DEFAULT );
	font_load ( 1 );
	resetScroll ( );
	resetScreen ( );

	preparePal ( PAL1, palette_get(6)->data );
	prepareColor ( PAL1 * 16 + 1, 0xf0f );
	prepareColor ( PAL2 * 16 + 1, 0xf88 );

	y = 9;

	write ( "L'Abbaye des morts for", PAL1, 1 );
	write ( "Sega Genesis / Megadrive", PAL1, 1 );
	write ( "Mun @MoonWatcherMD", PAL2, 1  );
	write ( "2011 - 2016", PAL2, 3  );

	write ( "Original game", PAL1, 1 );
	write ( "Locomalito & Gryzor87", PAL2, 1 );
	write ( "2010", PAL2, 9 );

	write ( "Made with Stef's SGDK 1.21", PAL1, 0 );


	displayOn ( 10 );
	waitJoySc ( 3 );

	if ( joy1_pressed_abc || joy1_pressed_start )
	{
		goto end;
	}

	displayOff ( 10 );
	resetScreen ( );

	y = 1;

	write ( "MSX skin", PAL1, 1 );
	write ( "Gerardo Herce @pipagerardo", PAL2, 2  );

	write ( "GB, CGA, NES & PCW skin", PAL1, 1 );
	write ( "Felipe Monge @vakapp", PAL2, 2 );

	write ( "Megadrive skin", PAL1, 1 );
	write ( "Daniel Nevado @DanySnowyman", PAL2, 2 );

	write ( "C64 skin", PAL1, 1 );
	write ( "Igor Errazkin @Errazking", PAL2, 2 );

	write ( "Music & SFX", PAL1, 1 );
	write ( "Paolo Arus 'DaRkHoRaCe'", PAL2, 2 );

	write ( "Music & SFX (C64)", PAL1, 1 );
	write ( "Manuel Gomez 'Baron Ashler'", PAL2, 2 );

	write ( "Testers", PAL1, 1 );
	write ( "Alfonso @_SrPresley_", PAL2, 1 );
	write ( "Ruben Vaquer @TitoAdol3", PAL2, 2 );

	write ( "Special thanks to", PAL1, 1 );
	write ( "Leander @leanderpixel", PAL2, 1 );
	write ( "Urza", PAL2, 1 );
	write ( "Stef @MegadriveDev", PAL2, 1 );
	write ( "Jose Zanni @josepzin", PAL2, 3 );

	displayOn ( 10 );
	waitJoySc ( 3 );

//	y = 6;
//
//	write ( "L'Abbaye des morts for", PAL1, 1 );
//	write ( "Sega Genesis/Megadrive", PAL1, 2 );
//	write ( "by", PAL1, 2 );
//	write ( "Mun - @MoonWatcherMD", PAL2, 1  );
//	write ( "2011-2016", PAL2, 5  );
//
//	write ( "Original game", PAL1, 2 );
//	write ( "by", PAL1, 2 );
//	write ( "Locomalito & Gryzor87", PAL2, 1 );
//	write ( "2010", PAL2, 2 );



end:

	displayOff ( 10 );
	VDP_setScreenWidth256 ( );
	VDP_setPlanSize ( 32, 32 );
	vram_destroy();
}

