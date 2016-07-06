

#include "../../inc/include.h"





void screen_sega ( )
{
	if ( DEV ) return;

	extern const struct genresTiles logo_sega;

	#define LINES 36

	u8 i;

	const struct
	{
		u16 pal [ 16 ];
		u16 wait;  // percentage of actual Hz
	}
	logo [ LINES ] =
	{
		//   UNUSED       2       3       4       5       6       7       8       9  UNUSED      11      12      13      14      15      16    WAIT
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0FFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  10 }, // 01
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0777, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0FFF, 0x0000 },  10 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0333, 0x0000, 0x0000, 0x0000, 0x0000, 0x0fff, 0x0777, 0x0000 },  10 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0fff, 0x0777, 0x0333, 0x0000 },  10 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0fff, 0x0777, 0x0333, 0x0000, 0x0000 },  10 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0fff, 0x0777, 0x0333, 0x0000, 0x0000, 0x0000 },  10 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0777, 0x0333, 0x0000, 0x0000, 0x0000, 0x0000 },  10 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0333, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  10 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  50 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0EA0 },  10 },
		{  { 0x0000, 0x0000, 0x0000, 0x0EA0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0E60 },  10 }, // 11
		{  { 0x0000, 0x0000, 0x0000, 0x0E60, 0x0000, 0x0EA0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A20 },  10 },
		{  { 0x0000, 0x0000, 0x0000, 0x0A20, 0x0000, 0x0E60, 0x0000, 0x0EA0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0600 },  10 },
		{  { 0x0000, 0x0000, 0x0000, 0x0600, 0x0000, 0x0A20, 0x0EA0, 0x0E60, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  10 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0EA0, 0x0600, 0x0E60, 0x0A20, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  10 },
		{  { 0x0000, 0x0000, 0x0EA0, 0x0000, 0x0E60, 0x0000, 0x0A20, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  10 },
		{  { 0x0000, 0x0EA0, 0x0E60, 0x0000, 0x0A20, 0x0000, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  10 },
		{  { 0x0000, 0x0E60, 0x0A20, 0x0000, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  10 },
		{  { 0x0000, 0x0A20, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  10 },
		{  { 0x0000, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  10 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  50 }, // 21
		{  { 0x0000, 0x0200, 0x0200, 0x0200, 0x0200, 0x0200, 0x0200, 0x0200, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0200 },  10 },
		{  { 0x0000, 0x0400, 0x0400, 0x0400, 0x0400, 0x0400, 0x0400, 0x0400, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0400 },  10 },
		{  { 0x0000, 0x0600, 0x0600, 0x0600, 0x0600, 0x0600, 0x0600, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0600 },  10 },
		{  { 0x0000, 0x0600, 0x0600, 0x0600, 0x0900, 0x0920, 0x0920, 0x0920, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0600 },  10 },
		{  { 0x0000, 0x0600, 0x0600, 0x0900, 0x0920, 0x0B20, 0x0940, 0x0B70, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0600 },  10 },
		{  { 0x0000, 0x0600, 0x0600, 0x0900, 0x0B20, 0x0D40, 0x0B70, 0x0D90, 0x0222, 0x0000, 0x0222, 0x0222, 0x0222, 0x0222, 0x0222, 0x0600 },  10 },
		{  { 0x0000, 0x0600, 0x0900, 0x0B20, 0x0D40, 0x0F70, 0x0E90, 0x0EB0, 0x0333, 0x0000, 0x0333, 0x0333, 0x0333, 0x0333, 0x0333, 0x0600 },  10 },
		{  { 0x0000, 0x0600, 0x0900, 0x0B20, 0x0D40, 0x0F70, 0x0D90, 0x0FB0, 0x0444, 0x0000, 0x0444, 0x0444, 0x0444, 0x0444, 0x0444, 0x0600 },  10 },
		{  { 0x0000, 0x0600, 0x0900, 0x0B20, 0x0D40, 0x0F70, 0x0D90, 0x0FB0, 0x0676, 0x0000, 0x0676, 0x0676, 0x0676, 0x0676, 0x0676, 0x0600 },  10 },
		{  { 0x0000, 0x0600, 0x0900, 0x0B20, 0x0D40, 0x0F70, 0x0D90, 0x0FB0, 0x0999, 0x0000, 0x0999, 0x0999, 0x0999, 0x0999, 0x0999, 0x0600 },  10 }, // 31
		{  { 0x0000, 0x0600, 0x0900, 0x0B20, 0x0D40, 0x0F70, 0x0D90, 0x0FB0, 0x0DDD, 0x0000, 0x0DDD, 0x0DDD, 0x0DDD, 0x0DDD, 0x0DDD, 0x0600 },  10 },
		{  { 0x0000, 0x0600, 0x0900, 0x0B20, 0x0D40, 0x0F70, 0x0D90, 0x0FB0, 0x0FFF, 0x0000, 0x0FFF, 0x0FFF, 0x0FFF, 0x0FFF, 0x0FFF, 0x0600 }, 400 },
		{  { 0x0000, 0x0400, 0x0400, 0x0600, 0x0920, 0x0940, 0x0940, 0x0970, 0x0999, 0x0000, 0x0999, 0x0999, 0x0999, 0x0999, 0x0999, 0x0400 },  10 },
		{  { 0x0000, 0x0200, 0x0200, 0x0400, 0x0400, 0x0620, 0x0420, 0x0640, 0x0676, 0x0000, 0x0676, 0x0676, 0x0676, 0x0676, 0x0676, 0x0200 },  10 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  50 },
	};

	displayOff(0);
	resetScreen();
	waitSc(1);

	//VDP_setEnable ( FALSE );

	//VDP_setPalette ( PAL1, palette_black );
	VDP_loadTileData ( logo_sega.tiles, 16, logo_sega.width * logo_sega.height, 1 );
	VDP_fillTileMapRectInc ( APLAN, TILE_ATTR_FULL(PAL1, 0, 0, 0, 16), 14, 12, logo_sega.width, logo_sega.height );

	//VDP_setEnable ( TRUE );

	const u16 hz = getHz();

	for ( i = 0; i < LINES; ++i )
	{
		SYS_disableInts();
		VDP_setPalette ( PAL1, logo [ i ].pal );
		SYS_enableInts();

		u16 j = logo [ i ].wait * hz / 100;

		while ( j-- )
		{
			VDP_waitVSync();

			JoyReader_update();

			if ( joy1_pressed_abc || joy1_pressed_start )
			{
				displayOff(10);
				return ;
			}
		}
	}
}



