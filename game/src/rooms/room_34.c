#include "../inc/include.h"


static GameObject *door = NULL;
static GameObject *philippe [6] = { };

static u16 nb_philippe = 0;
static u16 i = 0;

static Item *iDoorAt21 = NULL;
static u16 goEnding = 0;




static void _room_enter ( Room *room )
{
	door        = (GameObject*) goManagerFindByEntityId ( &waObjects, 35, 0 ); // Door
	nb_philippe = goManagerFindAllByEntityId ( &waObjects, philippe, 97 ); // Philippe like crusaers
	setActive ( door, false );

	iDoorAt21 = NULL;
	goEnding  = 0;


	for ( i=0; i<nb_philippe; i++ )
	{
		setActive ( philippe[i], false );
	}

	if ( game.crusader )
	{
		if ( itemGetChecked ( door->item ) )
		{
			setActive ( door, true );
		}

		iDoorAt21 = (Item*) itemManagerFind ( &waItems, 0, 2, 1 ); // door at 2,0

		if ( !itemGetChecked(iDoorAt21) )
		{
			goEnding = 1;

			//philippe[1]->vel_x = philippe[1]->object->entity->vel_x;
			philippe[0]->vel_x = philippe[0]->object->entity->vel_x;

			// reparte a los cruzados por esta habitación
			for ( i=0; i<nb_philippe; i++ )
			{
				setActive ( philippe[i], true );
			}

		}
	}
}



static void _room_stay ( Room *room )
{

	if  ( goEnding == 1 )
	{
		if ( goGetCenterX(player.go) == 195 )
		{
			//waitHz(getHz());
			setActive ( door, 0 );
			play_fx ( FX_DOOR );
			SPR_update ( );

			waitSc(1);
			displayOff ( getHz()*2 );

			//game.crusader = 0;
			game.room.x = 4;
			game.room.y = 4;
			game.status = GAME_STATUS_GONEXT;
		}


		if ( door->x > 248 )
		{
			goIncX ( door, -1 );
			goIncX ( philippe[3], -1 );
		}

		else if ( door->x == 248  &&  ( vtimer % 30 == 0 )  &&  ( random() % 2 == 0 ) )
		{
			play_fx ( FX_JUMP );
			goIncX ( door, 2 );

			goIncX ( philippe[3], 3 );
		}
		else
		{
			goSetX ( philippe[3], 233 );
		}

		if ( vtimer % ( ( random() % 70 ) + 23 ) == 0 ) SPR_setHFlip ( philippe[2]->sprite, SPR_getHFlip ( philippe[2]->sprite ) ? 0 : 1  );
		if ( vtimer % ( ( random() % 80 ) + 37 ) == 0 ) SPR_setHFlip ( philippe[1]->sprite, SPR_getHFlip ( philippe[1]->sprite ) ? 0 : 1  );
//		if ( vtimer % ( ( random() % 90 ) + 11 ) == 0 ) SPR_setHFlip ( philippe[2]->sprite, SPR_getHFlip ( philippe[2]->sprite ) ? 0 : 1  );


		s16 x1 = goGetCenterX ( philippe[0] );
//		s16 x2 = goGetCenterX ( philippe[0] );

		if ( x1 == 154 || x1 == 120 ) philippe[0]->vel_x = -philippe[0]->vel_x;
//		if ( x2 ==  98 || x2 ==  90 ) philippe[0]->vel_x = -philippe[0]->vel_x;
	}

}



void room_funct_34_all ( Room *room, u8 action )
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





