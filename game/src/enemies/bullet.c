#include "../inc/include.h"


static u16  vram_bullet;
static u16  vram_explosion;
static bool init;



void enemy_bullet_init ( GameObject *bullet, GameObject *explosion )
{
	init = true;

	if ( bullet == NULL || explosion == NULL )
	{
		init = false;
		return;
	}

	vram_bullet    = bullet->vram;
	vram_explosion = explosion->vram;
}



void enemy_bullet_delete ( )
{
	vram_bullet    = 0;
	vram_explosion = 0;
}



void enemy_bullet ( GameObject *bullet )
{
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
			bullet->sprite->timer      = 2;
			bullet->sprite->fixedIndex = vram_bullet;
			bullet->vram               = vram_bullet;
			bullet->counter            = 0;

			setActive ( bullet, 0 );
		}
	}
}



void enemy_bullet_deactivate ( GameObject *bullet )
{
	bullet->vel_x = zero;
	bullet->vel_y = zero;

	if ( init && ( game.version == VERSION_PC || game.version == VERSION_MD ) )
	{
		if ( bullet->counter  ||  vram_explosion == 0 )
		{
			setActive ( bullet, 0 );
			//waitHz(60);
			return;
		}



//		52 // Gargoyle spit
//		58 // Satan bullet
//		34 // Arrow

		if ( in_array ( bullet->object->entity->id, (u16[]) { 52, 58, 34, 0 } ) )
		{
			bullet->sprite->timer      = 100;
			bullet->sprite->fixedIndex = vram_explosion;
			bullet->vram               = vram_explosion;
			bullet->counter            = 3;
		}
	}

	if ( bullet->counter == 0 )
	{
		setActive ( bullet, 0 );
	}
}
