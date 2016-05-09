#include "../../inc/include.h"





static s16 y;



void d ( const char *str, u16 pal, s16 inc )
{
	u16 x = VDP_getScreenWidth() / 8 / 2 - strlen(str) / 2;

	VDP_setTextPalette ( pal );

	drawText( str, x, y );

	y += inc;
}



void screen_credits ( )
{
	if ( DEVELOPEMENT ) return;

	displayOff();
	VDP_setScreenWidth320( );
	VDP_setPlanSize(64,32);

	vram_init ( VRAM_DEFAULT );

	font_load ( 1 );

	resetScroll ( );
	resetScreen ( );


	preparePal ( PAL1, palette_get(6)->data );
	prepareColor( PAL1 * 16 + 1, 0xf0f );
	prepareColor( PAL2 * 16 + 1, 0xf88 );

	y = 2;

	d ( "L'Abbaye des morts for", PAL1, 1 );
	d ( "Sega Genesis/Megadrive by", PAL1, 1 );
	d ( "Mun - @MoonWatcherMD", PAL2, 1  );
	d ( "2011-2016", PAL2, 2  );

	d ( "Original game by", PAL1, 1 );
	d ( "Locomalito & Gryzor87", PAL2, 1 );
	d ( "2010", PAL2, 2 );

	d ( "MSX skin", PAL1, 1 );
	d ( "Gerardo Herce - @pipagerardo", PAL2, 2  );

	d ( "GB, CGA & PCW skin", PAL1, 1 );
	d ( "Felipe Monge - @vakapp", PAL2, 2 );

	d ( "Megadrive skin", PAL1, 1 );
	d ( "Daniel Nevado - @DanySnowyman", PAL2, 2 );

	d ( "NES skin", PAL1, 1 );
	d ( "Juan Valencia - @calvellido", PAL2, 2 );

	d ( "Music & SFX", PAL1, 1 );
	d ( "David Sanchez - @DavidBonus", PAL2, 2 );



	show_screen ( );

	JOY_waitPress ( JOY_1, BUTTON_ABCS );

	displayOff();
	VDP_setScreenWidth256 ( );
	VDP_setPlanSize(32,64);

	vram_destroy();
}

