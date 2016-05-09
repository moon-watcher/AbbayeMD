#include "../inc/include.h"



static GameObject *hangman [ 4 ];
static GameObject *rope    [ 12 ];
static GameObject *leaf    [ 6 ];

static u8          nb_leaf;
static u8          nb_hangman;
static u8          i;


static const struct
{
	s8 rope1;
	s8 rope2;
}
values [ 4 ] =
{
	{ 0, 1 }, { 3, 4 }, { 6, 7 }, { 9, -1 }
};




static void _room_enter ( Room *room )
{
	nb_hangman = goManagerFindAllByEntityId ( &waObjects, hangman, 37 ); // Hangman
	goManagerFindAllByEntityId ( &waObjects, rope,    38 ); // Rope

	for ( i=0; i<nb_hangman; i++ )
	{
		if ( values[i].rope1 >= 0 ) enemy_hangman ( hangman[i], rope[(u8)values[i].rope1], 1 );
		if ( values[i].rope2 >= 0 ) enemy_hangman ( hangman[i], rope[(u8)values[i].rope2], 1 );
	}

	if ( game.version == VERSION_MD )
	{
		nb_leaf = goManagerFindAllByEntityId ( &waObjects, leaf, 81 );   // Leaf

		enemy_leaf_init ( 96, 160 );

		for ( i = 0; i < nb_leaf;   i++ )
		{
			enemy_leaf_reset ( leaf[i], true );
		}
	}
}



static void _room_stay ( Room *room )
{
	for ( i=0; i<nb_hangman; i++ )
	{
		if ( values[i].rope1 >= 0 ) enemy_hangman ( hangman[i], rope[(u8)values[i].rope1], 0 );
		if ( values[i].rope2 >= 0 ) enemy_hangman ( hangman[i], rope[(u8)values[i].rope2], 0 );
	}

	if ( game.version == VERSION_MD )
	{
		for ( i=0; i<nb_leaf; i++ )
		{
			enemy_leaf ( leaf[i] );
		}
	}
}



void room_funct_41_all ( Room *room, u8 action )
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
