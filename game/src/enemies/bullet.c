#include "../inc/include.h"


static u16  vram_bullet = 0;
//static u16  vram_explosion = 0;
static bool init = false;



//void enemy_bullet_init ( GameObject *bullet, GameObject *explosion )
void enemy_bullet_init ( GameObject *bullet )
{
	init = true;

	//if ( bullet == NULL || explosion == NULL )
	if ( bullet == NULL )
	{
		init = false;
		return;
	}

	vram_bullet    = bullet->vram;
//	vram_explosion = explosion->vram;
}



void enemy_bullet_delete ( )
{
	vram_bullet    = 0;
//	vram_explosion = 0;
}



void enemy_bullet ( GameObject *bullet )
{
	Sprite *sp = bullet->sprite;

	if ( !init )
	{
		return;
	}

	if ( !bullet->active )
	{
		return;
	}

	if ( bullet->counter )
	{
		--bullet->counter;

		if ( bullet->counter == 0 )
		{
			sp->timer      = 2;
//			SPR_setVRAMDirect ( bullet->sprite, vram_bullet );
//			bullet->vram               = vram_bullet;
//			bullet->counter            = 0;

			setActive ( bullet, 0 );
		}
	}
	else
	{
		switch ( bullet->object->entity->id )
		{
			case 52: // Gargoyle spit
				if ( sp->timer == 1  &&  sp->frameInd == sp->animation->numFrame - 2 )
				{
					SPR_setFrame ( sp, 0 );
				}

				break;

			case 34: // Arrow
				if ( sp->timer == 1 )
				{
					SPR_setFrame ( sp, 0 );
					SPR_setTimer ( sp, 1000 );
				}

				break;

			case 58: // Satan bullet
				if ( sp->timer == 1 )
				{
					SPR_setFrame ( sp, 0 );
					SPR_setTimer ( sp, 1000 );
				}

				break;

		}
	}
}



void enemy_bullet_deactivate ( GameObject *bullet )
{
	Sprite *sp = bullet->sprite;

	bullet->vel_x = zero;
	bullet->vel_y = zero;

	if ( init && ( game.version == VERSION_PC || game.version == VERSION_MD ) )
	{
		switch ( bullet->object->entity->id )
		{
			case 52: // Gargoyle spit
				SPR_setFrame ( sp, SPR_countFrames ( sp ) - 1 );
				SPR_setTimer ( sp, 100 );
				bullet->counter = 5;

				break;

			case 34: // Arrow
				SPR_setFrame ( sp, SPR_countFrames ( sp ) - 1 );
				SPR_setTimer ( sp, 100 );
				bullet->counter = 5;

				break;

			case 58: // Stan bullet
				SPR_setFrame ( sp, SPR_countFrames ( sp ) - 2 );
				SPR_setTimer ( sp, 100 );
				bullet->counter = 5;

				break;
		}
	}
	else
	{
		bool active = false;

		// do not desactivate bullets
		if ( game.room.x == 4 && game.room.y == 2 )
		{
			// spitting plants room
			active = true;
		}

		setActive ( bullet, active );
	}
}


/*
		if ( bullet->counter  ||  vram_explosion == 0 )
		{
			setActive ( bullet, 0 );
			SPR_setVRAMDirect ( bullet->sprite, vram_bullet );

			return;
		}


		// 52 // Gargoyle spit
		// 58 // Satan bullet
		// 34 // Arrow

		if ( in_array ( bullet->object->entity->id, (u16[]) { 52, 58, 34, 0 } ) )
		{
			bullet->sprite->timer      = 100;
			SPR_setVRAMDirect ( bullet->sprite, vram_explosion );
			bullet->vram               = vram_explosion;
			bullet->counter            = 3;
		}
	}

	if ( bullet->counter == 0 )
	{
		setActive ( bullet, 0 );

		SPR_setVRAMDirect ( bullet->sprite, vram_bullet );
	}
}
*/
