#include "../inc/include.h"



static u8 _status = 0;
static bool _success = false;



void cm_init ( )
{
	_status       = 0;
	_success      = false;
	game.crusader = false;
}



void cm_activate ( )
{
	if ( !cm_can_be_activated() )
	{
		return;
	}

	game.crusader = true;
	game.room.x   = 1;
	game.room.y   = 1;
	game.status   = GAME_STATUS_GONEXT;
	_status       = 1;
	_success      = false;

//	// no va!
//	goSetXY ( player.go, 110, 152 );
//	goUpdate ( player.go );
//	//
}



u16 cm_can_be_activated ( )
{
	return
	(
		game.version  == VERSION_MD  &&
		game.crusader ==      false  &&
		session.level ==          1  &&
		_status       ==          0
	);
}




void cm_start ( )
{
	if ( _status != 1 )
	{
		return;
	}

	_status  = 2;
	_success = false;

	checkpoint_init ( );

	player.burning    = 0;
	player.plunge     = 0;
	player.in_passage = false;
	player.grial      = false;
	player.go->vel_x  = zero;
	player.go->vel_y  = zero;

	playerUpdate ( &player, PLAYER_STAY );
	playerSetAction ( &player, PLAYER_STAY );

	SPR_setHFlip (  player.go->sprite,  0 );
	SPR_setPosition ( player.go->sprite, 26, 152 ); // update sprite
	goSetXY ( player.go, 26, 152 );

	JoyReader_init ( 1 );


	// close doors and switches

	#define NBLIST 3
	Item list [ NBLIST ] =
	{
		{  0, 1, 1, true, true, 0, 0 },
		{  0, 2, 1, true, true, 0, 0 },
		{  0, 3, 4, true, true, 0, 0 },
//		{  9, 0, 2, true, true, 0, 0 },
//		{  5, 0, 4, true, true, 0, 0 },
//		{  4, 0, 4, true, true, 0, 0 },
//		{  0, 2, 0, true, true, 0, 0 },
//		{  0, 3, 1, true, true, 0, 0 },
//		{  1, 3, 1, true, true, 0, 0 },
//		{ 22, 4, 1, true, true, 0, 0 },
//		{  0, 4, 3, true, true, 0, 0 },
	};

	u8 i;
	for ( i=0; i<NBLIST; i++ )
	{
		Item *item = (Item*) itemManagerFind ( &waItems, list[i].id, list[i].room_x, list[i].room_y );

		if ( item )
		{
			item->checked = list[i].checked;
			item->visible = list[i].visible;
			item->value   = list[i].value;
		}
		else
		{
			itemManagerAdd
			(
				&waItems,
				list[i].id,
				list[i].room_x,
				list[i].room_y,
				list[i].checked,
				list[i].visible,
				list[i].value
			);
		}
	}
	//


//	itemManagerShow ( &waItems );
}



bool cm_is_activated ( )
{
	if ( _status == 2 )
	{
		Item *iDoorAt21 = (Item*) itemManagerFind ( &waItems, 0, 2, 1 ); // door at 2,0

		return !itemGetChecked(iDoorAt21);
	}

	return false;
}


void cm_setSuccess ( bool s )
{
    _success = s;
}


bool cm_getSuccess ( )
{
    return _success;
}
