#include "../inc/include.h"


static GameObject *leaf [ 6 ] = { };

static u8          nb_leaf = 0;
static u8          i = 0;


static const Vect2D_u16 exceptions [ 3 ]  =
{
	{ 21, 2 },
	{ 20, 3 },
	{ 21, 3 }
};



static void _room_enter ( Room *room )
{
	if ( game.version == VERSION_MD )
	{
		philippe_init ( );
		philippe_add ( 18, 30 );

		nb_leaf = goManagerFindAllByEntityId ( &waObjects, leaf, 88 );   // Leaf (4,0)

		enemy_leaf_init ( 96, 160 );

		for ( i = 0; i < nb_leaf;   i++ )
		{
			enemy_leaf_reset ( leaf[i], true );
		}

		enemy_star_init (  );
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

		enemy_star ( (Vect2D_u16*) exceptions, 30, 12,  0, 16, 5, PLAN_B );

		philippe_update ( );
	}
}



void room_funct_40_all ( Room *room, u8 action )
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
