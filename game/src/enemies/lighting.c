#include "../inc/include.h"



static u16 saved_colors     [ 64 ];
static u16 lighting_palette [ 64 ];



void enemy_lighting_init ( GameObject *lighting )
{
	if ( game.version == VERSION_PCW )
	{
		lighting->counter = 1;

		SPR_setFrame ( lighting->sprite, 0 );
		SPR_setHFlip ( lighting->sprite, random() % 2 );

		goSetX ( lighting, 70 + ( ( random ( ) % ( 200 - 70 ) ) ) );

		SPR_setVisible ( lighting->sprite, true );

		VDP_getPaletteColors ( 0, saved_colors, 64 );
		memsetU16 ( lighting_palette, VDP_getPaletteColor ( 1 ), 64 );

//		VDP_waitVSync();
//
//
//		VDP_waitVSync();
//		VDP_setPaletteColors( 0, saved_colors, 64 );
	}
}


void enemy_lighting ( GameObject *lighting )
{
	if ( game.version == VERSION_PCW )
	{
		if ( lighting->counter )
		{
			if ( lighting->counter == 1 || lighting->counter == 3 || lighting->counter == 5 )
			{
				VDP_setPaletteColors( 0, lighting_palette, 64 );
			}

			else if ( lighting->counter == 2 || lighting->counter == 4 || lighting->counter == 6 )
			{
				VDP_setPaletteColors( 0, saved_colors, 64 );
			}


			++lighting->counter;

			if ( lighting->sprite->frameInd == lighting->sprite->animation->numFrame - 1 )
			{
				lighting->counter = 0;

				SPR_setVisible ( lighting->sprite, false );
			}
		}
	}
}
