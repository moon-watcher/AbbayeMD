#include "../inc/include.h"



static Image *_find ( bool pause )
{
	if ( pause )
	{
		return (Image*) hint_list [ game.version ] [ 8 ].image;
	}


	u8 i;

	Hint *hint;

	for ( i = 0; i < HINT_MAX; i++ )
	{
		hint = (Hint*) &hint_list [ game.version ] [ i ];

		if ( hint->room_x == game.room.x  &&  hint->room_y == game.room.y )
		{
			break;
		}
	}

	return hint->image;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void hint_show ( bool pause )
{
	Image *img = _find ( pause );


	waitMs(5);
	u16 saved_colors [ 64 ];
	VDP_getPaletteColors ( 0, saved_colors, 64 );

	displayOff();

	SPR_update ( NULL, 0 );
	VDP_waitVSync();



	s16 saved_a = VDP_getHorizontalScroll ( PLAN_A );
	s16 saved_b = VDP_getHorizontalScroll ( PLAN_B );

	const s16 scroll = - 240 - 16;

	scrollSet ( scroll );

	u16 pos = vram_new ( img->tileset->numTile );

	VDP_drawImageEx ( APLAN, (Image*) img, TILE_ATTR_FULL ( PAL0, 0, 0, 0, pos ), (VDP_getScreenWidth()/8 - img->map->w) / 2, ABS ( scroll ) / 8 + 9, 0, 1 );
	preparePal ( PAL0, img->palette->data );

	show_screen();


	if ( pause )
	{
		do
		{
			JoyReader_update();
		}
		while ( !joy1_pressed_start );
	}
	else
	{
		while ( !joy1_pressed_abc && !joy1_pressed_start ) JoyReader_update();
	}


	displayOff();

	scrollSet ( SCROLL_INIT );

	VDP_setHorizontalScroll(PLAN_B, saved_b );
	VDP_setHorizontalScroll(PLAN_A, saved_a );

	vram_delete ( pos );

	SPR_update ( (Sprite*) &waSprites, wvSpriteCounter );

	if ( game.status == GAME_STATUS_ENDING )
	{
//		VDP_fadeOutAll ( 0, 0 );
//		VDP_setEnable ( TRUE );
	}
	else
	{
		preparePalettes ( saved_colors );
		show_screen ( );
	}
}




//void hint_show ( )
//{
//	Image *img = _find ( );
//
//
//	u16 saved_colors [ 64 ];
//	VDP_getPaletteColors ( 0, saved_colors, 64 );
//
//
//	SYS_disableInts();
//	VDP_fadeOutAll ( 5, 0 );
//	SYS_enableInts();
//
//	SPR_update ( NULL, 0 );
//	VDP_waitVSync();
//
//	VDP_setEnable ( FALSE );
//
//
//	s16 scroll = VDP_getScreenWidth();
//
//	VDP_setHorizontalScroll(PLAN_B, -scroll );
//	VDP_setHorizontalScroll(PLAN_A, -scroll );
//
//	scrollSet ( SCROLL_RESET );
//
//
//	u16 pos = vram_new ( img->tileset->numTile );
//
//	VDP_setPalette ( PAL0, palette_black );
//	VDP_drawImageEx ( BPLAN, (Image*) img, TILE_ATTR_FULL(PAL0,0,0,0,pos), scroll/8+4, 8, 0, 1 );
//
//	VDP_setEnable ( TRUE );
//
//	SYS_disableInts();
//	VDP_fadeIn ( 0, 15, img->palette->data, 5, 0 );
//	SYS_enableInts();
//
//
//	while ( !joy1_pressed_btn ) JoyReader_update();
//
//
//	SYS_disableInts();
//	VDP_fadeOutAll ( 5, 0 );
//	SYS_enableInts();
//
//	VDP_setEnable ( FALSE );
//
//
//	scrollSet ( SCROLL_INIT );
//
//	VDP_setHorizontalScroll(PLAN_B, 0 );
//	VDP_setHorizontalScroll(PLAN_A, 0 );
//
//	vram_delete ( pos );
//
//	if ( game.status == GAME_STATUS_ENDING)
//	{
//		VDP_fadeOutAll ( 0, 0 );
//		VDP_setEnable ( TRUE );
//	}
//	else
//	{
//		VDP_setEnable ( TRUE );
//
//		SYS_disableInts();
//		VDP_fadeAllTo ( saved_colors, 5, 0 );
//		SYS_enableInts();
//	}
//}
