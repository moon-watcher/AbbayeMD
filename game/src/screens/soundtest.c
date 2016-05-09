#include "../../inc/include.h"



static s8 opcion = 0;
static const u8 positions[4] = { 8, 13, 15, 18 };

static void _draw_screen()
{
	displayOff();


	resetScroll ( );
	resetScreen ( );

	preparePal ( PAL1, palette_get(4)->data );
	VDP_setTextPalette ( PAL1 );

	VDP_drawText ( "Sound test", 11, positions[0] );
	VDP_drawText ( "Music",       8, positions[1] );
	VDP_drawText ( "SFX",         8, positions[2] );
	VDP_drawText ( "Exit",        8, positions[3] );

	VDP_setSprite ( 0, 10, positions[1]*8, 1, TILE_ATTR_FULL ( PAL1, 0, 0, 0, TILE_FONTINDEX + 95 ), 0 );

	show_screen ( );
}



static void _control ( )
{
	bool repeat = true;

	s8 track = 0;
	s8 sfx   = 0;

	while (repeat )
	{
		JoyReader_update();

		if ( joy1_pressed_up   ) --opcion;
		if ( joy1_pressed_down ) ++opcion;

		if ( opcion == +3 ) opcion = 0;
		if ( opcion == -1 ) opcion = 2;


		VDP_setSpritePosition ( 0, 56, positions[opcion+1]*8 );

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
		drawText ( "              ", 14, positions[2] );

//		VDP_setPalette(PAL3,font->palette->data);
//		VDP_setTextPalette(PAL3);
		drawText ( music->title, 14, positions[1] );

//		VDP_setPalette(PAL1,palette_grey);
//		VDP_setTextPalette(PAL1);
		drawText ( fx->title,    14, positions[2] );



		if ( joy1_pressed_btn | joy1_pressed_start )
		{
			if ( opcion == 0 ) play_music ( track );
			if ( opcion == 1 ) play_fx    ( sfx   );
			if ( opcion == 2 ) repeat = false;
		}

		VDP_updateSprites();
		VDP_waitVSync();

	}
}


void screen_soundtest ()
{
	opcion = 0;

	vram_init ( VRAM_DEFAULT );

	VDP_resetSprites();
	VDP_updateSprites();

	_draw_screen();
	_control();

	displayOff();

	VDP_resetSprites();
	VDP_updateSprites();

	vram_destroy ( );
}
//
//	return 1;
//
//
//
//	while ( 1 )
//	{
//		JoyReader_update();
//
//		if ( joy1_pressed_btn | joy1_pressed_start )
//		{
//			break;
//		}
//
//		node = lObjects.head;
//
//		while ( node )
//		{
//			go = (GameObject *) node->pointer;
//
//			goUpdate ( go );
//
//			node = node->next;
//		}
//
//
//		SPR_update ( (Sprite*) &lSprites, lSpriteCounter );
//		VDP_waitVSync ( );
//	}
//
//	//VDP_setEnable(false);
//
//	displayOff();
//
//	goManagerEnd ( &lObjects );
//	SPR_clear ( );
//	SPR_end ( );
//}
//
//
