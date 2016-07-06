#include "../../inc/include.h"


extern const struct genresTiles screen_title_copyright_all;
extern const struct genresTiles screen_title_freeware_all;
extern const struct genresTiles screen_title_year_all;


#include "../../res/all/palettes.h"


static s8  opcion = 0;
static u16 vrampos_a;
static u16 vrampos_b;
static u16 vrampos_copy;


static void _blink_option ( )
{
	if ( opcion != 0 )
	{
		return;
	}


	u16 j, wait = 8;
	u16 pal [ 16 ] = { VDP_getPaletteColor(0) };
	u16 saved_a [ 16 ];
	u16 saved_b [ 16 ];

	VDP_getPaletteColors (  0, saved_b, 16 );
	VDP_getPaletteColors ( 16, saved_a, 16 );

	#define LIGHTING(nb)    if ( !DEV )                                  \
									{                                                     \
										for ( j = 1; j < 16; j++ )                         \
										{                                                  \
											pal [ j ] = palette_lighting_all.data [ (nb) ]; \
										}                                                  \
										                                                   \
										VDP_setPalette ( PAL0, pal );                      \
										VDP_setPalette ( PAL1, pal );                      \
										waitHz(wait);                                      \
									}



	LIGHTING(1);      // white


	// restore
	VDP_setPalette ( PAL0, saved_b );
	VDP_setPalette ( PAL1, saved_a );

	if ( !DEV )
	{
		for ( j=0; j<10; j++ ) VDP_waitVSync();
	}


	LIGHTING(2);      // yellow
	LIGHTING(3);      // dark yellow
	LIGHTING(4);      // blue
	LIGHTING(5);      // dark blue
	LIGHTING(6);      // balck

	displayOff(0);


	if ( !DEV )
	{
		waitSc(1);
	}
}



static void _show_version ( )
{
	drawText ( versions_upper_list [ game.version ], 13, 18 );
}



static void _draw_screen ( )
{
	u16 speed = DEV ? 1 : getHz() * 2;


	vram_delete ( vrampos_a );
	vram_delete ( vrampos_b );
	vram_delete ( vrampos_copy );


	displayOff(0);

	palette_init();

	resetScroll();
	resetScreen();


	Screen *screen = (Screen*) screen_get ( 11 );


	if ( game.version == VERSION_PCW  ||  game.version == VERSION_GB )
	{
		u16 i;

		for ( i=0; i<64; i++)
		{
			VDP_setPaletteColor ( i, palette_get(0)->data[0] ) ;
		}
	}



	play_music ( MUSIC_PROLOGUE );


	u16 size = screen_title_copyright_all.width * screen_title_copyright_all.height;
	vrampos_copy = vram_new ( size );


	vrampos_b = drawImage   ( (Image*) screen->background, BPLAN );
	VDP_fadePalTo ( PAL0, screen->background->palette->data, speed, 0 );

	if ( !DEV )
	{
		waitSc(1);
	}

	vrampos_a = drawImageXY ( (Image*) screen->foreground, APLAN, 13, 2 );
	VDP_fadePalTo ( PAL1, screen->foreground->palette->data, speed, 0 );



	VDP_loadTileData ( screen_title_copyright_all.tiles, vrampos_copy, size, 0 );
	VDP_fillTileMapRectInc ( APLAN, TILE_ATTR_FULL(PAL2, 0, 0, 0, vrampos_copy), 5, 25, screen_title_copyright_all.width, screen_title_copyright_all.height );
	VDP_setPalette ( PAL2, screen_title_copyright_all.pal );


	VDP_setPalette ( PAL3, palette_get(6)->data );
	VDP_setTextPalette ( PAL3 );
	drawText ( "START",   13, 16 );
	_show_version();
	drawText ( "OPTIONS", 13, 20 );
	drawText ( "INFO",    13, 22 );
}




static void _version_add ( s8 inc )
{
	vram_delete ( vrampos_a );
	vram_delete ( vrampos_b );

	if ( inc > 0 )
	{
		++game.version ;

		if ( game.version == VERSION_MAX )
		{
			game.version = 0;
		}
	}

	else if ( inc < 0 )
	{
		if ( game.version == 0 )
		{
			game.version = VERSION_MAX;
		}

		--game.version;
	}

	Screen *screen = (Screen*) screen_get ( 11 );


	_show_version();


	VDP_waitVSync();
	VDP_setPalette ( PAL0, palette_black );
	VDP_setPalette ( PAL1, palette_black );

	VDP_waitVSync();
	vrampos_b = drawImage   ( (Image*) screen->background, BPLAN );
	vrampos_a = drawImageXY ( (Image*) screen->foreground, APLAN, 13, 2  );

	VDP_waitVSync();
	VDP_setPalette ( PAL0, screen->background->palette->data );
	VDP_setPalette ( PAL1, screen->foreground->palette->data );

//	VDP_fadePalTo ( PAL0, screen->background->palette->data, 3, 0 );
//	VDP_fadePalTo ( PAL1, screen->foreground->palette->data, 10, 1 );
}



static s8 _control ( )
{
	VDP_setSprite ( 0, -10, -1, 1, TILE_ATTR_FULL ( PAL3, 0, 0, 0, TILE_FONTINDEX+95 ), 0 );

	while ( true )
	{
		JoyReader_update();


		if ( joy1_pressed_up   ) --opcion;
		if ( joy1_pressed_down ) ++opcion;

		if ( opcion > 3 ) opcion = 0;
		if ( opcion < 0 ) opcion = 3;

		VDP_setSpritePosition ( 0, 94, 16 * 8 + opcion * 16 );

		if ( joy1_pressed_abc | joy1_pressed_start )
		{
			if ( opcion == 1 )
			{
				_version_add(+1);
			}
			else
			{
				_blink_option ( );
				return opcion;
			}
		}

		if ( joy1_pressed_right ) _version_add ( +1 );
		if ( joy1_pressed_left  ) _version_add ( -1 );


		VDP_updateSprites();
		VDP_waitVSync();
	}

	return -1;
}




u16 screen_title ( )
{
	if ( DEV ) return 1;

	bool repeat = true;

	vram_init ( VRAM_DEFAULT );
	vrampos_a = 0;
	vrampos_b = 0;


	while ( repeat )
	{
		opcion = 0;

		_draw_screen ( );

		switch ( _control() )
		{
			// start
			case 0:
				repeat = false;
				break;

			// version
			//case 1:
			//	_version_add(+1);
			//	break;

			// options
			case 2:
				screen_options();
				break;

			// info
			case 3:
				screen_info();
				break;

			default:
				break;
		}
	}

	displayOff(0);
	VDP_resetSprites();
	VDP_updateSprites();

	vram_destroy ( );

	return 1;
}
