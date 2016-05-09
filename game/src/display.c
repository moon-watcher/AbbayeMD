#include "../inc/include.h"



static u16 _cache [ 64 ];



void displayInit ( )
{
	memsetU16 ( _cache, 0x0000, 64 );
}


void preparePal ( u16 pal, u16 *colors )
{
	memcpyU16 ( _cache + pal * 16, colors, 16 );
}


void preparePalettes ( u16 *colors )
{
	memcpyU16 ( _cache, colors, 64 );
}


void prepareColor ( u16 index, u16 color )
{
	_cache[index] = color;
}


void displayOff ( )
{
	const u16 blacks[64] = { [0 ... 63] = 0x0000 };

	VDP_waitVSync();
	VDP_setPaletteColors ( 0, (u16*)blacks, 64 );
	VDP_waitVSync();
}


void displayOn ()
{
	waitMs(5);

	VDP_waitVSync ( );
	VDP_setPaletteColors ( 0, (u16*)_cache, 64 );
}


u16 *getColors ( )
{
	return (u16*) _cache;
}
