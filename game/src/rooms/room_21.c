#include "../inc/include.h"



static GameObject *door;
static GameObject *leaf    [ 6 ];

static u8          nb_leaf;
static u8          i;




static void _room_enter ( Room *room )
{
	nb_leaf = 0;

	door = (GameObject*) goManagerFindByEntityId ( &waObjects, 35, 0 ); // Door

	setActive ( door, itemGetChecked ( door->item ) );

	if ( !itemGetChecked ( door->item ) ) //  &&  game.version == VERSION_MD
	{
		nb_leaf = goManagerFindAllByEntityId ( &waObjects, leaf, 81 );   // Leaf

		enemy_leaf_init   ( 128, 32 );

		for ( i = 0; i < nb_leaf;   i++ )
		{
			enemy_leaf_reset ( leaf[i], true );
		}
	}
}



static void _room_stay ( Room *room )
{
	if ( player.go->x == 7  &&  !itemGetChecked ( door->item ) )
	{
		setActive ( door, 1 ) ;

		SPR_setPosition ( door->sprite, door->x, door->y );
		SPR_update ( (Sprite*) &waSprites, wvSpriteCounter );

		itemSetChecked ( door->item, 1 );

		play_fx ( FX_DOOR );
		waitHz ( getHz() );

		nb_leaf = 0;
	}

	else if ( itemGetChecked ( door->item )  &&  door->x > 0 )
	{
		goIncX ( door, -1 );
	}

	else if ( itemGetChecked ( door->item )  &&  door->x == 0  &&  ( vtimer % 30 == 0 )  &&  ( random() % 3 == 0 ) )
	{
		play_fx ( FX_JUMP );
		goIncX ( door, 2 );
	}


	//if ( !itemGetChecked ( door->item ) ) //  &&  game.version == VERSION_MD
	{
		for ( i=0; i<nb_leaf; i++ )
		{
			enemy_leaf ( leaf[i] );
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

