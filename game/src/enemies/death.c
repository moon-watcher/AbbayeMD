#include "../inc/include.h"



static s16 anim = 0;
static s16 dir = 0;

const static s16 array[6] = { +1, +1, 0, -1, -1, 0 };



void enemy_death ( GameObject *death, GameObject *goScythe[] )
{
	if ( enemy_reset_death )
	{
		enemy_reset_death = false;

		anim = 0;
		dir  = 0;
	}



	EnemyData *data = (EnemyData *) enemy_find ( 39, 0 );


	if ( vtimer % data->timer[0] == 0 )
	{
		GameObject *scythe = (GameObject*) goScythe [ death->counter ] ;

		SPR_setAnim ( death->sprite, 1 ) ;

		if ( player.action != PLAYER_BURNS )
		{
			play_fx ( SFX_SHOT );
		}

		goSetXY ( scythe,  death->x + 8,  death->y + 24 ) ;

		scythe->vel_x = 0;
		scythe->vel_y = scythe->object->entity->vel_y;

		death->counter++;
		death->counter %= 5;

		anim = 30;
	}

	if ( --anim == 0 )
	{
		SPR_setAnim ( death->sprite, 0 );
	}


	if ( vtimer % 11 == 0 )
	{
		goIncY ( death, array [ dir % 6 ] );
		++dir;
	}

}
