#include "../inc/include.h"


static GameObject *leaf [ 6 ] = { };

static u8          nb_leaf = 0;
static u8          i = 0;


static const Vect2D_u16 exceptions_c64 [ 70 ]  =
{
	{ 11, 3 }, { 12, 3 }, { 13, 3 }, { 14, 3 }, { 15, 3 }, { 16, 3 }, { 17, 3 }, { 18, 3 }, { 19, 3 }, { 20, 3 },
	{ 11, 4 }, { 12, 4 }, { 13, 4 }, { 14, 4 }, { 15, 4 }, { 16, 4 }, { 17, 4 }, { 18, 4 }, { 19, 4 }, { 20, 4 },
	{ 11, 5 }, { 12, 5 }, { 13, 5 }, { 14, 5 }, { 15, 5 }, { 16, 5 }, { 17, 5 }, { 18, 5 }, { 19, 5 }, { 20, 5 },
	{ 11, 6 }, { 12, 6 }, { 13, 6 }, { 14, 6 }, { 15, 6 }, { 16, 6 }, { 17, 6 }, { 18, 6 }, { 19, 6 }, { 20, 6 },
	{ 11, 7 }, { 12, 7 }, { 13, 7 }, { 14, 7 }, { 15, 7 }, { 16, 7 }, { 17, 7 }, { 18, 7 }, { 19, 7 }, { 20, 7 },
	{ 11, 8 }, { 12, 8 }, { 13, 8 }, { 14, 8 }, { 15, 8 }, { 16, 8 }, { 17, 8 }, { 18, 8 }, { 19, 8 }, { 20, 8 },
	{ 11, 9 }, { 12, 9 }, { 13, 9 }, { 14, 9 }, { 15, 9 }, { 16, 9 }, { 17, 9 }, { 18, 9 }, { 19, 9 }, { 20, 9 },
};

static const Vect2D_u16 exceptions_md [ 3 ]  =
{
	{ 21, 2 },
	{ 20, 3 },
	{ 21, 3 }
};


static void _room_enter ( Room *room )
{
	if ( game.version == VERSION_C64 )
	{
		enemy_star_init (  );
	}

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
	if ( game.version == VERSION_C64 )
	{
		enemy_star ( (Vect2D_u16*) exceptions_c64, 15, 4, 1, 25, 9, PLAN_B );
	}

	if ( game.version == VERSION_MD )
	{
		for ( i=0; i<nb_leaf; i++ )
		{
			enemy_leaf ( leaf[i] );
		}

		enemy_star ( (Vect2D_u16*) exceptions_md, 30, 12,  0, 16, 5, PLAN_B );

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
