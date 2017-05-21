#include <genesis.h>


static       u16 cache  [ 64 ] = { [0 ... 63] = 0x0000 };
static const u16 blacks [ 64 ] = { [0 ... 63] = 0x0000 };


//////////////////////////////////////////////////////////////////////////////////////////////////////////


static void setDisplay ( u16 on, u16 frames, u16 *colors )
{
    VDP_waitVSync();

    SYS_disableInts ( );

	if ( frames )
	{
	    if ( on )
        {
            VDP_fadeAllTo ( (u16*) colors, frames, 0 );
        }
        else
        {
            VDP_fadeOutAll ( frames, 0 );
        }
	}

    VDP_setPaletteColors ( 0, (u16*) colors, 64 );

	SYS_enableInts ( );
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////


void displayInit ( )
{
	memsetU16 ( cache, 0, 64 );
}


void preparePal ( u16 pal, u16 *colors )
{
	memcpyU16 ( cache + pal * 16, colors, 16 );
}


void prepareColors ( u16 *colors )
{
	memcpyU16 ( cache, colors, 64 );
}


void prepareColor ( u16 index, u16 color )
{
	cache [ index ] = color;
}


void displayOff ( u16 frames )
{
    setDisplay ( 0, frames, (u16*) blacks );
}


void displayOn ( u16 frames )
{
    setDisplay ( 1, frames, (u16*) cache );
}


u16 *getColors ( )
{
	return (u16*) cache;
}
