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

	displayOff(0);

	SPR_update ( NULL, 0 );
	VDP_waitVSync();



	s16 saved_a = VDP_getHorizontalScroll ( PLAN_A );
	s16 saved_b = VDP_getHorizontalScroll ( PLAN_B );

	const s16 scroll = - 240 - 16;

	scrollSet ( scroll );

	u16 pos = vram_new ( img->tileset->numTile );

	VDP_drawImageEx ( APLAN, (Image*) img, TILE_ATTR_FULL ( PAL0, 0, 0, 0, pos ), (VDP_getScreenWidth()/8 - img->map->w) / 2, ABS ( scroll ) / 8 + 9, 0, 0 );
	preparePal ( PAL0, img->palette->data );

	show_screen ( 10 );


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


	displayOff(0);

	scrollSet ( SCROLL_INIT );

	VDP_setHorizontalScroll(PLAN_B, saved_b );
	VDP_setHorizontalScroll(PLAN_A, saved_a );

	vram_delete ( pos );

	updateSprites ( ); // SPR_update ( (Sprite*) &waSprites, wvSpriteCounter );


	if ( game.status == GAME_STATUS_ENDING )
	{
		//VDP_fadeOutAll ( 0, 0 );
		//VDP_setEnable ( TRUE );
	}
	else
	{
		prepareColors ( saved_colors );
		show_screen ( 10 );
	}
}
