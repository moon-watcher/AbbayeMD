#include "../inc/include.h"

#include "../res/all/font.h"


#define FONT_MAX 3

static const TileSet *font_list [ FONT_MAX ] =
{
	&font_all,
	&font_title,
	&font_credits
};



void font_load ( u8 id )
{
	if ( id >= FONT_MAX )
	{
		id = 0;
	}

	VDP_loadFont ( font_list [ id ], 0 );
}
