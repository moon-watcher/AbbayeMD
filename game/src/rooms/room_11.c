#include "../inc/include.h"


static s16         scroll = 0;
static GameObject *lighting = NULL;
static GameObject *leaf [ 6 ] = { };
static GameObject *crusader [ 8 ] = { };
static GameObject *door = NULL;

static u16         nb_crusader = 0;
static u16         nb_leaf = 0;
static u16         i = 0;




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



//////////////////////////////////////////////////////////////////////////////////////////////////




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
		nb_leaf     = goManagerFindAllByEntityId ( &waObjects, leaf,     86 ); // Leaf (1,1)
		nb_crusader = goManagerFindAllByEntityId ( &waObjects, crusader, 14 ); // Crusader

		enemy_leaf_init ( 96, 160 );

		for ( i = 0; i < nb_leaf;   i++ )
		{
			enemy_leaf_reset ( leaf[i], true );
		}

		enemy_star_init (  );

		door = (GameObject*) goManagerFindByEntityId ( &waObjects, 35, 0 ); // Door
		setActive ( door, 0 );


		if ( game.crusader )
		{
			// only the first time
			cm_start ( );

			setActive ( door, itemGetChecked(door->item) );

			for ( i=0; i<nb_crusader; i++ )
			{
				setActive ( crusader[i], 0 );
			}

			if ( itemGetChecked(door->item) ) // closed
			{
				for ( i=0; i<nb_crusader-1; i++ )
				{
					setActive ( crusader[i], 1 );
					crusader[i]->vel_x = zero;
				}

				goSetXY ( crusader[0], 233, 140 );
				goSetXY ( crusader[1], 216, 148 );
				goSetX  ( crusader[2], 200 );
				goSetX  ( crusader[3], 183 );
				goSetX  ( crusader[4], 146 );
			}
		}
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


		if ( game.crusader  &&  itemGetChecked ( door->item ) )
		{
			if ( door->x > 248 )
			{
				goIncX ( door, -1 );
				goIncX ( crusader[0], -1 );
			}

			else if ( door->x == 248  &&  ( vtimer % 30 == 0 )  &&  ( random() % 2 == 0 ) )
			{
				play_fx ( FX_JUMP );
				goIncX ( door, 2 );

				goIncX ( crusader[0], 3 );
			}
			else
			{
				goSetX ( crusader[0], 233 );
			}

			if ( vtimer % ( ( random() % 70 ) + 23 ) == 0 ) SPR_setHFlip ( crusader[4]->sprite, SPR_getHFlip ( crusader[4]->sprite ) ? 0 : 1  );
			if ( vtimer % ( ( random() % 80 ) + 37 ) == 0 ) SPR_setHFlip ( crusader[3]->sprite, SPR_getHFlip ( crusader[3]->sprite ) ? 0 : 1  );
			if ( vtimer % ( ( random() % 90 ) + 11 ) == 0 ) SPR_setHFlip ( crusader[2]->sprite, SPR_getHFlip ( crusader[2]->sprite ) ? 0 : 1  );
		}
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
