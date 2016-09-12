#include "../../inc/include.h"




#define click   joy1_pressed_abc | joy1_pressed_start
#define right   joy1_pressed_right
#define left    joy1_pressed_left



static s8 opcion = 0;
static s8 music = 0;
static s8 fx = 0;





void _show_version ( )
{
	drawText ( "          ", 16, 13 );
	drawText ( versions_list [ game.version ],  16, 13 );
}



void _change_version ( )
{
	if ( right | click )
	{
		++game.version;

		if ( game.version == VERSION_MAX )
		{
			game.version = 0;
		}
	}

	else if ( left )
	{
		if ( game.version == 0 )
		{
			game.version = VERSION_MAX -1;
		}
		else
		{
			--game.version;
		}
	}

	_show_version();
}





void _change_difficult ( bool update )
{
	if ( update && ( click | joy1_pressed_horizontal ) )
	{
		++session.level;
		session.level %= 2;
	}

	const u8 *str [ 2 ] =
	{
		"Normal",
		"Hard  "
	};

	drawText ( str[session.level], 16, 11 );
}



static void _change_music ( bool init )
{
	if ( right ) music++;
	if ( left  ) music--;

	if ( music ==        -1 ) music = MUSIC_MAX-1;
	if ( music == MUSIC_MAX ) music = 0;


	Music *m =(Music*) music_list [ game.version ] [ (u8) music ];

	drawText ( "                       ", 16, 15 );
	drawText ( m->title, 16, 15 );

	if ( click && !init )
	{
		musicPlay(m);
	}
}



static void _change_fx ( bool init )
{
	if ( right ) fx++;
	if ( left  ) fx--;

	if ( fx ==    -1 ) fx = FX_MAX-1;
	if ( fx == FX_MAX ) fx = 0;


	Fx *m =(Fx*) fx_list [ game.version ] [ (u8) fx ];

	drawText ( "                       ", 16, 17 );
	drawText ( m->title, 16, 17 );

	if ( click && !init )
	{
		fxPlay(m);
	}
}



static void _loop ( )
{
	//JoyReader_reset();

	while ( true )
	{
		JoyReader_update();

		if ( joy1_pressed_up   ) --opcion;
		if ( joy1_pressed_down ) ++opcion;

		if ( opcion > 4 ) opcion = 0;
		if ( opcion < 0 ) opcion = 4;

		VDP_setSpritePosition ( 0, 46, 11*8 + opcion*16 );


		switch ( opcion )
		{
			case 0:
				_change_difficult ( true );
				break;

			case 1:
				_change_version();
				break;

			case 2:
				_change_music(false);
				break;

			case 3:
				_change_fx(false);
				break;

			case 4:
				if ( click )
				{
					return;
				}
		}

		VDP_updateSprites(80,1);
		VDP_waitVSync();
	}
}




static void _draw_screen ( )
{
	displayOff(0);

	palette_init();

	resetScroll();
	resetScreen();



	const u16 blacks[64] = { [0 ... 63] = 0x0000 };

	preparePal ( PAL0, (u16*) blacks );
	preparePal ( PAL1, (u16*) blacks );
	preparePal ( PAL2, (u16*) palette_get(6)->data );
	preparePal ( PAL3, (u16*) palette_red );

	prepareColor ( 16*PAL3+1, 0x033D );



	VDP_setTextPalette ( PAL2 );

	drawText ( "OPTION SELECT",  9,  5 );
	drawText ( "Level",          7, 11 );
	drawText ( "Version",        7, 13 );
	drawText ( "Music",          7, 15 );
	drawText ( "Fx",             7, 17 );
	drawText ( "Exit",           7, 19 );


	VDP_setTextPalette ( PAL3 );

	_show_version ( );
	_change_difficult ( false );
	_change_music ( true );
	_change_fx ( true );

	displayOn ( 10 );
}




u16 screen_options ( )
{
	//if ( DEV )return 1;

	VDP_setSpriteFull ( 0, -10, -1, 1, TILE_ATTR_FULL ( PAL2, 0, 0, 0, TILE_FONTINDEX+95 ), 0 );
	VDP_setSpritePosition ( 0, -20, -20 );
	VDP_updateSprites(80,1);

	opcion = 0;
	music = 0;
	fx = 0;

	//vram_init ( VRAM_DEFAULT );


	_draw_screen();

	_loop();


	displayOff(0);
	VDP_resetSprites();
	VDP_updateSprites(80,1);

	//vram_destroy();

	return 1;
}
