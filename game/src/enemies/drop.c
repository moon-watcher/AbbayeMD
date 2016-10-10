#include "../inc/include.h"



void enemy_drop ( GameObject *goDrop[], u16 pos )
{
	EnemyData *data = (EnemyData*) enemy_find ( 54, pos );


	if ( data->entity->id == 0 || !data )
	{
		return;
	}


	GameObject *drop = (GameObject*) goDrop [ pos ];

	drop->grabity = false;


	u16 delay = data->delay;


	if ( drop->counter == -1 )
	{
		goSetXY ( drop, drop->object->x, drop->object->y - scrollVertical );
		drop->counter = delay;
	}


	if ( delay > drop->counter )
	{
		++drop->counter;

		SPR_setFrame ( drop->sprite, 0 );
		SPR_setTimer ( drop->sprite, 1000 );

		return;
	}


	u8 inc;

	for ( inc = 0; inc < 3; inc++ )
	{
		if ( data->timer[inc] == drop->counter - delay )
		{
			SPR_setFrame ( drop->sprite, inc );
			SPR_setTimer ( drop->sprite, 1000 );
		}
	}


	if ( drop->sprite->frameInd == 2 )
	{
		drop->grabity = true;
		SPR_setFrame ( drop->sprite, 2 );
		SPR_setTimer ( drop->sprite, 1000 );
	}

	if ( drop->sprite->frameInd == 3  &&  drop->sprite->timer == 1 )
	{
		SPR_setFrame ( drop->sprite, 4 );
		SPR_setTimer ( drop->sprite, 5 );
	}

	if ( drop->counter - delay > data->timer[2]  &&  drop->vel_y == zero  &&  drop->grabity )
	{
		SPR_setFrame ( drop->sprite, 3 );
		SPR_setTimer ( drop->sprite, 5 );
	}


	++drop->counter;


	if ( drop->sprite->frameInd == drop->sprite->animation->numFrame - 1 )
	{
		if ( drop->counter < 1000 )
		{
			SPR_setFrame ( drop->sprite, drop->sprite->animation->numFrame - 1 );
			SPR_setTimer ( drop->sprite, 1000 );

			drop->counter = 1000;
		}

		if ( drop->counter == 1000+3 )
		{
			drop->counter = -1;
		}
	}
}












//#include "../inc/include.h"
//
//
//
//void enemy_drop ( GameObject *goDrop[], u16 pos )
//{
//	EnemyData *data = (EnemyData*) enemy_find ( 54, pos );
//
//
//	if ( data->entity->id == 0 || !data )
//	{
//		return;
//	}
//
//
//	GameObject *drop = (GameObject*) goDrop [ pos ];
//
//	drop->grabity = false;
//
//
//	u16 delay = data->delay;
//
//
//	if ( drop->counter == -1 )
//	{
//		goSetXY ( drop, drop->object->x, drop->object->y - scrollVertical );
//		drop->counter = delay;
//	}
//
//
//	if ( delay > drop->counter )
//	{
//		++drop->counter;
//
//		SPR_setFrame ( drop->sprite, 0 );
//		SPR_setTimer ( drop->sprite, 1000 );
//
//		return;
//	}
//
//
//	u8 inc;
//
//	for ( inc = 0; inc < 3; inc++ )
//	{
//		if ( data->timer[inc] == drop->counter - delay )
//		{
//			SPR_setFrame ( drop->sprite, inc );
//			SPR_setTimer ( drop->sprite, 1000 );
//		}
//	}
//
//
//	if ( drop->sprite->frameInd == 2 )
//	{
//		drop->grabity = true;
//	}
//
//	if ( drop->sprite->frameInd == 3  &&  drop->sprite->timer == 1 )
//	{
//		SPR_setFrame ( drop->sprite, 4 );
//		SPR_setTimer ( drop->sprite, 5 );
//	}
//
//	if ( drop->counter - delay > data->timer[2]  &&  drop->vel_y == zero  &&  drop->grabity )
//	{
//		SPR_setFrame ( drop->sprite, 3 );
//		SPR_setTimer ( drop->sprite, 5 );
//	}
//
//
//	++drop->counter;
//
//
//	if ( drop->sprite->frameInd == drop->sprite->animation->numFrame - 1 )
//	{
//		if ( drop->counter < 1000 )
//		{
//			SPR_setFrame ( drop->sprite, drop->sprite->animation->numFrame - 1 );
//			SPR_setTimer ( drop->sprite, 1000 );
//
//			drop->counter = 1000;
//		}
//
//		if ( drop->counter == 1000+3 )
//		{
//			drop->counter = -1;
//		}
//	}
//}
