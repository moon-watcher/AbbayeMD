#include "../inc/include.h"



static GameObject *dragon_head = NULL;
static GameObject *dragon_body = NULL;
static GameObject *dragon_fire = NULL;
static GameObject *running_fire [ 6 ] = { };

static u8          nb_running_fire = 0;
static u8          i = 0;



static void _room_enter ( Room *room )
{
	dragon_head = (GameObject*) goManagerFindByEntityId ( &waObjects, 47, 0 );     // Dragon head
	dragon_body = (GameObject*) goManagerFindByEntityId ( &waObjects, 48, 0 );     // Dragon body
	dragon_fire = (GameObject*) goManagerFindByEntityId ( &waObjects, 49, 0 );     // Dragon fire
	nb_running_fire = goManagerFindAllByEntityId ( &waObjects, running_fire, 50 ); // Running fire

	setActive ( dragon_fire, 0 );

	for ( i=0; i<nb_running_fire; i++ )
	{
		setActive ( running_fire[i], 0 );
	}

	philippe_init ( );
	philippe_add ( 160, 170 );
	philippe_add (  14,  23 );
}



static void _room_stay ( Room *room )
{
	enemy_dragon ( dragon_head, dragon_body, dragon_fire, running_fire );

	philippe_update ( );
}



void room_funct_02_all ( Room *room, u8 action )
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
