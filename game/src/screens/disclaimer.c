#include "../../inc/include.h"


// disclaimer.c by Jack Nolddor


#include "../../res/all/screens.h"

/* :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: */


#define IMG_ATTRIBUTES( palette ) TILE_ATTR_FULL( palette, FALSE, FALSE, FALSE, tileIndex )

#define TEXTDISCLAIMER_FADESTEPS 8
#define TEXTDISCLAIMER_NUMCOLORS 3

#define DISCLAIMERBG_FADESTEPS 7
#define DISCLAIMERBG_NUMCOLORS 12

#define DISCLAIMERLOGO_FADESTEPS 8
#define DISCLAIMERLOGO_NUMCOLORS 13

#define DISCLAIMERLOGOLED_FADESTEPS 12
#define DISCLAIMERLOGOLED_NUMCOLORS 6


/* :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: */


static const u16 textDisclaimerFadeColors[ TEXTDISCLAIMER_FADESTEPS ][ TEXTDISCLAIMER_NUMCOLORS ] =
{
		{ 0x0000, 0x0000, 0x0000 },
		{ 0x0222, 0x0222, 0x0222 },
		{ 0x0444, 0x0444, 0x0444 },
		{ 0x0666, 0x0666, 0x0666 },
		{ 0x0888, 0x0888, 0x0888 },
		{ 0x0AAA, 0x0AAA, 0x0AAA },
		{ 0x0CCC, 0x0CCC, 0x0AAA },
		{ 0x0EEE, 0x0CCC, 0x0AAA }
};

static const u16 disclaimerBGFadeColors[ DISCLAIMERBG_FADESTEPS ][ DISCLAIMERBG_NUMCOLORS ] =
{
		{ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },
		{ 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0002, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },
		{ 0x0040, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0004, 0x0002, 0x0000, 0x0000, 0x0000, 0x0000 },
		{ 0x0060, 0x0040, 0x0020, 0x0000, 0x0000, 0x0000, 0x0006, 0x0004, 0x0002, 0x0000, 0x0000, 0x0000 },
		{ 0x0080, 0x0060, 0x0040, 0x0020, 0x0000, 0x0000, 0x0008, 0x0006, 0x0004, 0x0002, 0x0000, 0x0000 },
		{ 0x00A0, 0x0080, 0x0060, 0x0040, 0x0020, 0x0000, 0x000A, 0x0008, 0x0006, 0x0004, 0x0002, 0x0000 },
		{ 0x00C0, 0x00A0, 0x0080, 0x0060, 0x0040, 0x0020, 0x000C, 0x000A, 0x0008, 0x0006, 0x0004, 0x0002 },
};

static const u16 disclaimerLogoFadeColors[ DISCLAIMERLOGO_FADESTEPS ][ DISCLAIMERLOGO_NUMCOLORS ] =
{
		{ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },
		{ 0x0008, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0080, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },
		{ 0x000A, 0x0008, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00A0, 0x0080, 0x0000, 0x0000, 0x0000, 0x0000 },
		{ 0x000C, 0x000A, 0x0008, 0x0000, 0x0000, 0x0000, 0x0000, 0x00C0, 0x00A0, 0x0080, 0x0000, 0x0000, 0x0000 },
		{ 0x000E, 0x000C, 0x000A, 0x0008, 0x0000, 0x0000, 0x0000, 0x00E0, 0x00C0, 0x00A0, 0x0080, 0x0000, 0x0000 },
		{ 0x022E, 0x000E, 0x000C, 0x000A, 0x0008, 0x0000, 0x0000, 0x04E4, 0x00E0, 0x00C0, 0x00A0, 0x0080, 0x0000 },
		{ 0x044E, 0x022E, 0x000E, 0x000C, 0x000A, 0x0008, 0x0000, 0x06E6, 0x04E4, 0x00E0, 0x00C0, 0x00A0, 0x0080 },
		{ 0x066E, 0x044E, 0x022E, 0x000E, 0x000C, 0x000A, 0x0008, 0x06E6, 0x04E4, 0x00E0, 0x00C0, 0x00A0, 0x0080 }
};

