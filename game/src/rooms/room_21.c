#include "../inc/include.h"



static GameObject *door = NULL;
static GameObject *leaf     [ 6 ] = { };
static GameObject *crusader [ 6 ] = { };

static u16         nb_crusader = 0;
static u16         nb_leaf = 0;
static u16         i = 0;
static u16         _wait_cm = 0;
static bool        _deactivate_leafs;



#define DOOR_IS_CLOSED  itemGetChecked ( door->item )
#define DOOR_IS_OPENED  !DOOR_IS_CLOSED


static void _room_enter ( Room *room )
{
	_wait_cm = 0;
	nb_leaf = 0;
	_deactivate_leafs = false;

	door = (GameObject*) goManagerFindByEntityId ( &waObjects, 35, 0 ); // Door

	nb_crusader = goManagerFindAllByEntityId ( &waObjects, crusader, 14 ); // Crusader

	for ( i=0; i<nb_crusader; i++ )
	{
		setActive ( crusader[i], 0 );
	}


	setActive ( door, DOOR_IS_CLOSED );

	if ( DOOR_IS_OPENED  &&  game.version == VERSION_MD )
	{
		nb_leaf = goManagerFindAllByEntityId ( &waObjects, leaf, 96 );   // Leaf (2,1)

		enemy_leaf_init   ( 128, 32 );

		for ( i = 0; i < nb_leaf;   i++ )
		{
			enemy_leaf_reset ( leaf[i], true );
		}
	}
}



static void _room_stay ( Room *room )
{
	if ( player.go->x == 7  &&  DOOR_IS_OPENED  &&  !game.crusader )
	{
		setActive ( door, 1 ) ;

		SPR_setPosition ( door->sprite, door->x, door->y );
		SPR_update ( );

		itemSetChecked ( door->item, 1 );

		play_fx_pause ( SFX_DOOR, getHz() );

		_deactivate_leafs = true;
	}

	else if ( DOOR_IS_CLOSED  &&  door->x > 0 )
	{
		goIncX ( door, -1 );
	}

	else if ( DOOR_IS_CLOSED  &&  door->x == 0  &&  ( vtimer % 30 == 0 )  &&  ( random() % 2 == 0 ) )
	{
		play_fx ( SFX_CLOSED_DOOR );
		goIncX ( door, 2 );
	}


	if ( game.crusader )
	{
		if ( player.go->x == 7  &&  DOOR_IS_CLOSED )
		{
			setActive ( door, 0 ) ;

			SPR_update ( );

			itemSetChecked ( door->item, 0 );

			play_fx ( SFX_DOOR );
			waitHz ( getHz() );


			nb_leaf = goManagerFindAllByEntityId ( &waObjects, leaf, 96 );   // Leaf (2,1)

			enemy_leaf_init   ( 128, 32 );

			for ( i = 0; i < nb_leaf;   i++ )
			{
				setActive ( leaf[i], 1 );
				enemy_leaf_reset ( leaf[i], false );
			}


			for ( i=0; i<nb_crusader; i++ )
			{
				setActive ( crusader[i], 1 );
			}


			itemSetChecked ( itemManagerFind(&waItems,0,1,1), false );

			_wait_cm = getHz() * 3;
			play_music ( MUSIC_WOODS );

			JoyReader_pause();
		}

		if ( _wait_cm )
		{
			--_wait_cm;

			player.go->vel_x = zero;
			playerUpdate ( &player, PLAYER_STAY );

			if ( _wait_cm == 0 )
			{
				JoyReader_resume();
			}
		}
	}

	if ( DOOR_IS_OPENED  &&  game.version == VERSION_MD )
	{
		for ( i=0; i<nb_leaf; i++ )
		{
			enemy_leaf ( leaf[i] );
		}
	}


	if ( _deactivate_leafs )
	{
		i = nb_leaf;

		while ( i-- )
		{
			if ( goGetTop ( leaf[i] ) < 0  ||  goGetLeft ( leaf[i] ) > screenWidth )
			{
				setActive(leaf[i], 0 );
			}
		}


	}
}



void room_funct_21_all ( Room *room, u8 action )
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

