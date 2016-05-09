#include "../inc/include.h"




void enemy_fish ( GameObject *goFish[], GameObject *goSplash[], u16 pos )
{
	EnemyData *data = (EnemyData*) enemy_find ( 55, pos );


	if ( data->entity->id == 0 || !data )
	{
		return;
	}



	GameObject *fish   = (GameObject*) goFish   [ pos ];
	GameObject *splash = (GameObject*) goSplash [ pos ];

	if ( splash->sprite->visibility  &&  splash->sprite->timer == 1 )
	{
		s16 frame = splash->sprite->frameInd + 1;

		if ( frame == 3 )
		{
			SPR_setVisible ( splash->sprite, 0 );
		}
		else
		{
			SPR_setAll ( splash->sprite, -1, frame, 6 );
		}
	}


	if ( fish->grabity == true && fish->vel_y > zero   )
	{
		SPR_setHFlip ( fish->sprite, 1 );
	}

	if ( fish->grabity == false  )
	{
		u16 delay = data->delay;
		u16 timer = data->timer[0];

		if  ( ( fish->counter == delay )  ||  ( fish->counter > delay  &&  ( fish->counter - delay ) % timer == 0 ) )
		{
			setActive ( fish, 1 );

			fish->vel_y = -FIX32(4.0);
			fish->grabity = true;

			play_fx ( FX_SLASH );

			SPR_setHFlip ( fish->sprite, 0 );
			SPR_setVFlip ( fish->sprite, 0 );

			SPR_setAll ( splash->sprite, 1, 0, 6 );
		}
	}

	else if (  fish->y > 168 - scrollVertical )
	{
		SPR_setAll ( splash->sprite, 1, 0, 6 );

		setActive ( fish, 0 );

		goSetY ( fish, 168 - scrollVertical );
		fish->grabity = false;
		fish->vel_y = zero;
	}


	++fish->counter;
}
