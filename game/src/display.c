#include "../inc/include.h"



static u16 _cache [ 64 ];



void displayInit ( )
{
	memcpyU16 ( _cache, palette_black, 64);
}


void preparePal ( u16 pal, u16 *colors )
{
	memcpyU16 ( _cache + pal * 16, colors, 16 );
}


void prepareColors ( u16 *colors )
{
	memcpyU16 ( _cache, colors, 64 );
}


void prepareColor ( u16 index, u16 color )
{
	_cache[index] = color;
}


void displayOff ( u16 frames )
{
	if ( frames )
	{
		VDP_fadeOutAll ( frames, 0 );
	}

	VDP_waitVSync ( );
	VDP_setPaletteColors ( 0, (u16*) palette_black, 64 );
}


void displayOn ()
{
	waitMs(5);

	VDP_waitVSync ( );
	VDP_setPaletteColors ( 0, (u16*) _cache, 64 );
}


u16 *getColors ( )
{
	return (u16*) _cache;
}