static u8 disclaimerLogoLedIndex = 0;
static u8 ledUpdate = 0;

static const u16 disclaimerLogoLedFadeColors[ DISCLAIMERLOGOLED_FADESTEPS ][ DISCLAIMERLOGOLED_NUMCOLORS ] =
{
		{ 0x08E8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },
		{ 0x06E6, 0x08E8, 0x0000, 0x0000, 0x0000, 0x0000 },
		{ 0x04E4, 0x06E6, 0x08E8, 0x0000, 0x0000, 0x0000 },
		{ 0x00E0, 0x04E4, 0x06E6, 0x08E8, 0x0000, 0x0000 },
		{ 0x00C0, 0x00E0, 0x04E4, 0x06E6, 0x08E8, 0x0000 },
		{ 0x00A0, 0x00C0, 0x00E0, 0x04E4, 0x06E6, 0x08E8 },
		{ 0x0000, 0x00A0, 0x00C0, 0x00E0, 0x04E4, 0x06E6 },
		{ 0x0000, 0x0000, 0x00A0, 0x00C0, 0x00E0, 0x04E4 },
		{ 0x0000, 0x0000, 0x0000, 0x00A0, 0x00C0, 0x00E0 },
		{ 0x0000, 0x0000, 0x0000, 0x0000, 0x00A0, 0x00C0 },
		{ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00A0 },
		{ 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },
};


/* :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: */





static void doDisclaimerLogoLedUpdate ( void )
{
	if ( ledUpdate == 0 && disclaimerLogoLedIndex == 0 )
	{
		return;
	}

	VDP_setPaletteColors( 33, (u16 *) disclaimerLogoLedFadeColors[ disclaimerLogoLedIndex ], DISCLAIMERLOGOLED_NUMCOLORS );

	disclaimerLogoLedIndex++;

	if( disclaimerLogoLedIndex >= DISCLAIMERLOGOLED_FADESTEPS )
	{
		disclaimerLogoLedIndex = 0;
	}
}


/* :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: */


static void doTextDisclaimerFadeIn( void )
{
	u8 i;

	for( i = 1; i < TEXTDISCLAIMER_FADESTEPS; i++ )
	{
		waitHz(6);

		VDP_setPaletteColors( 13, (u16 *) textDisclaimerFadeColors[ i ], TEXTDISCLAIMER_NUMCOLORS );
	}
}


/* :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: */


static void doDisclaimerBGFadeIn( void )
{
	u8 i;

	for( i = 1; i < DISCLAIMERBG_FADESTEPS; i++ )
	{
		waitHz(4);

		VDP_setPaletteColors( 1, (u16 *) disclaimerBGFadeColors[ i ], DISCLAIMERBG_NUMCOLORS );
	}
}


/* :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: */


static void doDisclaimerLogoFadeIn( void )
{
	u8 i;

	for( i = 1; i < DISCLAIMERLOGO_FADESTEPS; i++ )
	{
		waitHz(4);

		VDP_setPaletteColors( 17, (u16 *) disclaimerLogoFadeColors[ i ], DISCLAIMERLOGO_NUMCOLORS );
		doDisclaimerLogoLedUpdate( );
	}
}


/* :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: */


static void doDisclaimerBGFadeOut( void )
{
	s8 i;

	for( i = (DISCLAIMERBG_FADESTEPS - 2); i >= 0; i-- )
	{
		waitHz(4);

		VDP_setPaletteColors( 1, (u16 *) disclaimerBGFadeColors[ ( u8 ) i ], DISCLAIMERBG_NUMCOLORS );
		doDisclaimerLogoLedUpdate ( );
	}
}


/* :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: */


