#include "../inc/include.h"


struct
{
	u8 x;
	u8 y;
	u8 countdown;
	u16 tile;
}
star_list [ 30 ] = { };



void enemy_star_init (  )
{
	u8 i = 0;

	for ( i = 0; i < 30; i++ )
	{
		star_list[i].x         = 0;
		star_list[i].y         = 0;
		star_list[i].countdown = 0;
		star_list[i].tile      = 0;
	}
}


void enemy_star ( Vect2D_u16 exception[], u8 stars, u8 x, u8 y, u8 width, u8 height, u16 plan )
{
	u8 i = 0;

	for ( i = 0; i < stars; i++ )
	{
		if ( star_list[i].countdown == 0 )
		{
			star_list[i].x = x + random() % ( width  - ( scrollHorizontal >> 3 ) );
			star_list[i].y = y + random() % ( height - ( scrollVertical   >> 3 ) );

			u8 j, exit = 0;

			for ( j=0; j<3; j++ )
			{
				Vect2D_u16 *ex = (Vect2D_u16*) &exception[j];

				if ( star_list[i].x == ex->x  &&  star_list[i].y == ex->y )
				{
					exit = 1;
					break;
				}
			}

			if ( exit  ||  VDP_getTile ( plan, star_list[i].x, star_list[i].y ) == 0 )
			{
				continue;
			}

			star_list[i].countdown = 20 + ( random() % 40 );
			star_list[i].tile      = VDP_getTile ( plan, star_list[i].x, star_list[i].y );

			VDP_setTileMapXY ( plan, 0, star_list[i].x, star_list[i].y );
		}

		--star_list[i].countdown;

		if ( star_list[i].countdown == 0 )
		{
			VDP_setTileMapXY ( plan, star_list[i].tile, star_list[i].x, star_list[i].y );
		}
	}
}
