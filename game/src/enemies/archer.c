#include "../inc/include.h"




void enemy_archer ( GameObject *goArcher[], GameObject *goArrow[], u16 pos )
{
	EnemyData *data = (EnemyData*) enemy_find ( 33, pos );


	if ( data->entity->id == 0 || !data )
	{
		return;
	}


	GameObject *archer = (GameObject*) goArcher [ pos ];
	GameObject *arrow  = (GameObject*) goArrow  [ pos ];


	u8 dir = goGetCenterX ( player.go ) < goGetCenterX ( archer ) ? 1 : 0;

	if ( archer->counter == data->timer[0] )
	{
		archer->counter = 0;

		SPR_setFrame ( archer->sprite, 0 ) ;

		setActive ( arrow, 1 );

		s16 x = goGetCenterX ( archer );

		goSetXY ( arrow, x, archer->y + 10 );


		if ( dir )
		{
			arrow->vel_x = -arrow->object->entity->vel_x;
		}
		else
		{
			arrow->vel_x = +arrow->object->entity->vel_x;
		}

		play_fx ( FX_SHOT );
	}

	if ( archer->counter == 30 )
	{
		SPR_setFrame ( archer->sprite, 1 ) ;
	}

	SPR_setTimer ( archer->sprite, 1000 ) ;


	++archer->counter;

	SPR_setHFlip ( archer->sprite, dir );
}
