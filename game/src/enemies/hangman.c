#include "../inc/include.h"



void enemy_hangman ( GameObject *hangman, GameObject *rope, u16 init )
{
	s16 active = -1;

	if ( init )
	{
		active = ( hangman->y > rope->y );
	}
	else if ( hangman->y == rope->y )
	{
		active = ( hangman->vel_y > zero );
	}

	if ( active != -1 )
	{
		setActive ( rope, active );
	}
}
