#include "../inc/include.h"




static u8  set;
static u16 time;


static void _setFrame ( Sprite *sp, u8 frame )
{
	SPR_setFrame ( sp, frame );
	SPR_setTimer ( sp, 100 );
}


void enemy_satan ( GameObject *satan, GameObject *bullet[] )
{
	if ( enemy_reset_satan )
	{
		enemy_reset_satan = false;

		set  = 0;
		time = enemy_find ( 57, 0 )->timer[0];
	}

	if ( satan->counter == time )
	{
		satan->counter = 0;

		_setFrame ( satan->sprite, 1 );

		++set; set %= 3;

		GameObject *bullet1 = (GameObject*) bullet [ set * 4 + 0 ];
		GameObject *bullet2 = (GameObject*) bullet [ set * 4 + 1 ];
		GameObject *bullet3 = (GameObject*) bullet [ set * 4 + 2 ];
		GameObject *bullet4 = (GameObject*) bullet [ set * 4 + 3 ];

		setActive ( bullet1, 1 );
		setActive ( bullet2, 1 );
		setActive ( bullet3, 1 );
		setActive ( bullet4, 1 );

		goSetXY ( bullet1, satan->x-8, satan->y + 16 );
		goSetXY ( bullet2, satan->x-9, satan->y + 16 );
		goSetXY ( bullet3, satan->x-8, satan->y + 16 );
		goSetXY ( bullet4, satan->x-5, satan->y + 16 );

		bullet1->vel_x = -bullet1->object->entity->vel_x;
		bullet1->vel_y = -FIX32(0.3);

		bullet2->vel_x = -bullet2->object->entity->vel_x;
		bullet2->vel_y = zero;

		bullet3->vel_x = -bullet3->object->entity->vel_x;
		bullet3->vel_y = +FIX32(0.3);

		bullet4->vel_x = -bullet4->object->entity->vel_x;
		bullet4->vel_y = +FIX32(0.6);

		play_fx ( FX_SHOT );
	}

	if ( satan->counter == 20 )
	{
		_setFrame( satan->sprite, 0 );
	}

	++satan->counter;
}

