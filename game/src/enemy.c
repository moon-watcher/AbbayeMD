#include "../inc/include.h"




EnemyData *enemy_find ( u16 entity, u16 pos )
{
	u16 i = 0;
	u16 inc = 0;

	EnemyData *data = (EnemyData*) &enemy_data [ game.version ];

	while ( data[i].entity->id )
	{
		if
		(
			data[i].room_x     == game.room.x  &&
			data[i].room_y     == game.room.y  &&
			data[i].entity->id == entity
		)
		{
			if ( inc == pos )
			{
				return (EnemyData*) &data[i];
			}

			++inc;
		}

		++i;
	}

	return NULL;
}



void enemy_reset ( )
{
	enemy_reset_death  = 1;
	enemy_reset_dragon = 1;
	enemy_reset_satan  = 1;
}



bool enemy_exceptions ( GameObject *go )
{
	// enemies doesn't kill you if...
	return
	(
		// Toxic drop
		( go->object->entity->id == 54  &&  go->sprite->frameInd != 2 )

//		|| ( tal ) // exception 1
//		|| ( tal ) // exception 2
//		|| ( tal ) // exception 3
	);
}



