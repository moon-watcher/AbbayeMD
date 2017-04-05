#include "../inc/include.h"



void enemy_plant ( GameObject *goPlant[], GameObject *goSpit[], u16 pos )
{
	EnemyData *data = (EnemyData*) enemy_find ( 27, pos );


	if ( data->entity->id == 0 || !data )
	{
		return;
	}


	GameObject *plant = (GameObject*) goPlant [ pos ];



	u16 delay = data->delay;
	u16 timer = data->timer[0];

	if  ( ( plant->counter == delay )  ||  ( plant->counter > delay  &&  ( plant->counter - delay ) % timer == 0 ) )
	{
		SPR_setFrame ( plant->sprite, 1 );

		GameObject *spit1 = (GameObject*) goSpit [ pos * 2 + 0 ];
		GameObject *spit2 = (GameObject*) goSpit [ pos * 2 + 1 ];

		setActive ( spit1, 1 );
		setActive ( spit2, 1 );

		goSetXY ( spit1, plant->x, plant->y );
		goSetXY ( spit2, plant->x, plant->y );

		spit1->vel_x = -spit1->object->entity->vel_x;
		spit1->vel_y = -spit1->object->entity->vel_y;
		spit2->vel_x = +spit2->object->entity->vel_x;
		spit2->vel_y = -spit2->object->entity->vel_y;

		//play_sfx ( SFX_SHOT );
		play_sfx ( SFX_SPIT );
	}

	delay += 30;

	if  ( ( plant->counter == delay )  ||  ( plant->counter > delay  &&  ( plant->counter - delay ) % timer == 0 ) )
	{
		SPR_setFrame ( plant->sprite, 0 );
	}

	SPR_setTimer ( plant->sprite, 1000 );

	++plant->counter;
}
