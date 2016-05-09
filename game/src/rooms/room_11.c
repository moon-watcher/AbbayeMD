#include "../inc/include.h"


static s16         scroll;
static GameObject *lighting;
static GameObject *leaf [ 6 ];

static u8          nb_leaf;
static u16         i;


static const Vect2D_u16 exceptions [ 3 ]  =
{
	{ 21, 2 },
	{ 20, 3 },
	{ 21, 3 }
};


static void _scroll_init ( )
{
	scroll = 0;

	if ( game.version == VERSION_PCW ) scroll =  0;
	if ( game.version == VERSION_GB  ) scroll =  50;
	if ( game.version == VERSION_CGA ) scroll = -30;

	VDP_setHorizontalScroll ( PLAN_B, scroll );
}


static void _scroll_update ( )
{
	if ( game.version == VERSION_PCW )
	{
		if ( vtimer % 20 == 0 )
		{
			VDP_setHorizontalScroll ( PLAN_B, scroll++ );
		}
	}

	if ( game.version == VERSION_GB )
	{
		if ( vtimer % 11 == 0 )
		{
			VDP_setHorizontalScroll ( PLAN_B, scroll-- );
		}
	}

	if ( game.version == VERSION_CGA )
	{
		if ( vtimer % 25 == 0 )
		{
			VDP_setHorizontalScroll ( PLAN_B, scroll-- );
		}
	}
}




static void _room_enter ( Room *room )
{
	_scroll_init ();


	if ( game.version == VERSION_PCW )
	{
		lighting = (GameObject *) goManagerFindByEntityId ( &waObjects, 102, 0 ); // Lighting
		lighting->counter = 0;
	}

	if ( game.version == VERSION_MD )
	{
		nb_leaf = goManagerFindAllByEntityId ( &waObjects, leaf, 81 );   // Leaf

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
	_scroll_update ( );


	if ( game.version == VERSION_PCW )
	{
		if ( lighting->counter == 0  &&  random() % 197 == 0 )
		{
			enemy_lighting_init ( lighting );
		}

		if ( lighting->counter )
		{
			enemy_lighting ( lighting );
		}
	}

	if ( game.version == VERSION_MD )
	{
		for ( i=0; i<nb_leaf; i++ )
		{
			enemy_leaf ( leaf[i] );
		}

		enemy_star ( (Vect2D_u16*) exceptions, 15, 15, 1, 12, 4, BPLAN );
	}
}



void room_funct_11_all ( Room *room, u8 action )
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
