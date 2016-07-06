#include "../inc/include.h"


static const fix32 vels_x [ 5 ] = { FIX32(4.0),  FIX32(4.6),  FIX32(4.9), FIX32(5.3), FIX32(5.7) };
static const fix32 vels_y [ 5 ] = { FIX32(1.0),  FIX32(1.1),  FIX32(1.2), FIX32(1.3), FIX32(1.4) };
static const fix32 incs   [ 3 ] = { FIX32(0.03), FIX32(0.04), FIX32(0.06)                        };

static s16 y1  = 96;
static s16 y2 = 160;

//void


void enemy_leaf_init ( s16 posy1, s16 posy2 )
{
	y1 = posy1;
	y2 = posy2;
}


void enemy_leaf_reset ( GameObject *leaf, bool first )
{
	s16 x = first ? random() % VDP_getScreenWidth  ( ) : -8;
	s16 y = y1 + ( random() % y2 );

	leaf->vel_x   = + vels_x [ random() % 5 ];
	leaf->vel_y   = - vels_y [ random() % 5 ];
	leaf->counter = (u16) incs [ random() % 3 ];

	goSetXY( leaf, x, y );
}


void enemy_leaf ( GameObject *leaf )
{
	leaf->vel_y = fix32Sub ( leaf->vel_y, (fix32) leaf->counter );

	if ( goGetLeft(leaf) > VDP_getScreenWidth() || goGetBottom(leaf) < 0 )
	{
		enemy_leaf_reset ( leaf, false );
	}
}
