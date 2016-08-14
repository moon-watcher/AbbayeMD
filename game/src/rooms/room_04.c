#include "../inc/include.h"


static GameObject *gargoyle [ 2 ] = { };
static GameObject *spit [ 2 ] = { };
static GameObject *door = NULL;
static GameObject *sw = NULL;
static GameObject *explosion = NULL;

static u8          nb_gargoyle = 0;
static u16         i = 0;




static void _room_enter ( Room *room )
{
	nb_gargoyle = goManagerFindAllByEntityId ( &waObjects, gargoyle, 51 ); // Gargoyle
	goManagerFindAllByEntityId ( &waObjects, spit,     52 ); // Gargoyle spit

	door      = goManagerFindByEntityId ( &waObjects, 35, 0 ); // Door
	sw        = goManagerFindByEntityId ( &waObjects, 22, 0 ); // Switch
	explosion = goManagerFindByEntityId ( &waObjects, 66, 0 ); // Gargoyle spit explosion

	enemy_bullet_init ( spit[0], explosion );

	philippe_init ( );
	philippe_add ( 198, 212 );
	philippe_add (  44,  70 );
}



static void _room_stay ( Room *room )
{
	for ( i=0; i<nb_gargoyle; i++ )
	{
		enemy_gargoyle ( gargoyle, spit, i );
		enemy_bullet ( spit[i] );
	}

	if ( itemGetChecked ( sw->item ) )
	{
		if ( itemGetValue ( sw->item ) == 0 )
		{
			itemSetValue ( sw->item, 1 );
			itemSetValue ( door->item, getHz ( ) ); // countdown to open
		}

		if ( itemGetValue ( door->item ) == 0 )
		{
			itemSetVisible ( door->item, false );

			setActive ( door, 0 );

			updateSprites ( ); // SPR_update ( (Sprite*) &waSprites, wvSpriteCounter );

			play_fx ( FX_DOOR );
			waitHz ( getHz ( ) );
		}

		itemIncValue ( door->item, -1 );
	}

	philippe_update();
}



static void _room_leave ( room )
{
	enemy_bullet_delete ( );
}



void room_funct_04_all ( Room *room, u8 action )
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
		_room_leave ( room );
	}
}