static void doTextDisclaimerFadeOut( void )
{
	s8 i;

	for( i = (TEXTDISCLAIMER_FADESTEPS - 2 ); i >= 0 ; i-- )
	{
		waitHz(4);

		VDP_setPaletteColors( 13, (u16 *) textDisclaimerFadeColors[ ( u8 ) i ], TEXTDISCLAIMER_NUMCOLORS );
		doDisclaimerLogoLedUpdate ( );
	}
}


/* :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: */


static void doDisclaimerLogoFadeOut( void )
{
	s8 i;

	for( i = (DISCLAIMERLOGO_FADESTEPS -2) ; i >= 0 ; i-- )
	{
		waitHz(4);

		VDP_setPaletteColors( 17, (u16 *) disclaimerLogoFadeColors[ ( u8 ) i ], DISCLAIMERLOGO_NUMCOLORS );
		doDisclaimerLogoLedUpdate( );
	}
}


/* :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: */

static void drawDisclaimerGraphics( void )
{
	u16 tileIndex;

	displayOff(0);

	//VDP_waitVSync( );
	//VDP_setEnable( FALSE );

	SYS_disableInts();

	tileIndex = TILE_USERINDEX;
	VDP_drawImageEx( PLAN_B, &screen_disclaimerBGImage_all, IMG_ATTRIBUTES( PAL0 ), 0, 0, 0, FALSE );

	tileIndex += screen_disclaimerBGImage_all.tileset->numTile;
	VDP_drawImageEx( PLAN_A, &screen_disclaimerLogoImage_all, IMG_ATTRIBUTES( PAL1 ), 9, 9, 0, FALSE );

	tileIndex += screen_disclaimerLogoImage_all.tileset->numTile;
	VDP_drawImageEx( PLAN_B, &screen_disclaimerLogoLedImage_all, IMG_ATTRIBUTES( PAL2 ), 26, 9, 0, FALSE );

	SYS_enableInts();

	preparePal(PAL0, screen_disclaimerBGImage_all.palette->data);
	preparePal(PAL1, screen_disclaimerLogoImage_all.palette->data);
	preparePal(PAL2, screen_disclaimerLogoLedImage_all.palette->data);

	//VDP_setEnable ( TRUE );
	//displayOn ( 0 ); //displayOn();
}


/* :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: */


static void _disclaimer_cool ( void )
{
	ledUpdate = 1;

	drawDisclaimerGraphics( );
	doTextDisclaimerFadeIn( );
	doDisclaimerBGFadeIn( );

	disclaimerLogoLedIndex = 0;

	doDisclaimerLogoFadeIn( );

	u8 i = getHz();

	while ( i-- )
	{
		waitHz(4);
		doDisclaimerLogoLedUpdate ( );
	}

	doDisclaimerBGFadeOut( );
	doTextDisclaimerFadeOut( );

	ledUpdate = 0;
	doDisclaimerLogoFadeOut ( );

	displayOff(0);
	resetScreen();
}




extern const struct genresTiles screen_disclaimer_all;




static void _disclaimer_simple ( )
{
	displayOff ( 0 );
	resetScroll();
	resetScreen();

	u16 size = screen_disclaimer_all.width * screen_disclaimer_all.height;
	u16 pos = vram_new ( size );
	VDP_loadTileData ( screen_disclaimer_all.tiles, pos, size, 0 );
	VDP_fillTileMapRectInc ( PLAN_A, TILE_ATTR_FULL(PAL1, 0, 0, 0, pos), 0, 0, screen_disclaimer_all.width, screen_disclaimer_all.height );

	preparePal( PAL1, screen_disclaimer_all.pal);

	displayOn ( 10 );

	waitJoySc ( 3 );

	displayOff ( 10 );

	VDP_resetSprites();
	VDP_updateSprites(80,1);
}



void screen_disclaimer ( bool force )
{
	if ( DEV ) return;

	vram_init ( VRAM_DEFAULT );


	bool nolddor_released_ZoS = false;

	if ( nolddor_released_ZoS || force )
	{
		_disclaimer_cool ();
	}
	else
	{
		_disclaimer_simple ( );
	}

	vram_destroy();
}
