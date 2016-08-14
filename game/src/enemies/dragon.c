#include "../inc/include.h"



static EnemyData  *data = NULL;
static GameObject *go = NULL;
static u8          i = 0;
static u8          current_fire = 0;



void enemy_dragon ( GameObject *head, GameObject *body, GameObject *fire, GameObject *goRunningFire[] )
{
	if ( enemy_reset_dragon )
	{
		enemy_reset_dragon = false;
		current_fire = 0;

		data = (EnemyData *) enemy_find ( 47, 0 );
	}



	if ( head->counter == data->timer[0] ) // head up
	{
		goIncY ( head, -2 );
	}

	else if ( head->counter == data->timer[1] ) // head down
	{
		if ( body  &&  body->sprite->animation[0].numFrame == 2 )
		{
			SPR_setFrame (body->sprite, 1 );
		}

		go = (GameObject*) goRunningFire [ current_fire++ ];
		goSetXY ( go, 128, 96 );
		setActive ( go, 1 );
		go->vel_x = +go->object->entity->vel_x;

		go = (GameObject*) goRunningFire [ current_fire++ ];
		goSetXY ( go, 131, 96 );
		setActive ( go, 1 );
		go->vel_x = -go->object->entity->vel_x;

		current_fire %= 6;

		setActive ( fire, 1 );

		goIncY ( head, +6 );

		play_fx(FX_SHOT);
	}

	else if ( head->counter == data->timer[2] ) // rest
	{
		if ( body )
		{
			SPR_setFrame (body->sprite, 0 );
		}

		//goSetXY ( fire, -40, -40 );
		setActive ( fire, 0 );

		goSetY ( head, head->object->y - scrollVertical );
	}

	else if ( head->counter == data->timer[3] )
	{
		head->counter = 0;
	}


	++head->counter;


	if ( vtimer % 7 == 0 )
	{
		SPR_setHFlip ( fire->sprite, !SPR_getHFlip ( fire->sprite ) );
	}


	for ( i = 0; i < 6; i++ )
	{
		go = (GameObject*) goRunningFire [ i ];

		if ( go->x == VDP_getScreenWidth()  ||  go->x == 48  )
		{
			go->vel_x = zero;
			setActive ( go, 0 );
			//goSetXY ( go, 128, -40 );
		}
	}
}
