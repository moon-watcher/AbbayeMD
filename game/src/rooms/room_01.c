#include "../inc/include.h"



static GameObject *leaf     [ 6 ] = { };
static GameObject *crusader [ 8 ] = { };

static u16         nb_crusader = 0;
static u16         nb_leaf = 0;
static u16         i = 0;




static void _room_enter ( Room *room )
{
	if ( game.version == VERSION_MD )
	{
		nb_leaf = goManagerFindAllByEntityId ( &waObjects, leaf, 81 );   // Leaf (outside)

		enemy_leaf_init ( 96, 160 );

		for ( i = 0; i < nb_leaf;   i++ )
		{
			enemy_leaf_reset ( leaf[i], true );
		}



//		for ( i=0; i<7; i++ )
//		{
//			currentMask.array [ i+12 ] [ 0 ] = 1;
//		}

		if ( game.crusader )
		{
			nb_crusader = goManagerFindAllByEntityId ( &waObjects, crusader, 14 ); // Crusader

			for ( i=0; i<nb_crusader; i++ )
			{
				setActive ( crusader[i], 0 );
			}

			currentMask.array [ 21 ] [ 3 ] =
			currentMask.array [ 21 ] [ 4 ] =
			currentMask.array [ 20 ] [ 3 ] =
			currentMask.array [ 20 ] [ 4 ] = 0;
		}
		else
		{
			VDP_setTileMapXY ( APLAN, VDP_getTile ( APLAN,  0, 20 ), 3, 20 );
			VDP_setTileMapXY ( APLAN, VDP_getTile ( APLAN,  1, 20 ), 4, 20 );

			VDP_setTileMapXY ( APLAN, VDP_getTile ( APLAN, 10, 21 ), 2, 21 );
			VDP_setTileMapXY ( APLAN, VDP_getTile ( APLAN, 11, 21 ), 3, 21 );
			VDP_setTileMapXY ( APLAN, VDP_getTile ( APLAN, 12, 21 ), 4, 21 );
			VDP_setTileMapXY ( APLAN, VDP_getTile ( APLAN, 13, 21 ), 5, 21 );
			VDP_setTileMapXY ( APLAN, VDP_getTile ( APLAN, 14, 21 ), 6, 21 );

			s16 x, y;

			for ( y = 0; y < 7; y++ )
			{
				for ( x = 0; x < 6; x++ )
				{
					currentMask.array [ y + 13 ] [ x + 1 ] = 0;
				}
			}
		}

	}
}



static void _room_stay ( Room *room )
{
	if ( game.version == VERSION_MD )
	{
		for ( i=0; i<nb_leaf; i++ )
		{
			enemy_leaf ( leaf[i] );
		}
	}
}



void room_funct_01_all ( Room *room, u8 action )
{
	if ( action == ROOM_ACTION_ENTER ) // enter
	{
		_room_enter ( room );
	}

	else if ( action == ROOM_ACTION_STAY ) // stay
	{
		_room_stay ( room );
	}

	else if ( action == ROOM_ACTION_LEAVE ) // leave
	{
		//_room_leave ( room );
	}
}
