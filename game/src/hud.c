#include "../inc/include.h"



#define HUD_OBJECTS_TILES(x)   hud_objects [ game.version ] [ (x) ]->tiles
#define HUD_OBJECTS_TOTAL(x)   hud_objects [ game.version ] [ (x) ]->height * hud_objects [ game.version ] [ (x) ]->width



static u8  _num_crosses = 0;
static u8  _num_hearts = 0;

static u16 _vram_hearts = 0;
static u16 _vram_crosses = 0;




void hudInit ( )
{
	_num_crosses   = 0;
	_num_hearts    = session.level == 0 ? 9 : 1;

	hudResetVram ( );
}




void hudResetVram ( )
{
	_vram_hearts   = 0;
	_vram_crosses  = 0;
}




void hudDrawText ( )
{
	SYS_disableInts();

	u16 pos = vram_new ( 1 );

	VDP_loadTileData ( HUD_OBJECTS_TILES(3), pos, 1, 0 );

	VDP_fillTileMapRect ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, pos ), 0, VDP_getPlanHeight()-2, 32, 2 );
	VDP_fillTileMapRect ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, pos ), 0, MASK_MAX_HEIGHT,       32, 4 );

	pos = vram_new ( currentRoom->text->tileset->numTile );

	VDP_drawImageEx ( APLAN, (Image*) currentRoom->text, TILE_ATTR_FULL(PAL0, 1, 0, 0, pos), 14, MASK_MAX_HEIGHT, 0, 0 );

	SYS_enableInts();
}




void hudIncCrosses ( s8 inc )
{
	SYS_disableInts();

	if ( !_vram_crosses )
	{
		_vram_crosses = vram_new ( 4 );

		// load cross
		u16 pos = vram_new ( HUD_OBJECTS_TOTAL(1) );

		VDP_loadTileData ( HUD_OBJECTS_TILES(1), pos, HUD_OBJECTS_TOTAL(1), 0 );
		VDP_fillTileMapRectInc ( APLAN, TILE_ATTR_FULL(PAL3, 1, 0, 0, pos), 4, MASK_MAX_HEIGHT, 2, 2 );
	}


	_num_crosses = set_value_in ( _num_crosses + inc, 0, 12 );

	if ( _num_crosses < 10 )
	{
		VDP_loadTileData ( HUD_OBJECTS_TILES(2) + 8 * (  0 + _num_crosses ), _vram_crosses + 0, 1, 0 );
		VDP_loadTileData ( HUD_OBJECTS_TILES(2) + 8 * ( 10 + _num_crosses ), _vram_crosses + 1, 1, 0 );

		VDP_fillTileMapRectInc ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, _vram_crosses  ), 6, MASK_MAX_HEIGHT, 1, 2 );
	}
	else
	{
		VDP_loadTileData ( HUD_OBJECTS_TILES(2) + 8 * (                      1 ), _vram_crosses + 0, 1, 0 );
		VDP_loadTileData ( HUD_OBJECTS_TILES(2) + 8 * (                     11 ), _vram_crosses + 1, 1, 0 );

		VDP_loadTileData ( HUD_OBJECTS_TILES(2) + 8 * (  0 + _num_crosses % 10 ), _vram_crosses + 2, 1, 0 );
		VDP_loadTileData ( HUD_OBJECTS_TILES(2) + 8 * ( 10 + _num_crosses % 10 ), _vram_crosses + 3, 1, 0 );

		VDP_fillTileMapRectInc ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, _vram_crosses + 0 ), 6, MASK_MAX_HEIGHT, 1, 2 );
		VDP_fillTileMapRectInc ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, _vram_crosses + 2 ), 7, MASK_MAX_HEIGHT, 1, 2 );
	}

	SYS_enableInts();
}




void hudIncHearts ( s8 inc )
{
	SYS_disableInts();

	if ( !_vram_hearts )
	{
		_vram_hearts = vram_new ( 4 );

		// load heart
		u16 pos = vram_new ( HUD_OBJECTS_TOTAL(0) );

		VDP_loadTileData ( HUD_OBJECTS_TILES(0), pos, HUD_OBJECTS_TOTAL(0), 0 );
		VDP_fillTileMapRectInc ( APLAN, TILE_ATTR_FULL(PAL3, 1, 0, 0, pos), 0, MASK_MAX_HEIGHT, 2, 2 );
	}


	_num_hearts = set_value_in ( _num_hearts + inc, 0, playerGetData()->max_hearts );

	if ( inc >= 0 )
	{
		if ( _num_hearts < 10 )
		{
			VDP_loadTileData ( HUD_OBJECTS_TILES(2) + 8 * (  0 + _num_hearts ), _vram_hearts + 0, 1, 0 );
			VDP_loadTileData ( HUD_OBJECTS_TILES(2) + 8 * ( 10 + _num_hearts ), _vram_hearts + 1, 1, 0 );

			VDP_fillTileMapRectInc ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, _vram_hearts + 0 ), 2, MASK_MAX_HEIGHT, 1, 2 );
			//VDP_fillTileMapRectInc ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0,                0 ), 3, MASK_MAX_HEIGHT, 1, 2 );
		}
		else
		{
			VDP_loadTileData ( HUD_OBJECTS_TILES(2) + 8 * (                     1 ), _vram_hearts + 0, 1, 0 );
			VDP_loadTileData ( HUD_OBJECTS_TILES(2) + 8 * (                    11 ), _vram_hearts + 1, 1, 0 );

			VDP_loadTileData ( HUD_OBJECTS_TILES(2) + 8 * (  0 + _num_hearts % 10 ), _vram_hearts + 2, 1, 0 );
			VDP_loadTileData ( HUD_OBJECTS_TILES(2) + 8 * ( 10 + _num_hearts % 10 ), _vram_hearts + 3, 1, 0 );

			VDP_fillTileMapRectInc ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, _vram_hearts + 0 ), 2, MASK_MAX_HEIGHT, 1, 2 );
			VDP_fillTileMapRectInc ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, _vram_hearts + 2 ), 3, MASK_MAX_HEIGHT, 1, 2 );
		}
	}
	else
	{
		// if _num_hearts decrease, update isn't required since the screen will be gone to black
	}

	SYS_enableInts();
}



u8 hudGetHearts ( )
{
	return _num_hearts;
}



u8 hudGetCrosses ( )
{
	return _num_crosses;
}
