#include "../inc/include.h"




void enemy_gargoyle ( GameObject *goGargoyle[], GameObject *goSpit[], u16 pos )
{
	EnemyData *data = (EnemyData*) enemy_find ( 51, pos );

	if ( data->entity->id == 0 || !data )
	{
		return;
	}


	GameObject *gargoyle = (GameObject*) goGargoyle [ pos ];
	GameObject *spit     = (GameObject*) goSpit     [ pos ];

	if ( gargoyle->counter == data->timer[0] )
	{
		setActive ( spit, 1 );

		gargoyle->counter = 0;

		SPR_setFrame ( gargoyle->sprite, 1 );

		goSetXY ( spit, gargoyle->x+4, gargoyle->y + 8 );

		spit->vel_x = -spit->object->entity->vel_x;

		play_fx ( FX_SPIT );
	}

	if ( gargoyle->counter == 20 )
	{
		SPR_setFrame ( gargoyle->sprite, 0 );
	}

	SPR_setTimer ( gargoyle->sprite, 1000 );


	if ( !spit->vel_x && SPR_countFrames(spit->sprite) == 1 )
	{
		goSetY(spit, -20);
	}


	++gargoyle->counter;
}
