#include "../inc/include.h"


static u8  set  = 0;
static u16 time = 0;


#define NB_BULLETS  4

static const struct
{
	s8    pos_x;
	fix32 vel_y;
}
data [ NB_BULLETS ] =
{
	{ -8, -FIX32(0.3) },
	{ -9,  zero       },
	{ -8, +FIX32(0.3) },
	{ -5, +FIX32(0.6) }
};





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

		// easier if difficult is NORMAL and not VERSION_PC
		if ( session.level == 0  &&  game.version != VERSION_PC )
		{
			time += 10;
		}
	}

	if ( satan->counter == time )
	{
		satan->counter = 0;

		_setFrame ( satan->sprite, 1 );

		++set;
		set %= 3;


		u16 i = NB_BULLETS;

		while ( i-- )
		{
			GameObject *o = (GameObject*) bullet [ set * 4 + i ];

			setActive ( o, 1 );
			goSetXY ( o, satan->x + data[i].pos_x, satan->y + 16 );

			_setFrame ( o->sprite, 0 );

			o->vel_x = -o->object->entity->vel_x;
			o->vel_y = data[i].vel_y;
		}

		play_fx ( FX_SHOT );
	}

	if ( satan->counter == 20 )
	{
		_setFrame( satan->sprite, 0 );
	}

	++satan->counter;
}

