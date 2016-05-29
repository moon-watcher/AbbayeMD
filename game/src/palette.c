#include "../inc/include.h"



Palette *palette_get ( u8 id )
{
	return (Palette*) palette_list [ game.version ] [ id ] ;
}



void palette_init ( )
{
//	preparePal ( PAL0, palette_list [ game.version ] [ 0 ]->data );

	prepareColor (  0, palette_list [ game.version ] [ 0 ]->data [  0 ] );
	prepareColor (  1, palette_list [ game.version ] [ 0 ]->data [  1 ] );

	// shadow of text
	if ( game.version == VERSION_MD )
	{
		prepareColor (  2, palette_list [ game.version ] [ 0 ]->data [  2 ] );
	}

	prepareColor ( 15, palette_list [ game.version ] [ 0 ]->data [ 15 ] );
}



u8 palette_alt_palettes ( )
{
	u8 count = 0;

	while ( palette_alt_list [ game.version ] [ count ]  &&  count < PALETTE_ALT_MAX )
	{
		++count;
	}

	return count;
}
