#include <genesis.h>




static u16 _cache [ 64 ] = { [0 ... 63] = 0x0000 };



static void _set_colors ( u16 *colors )
{
	VDP_waitVSync ( );

	SYS_disableInts();
	VDP_setPaletteColors ( 0, (u16*) colors, 64 );
	SYS_enableInts();
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////



void displayInit ( )
{
	memsetU16 ( _cache, 0, 64 );
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

	u16 blacks [ 64 ] = { [0 ... 63] = 0x0000 };
	_set_colors ( blacks );
}


void displayOn ( u16 frames )
{
	if ( frames )
	{
		VDP_fadeAllTo ( (u16*) _cache, frames, 0 );
	}

	waitMs(5);
	_set_colors ( _cache );
}


u16 *getColors ( )
{
	return (u16*) _cache;
}
