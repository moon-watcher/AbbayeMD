#include "../inc/include.h"




static u8 _link;

static void _hide_sprites ()
{
	_link = vdpSpriteCache[0].link;
	vdpSpriteCache[0].link = 0;

	VDP_updateSprites ( 80, 0 );
}

static void _restore_sprites ()
{
	vdpSpriteCache[0].link = _link;

	VDP_updateSprites ( 80, 0 );
}



static Image *_find ( bool pause )
{
	if ( pause )
	{
		return (Image*) hint_list [ game.version ] [ 8 ].image;
	}


	u8    i    = 0;
	Hint *hint = NULL;

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

	_hide_sprites();

	s16 saved_a = VDP_getHorizontalScroll ( PLAN_A );
	s16 saved_b = VDP_getHorizontalScroll ( PLAN_B );

	const s16 scroll = - 240 - 16;

	scrollSet ( scroll );

	u16 x    = ( ( screenWidth >> 3 ) - img->map->w ) >> 1;
	u16 y    = ABS ( scroll ) / 8 + 9;
	u16 pos  = vram_new ( img->tileset->numTile );
	u16 tile = TILE_ATTR_FULL ( PAL0, 0, 0, 0, pos );

	SYS_disableInts();
	VDP_drawImageEx ( PLAN_A, (Image*) img, tile, x, y, 0, 0 );
	SYS_enableInts();

	preparePal ( PAL0, img->palette->data );
	apply_alt_palettes ( );

	displayOn ( 10 );


	waitJoy ( );


	displayOff(0);

	scrollSet ( SCROLL_INIT );

	VDP_setHorizontalScroll(PLAN_B, saved_b );
	VDP_setHorizontalScroll(PLAN_A, saved_a );

	vram_delete ( pos );

	_restore_sprites ();


	if ( game.status == GAME_STATUS_ENDING )
	{
		//VDP_fadeOutAll ( 0, 0 );
		//VDP_setEnable ( TRUE );
	}
	else
	{
		prepareColors ( saved_colors );
		displayOn ( 10 );
	}
}
