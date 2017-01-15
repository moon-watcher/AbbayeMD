#include "../../inc/include.h"



static s8 opcion = 0;
static const u8 positions[4] = { 8, 13, 15, 18 };

static void _draw_screen()
{
	displayOff(0);


	resetScroll ( );
	resetScreen ( );

	preparePal ( PAL1, palette_get(4)->data );
	VDP_setTextPalette ( PAL1 );

	VDP_drawText ( "Sound test", 11, positions[0] );
	VDP_drawText ( "Music",       8, positions[1] );
	VDP_drawText ( "SFX",         8, positions[2] );
	VDP_drawText ( "Exit",        8, positions[3] );

	VDP_setSpriteFull ( 0, 10, positions[1]*8, 1, TILE_ATTR_FULL ( PAL1, 0, 0, 0, TILE_FONTINDEX + 95 ), 0 );

	displayOn ( 10 );
}



static void _control ( )
{
	bool repeat = true;

	s8 track = 0;
	s8 sfx   = 0;

	while ( repeat )
	{
		JoyReader_update();

		if ( joy1_pressed_up   ) --opcion;
		if ( joy1_pressed_down ) ++opcion;

		if ( opcion == +3 ) opcion = 0;
		if ( opcion == -1 ) opcion = 2;


		VDP_setSpritePosition ( 0, 56, positions[opcion+1]*8 );
		VDP_updateSprites(80,1);

		if ( joy1_pressed_right )
		{
			if ( opcion == 0 ) ++track;
			if ( opcion == 1 ) ++sfx;
		}

		if ( joy1_pressed_left )
		{
			if ( opcion == 0 ) --track;
			if ( opcion == 1 ) --sfx;
		}


		if ( track == MUSIC_MAX ) track = 0;
		if ( track ==        -1 ) track = MUSIC_MAX - 1;

		if ( sfx   ==    FX_MAX ) sfx   = 0;
		if ( sfx   ==        -1 ) sfx   = FX_MAX - 1;


		Music *music = (Music*) music_list [ game.version ] [ (u8)track ];
		Fx    *fx    = (Fx   *) fx_list    [ game.version ] [ (u8)sfx   ];


		drawText ( "              ", 14, positions[1] );
		drawText ( music->title,     14, positions[1] );

		drawText ( "              ", 14, positions[2] );
		drawText ( fx->title,        14, positions[2] );

		if ( joy1_pressed_abc | joy1_pressed_start )
		{
			if ( opcion == 0 ) play_music ( track );
			if ( opcion == 1 ) play_fx    ( sfx   );
			if ( opcion == 2 ) repeat = false;
		}

		VDP_waitVSync();
	}
}


void screen_soundtest ()
{
	opcion = 0;

	vram_init ( VRAM_DEFAULT );

	VDP_resetSprites();
	VDP_updateSprites(80,1);

	_draw_screen();
	_control();

	displayOff(0);

	VDP_resetSprites();
	VDP_updateSprites(80,1);

	vram_destroy ( );
}
