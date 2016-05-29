#include "../inc/include.h"



#define HZ_TO_REACTIVATE  getHz ( ) * 2




static u32 _countdown;



void switch_init ( )
{
	_countdown = 0;
}



Switch *switch_find ( u8 room_x, u8 room_y )
{
	u8 i;
	Switch *s = NULL;

	for ( i=0; i<SWITCH_MAX; i++ )
	{
		s = (Switch*) &switch_list [ game.version ] [ i ];

		if ( s->room_x == room_x && s->room_y == room_y )
		{
			return (Switch*) s;
		}
	}

	return NULL;
}



void switch_touched ( GameObject *go )
{
	if (  _countdown  &&  ( ( _countdown + HZ_TO_REACTIVATE ) > vtimer )  )
	{
		return;
	}


	Switch *s = (Switch*) switch_find ( game.room.x, game.room.y );
	u8 checked = itemGetChecked ( go->item );


	if ( s->reactivable || !checked )
	{
		_countdown = vtimer;
		checked = checked ? 0 : 1;

		itemSetChecked ( go->item, checked );

		bool ok = true;

		if ( s->function )
		{
			ok = s->function ( go, s );
		}

		if ( ok )
		{
			goSetObject ( go, checked ? &s->on : &s->off );

			play_fx ( FX_SWITCH );

			// update the sprite before waitHz()
			SPR_update ( (Sprite*) &waSprites, wvSpriteCounter );
			VDP_waitVSync ( );

			waitHz ( getHz() );
		}

		if ( game.room.x == 2  &&  game.room.y == 3 )
		{
			GameObject *crosses[4];

			u16 i, nb_crosses = goManagerFindAllByEntityIds ( &waObjects, crosses, 12, 13, 0 );

			for ( i = 0; i < nb_crosses; ++i )
			{
				invert_cross ( crosses[i] );
			}
		}
	}
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



bool switch_crosses ( GameObject *go, Switch *sw )
{
	invertedCross = !invertedCross;

	return true;
}



bool switch_ring_bell ( GameObject *go, Switch *sw )
{
	s16 timeout = getHz()*2;

	play_fx ( FX_SWITCH );

	goSetObject ( go, &sw->transaction );
	goIncX ( go, -8 );
	SPR_setPosition ( go->sprite, go->x, go->y );

	while ( timeout-- )
	{
		u16 frec = ( ( go->sprite->frameInd % 2  ) ? 7 : 20 ) ;

		go->sprite->timer = 100;

		if ( timeout % frec == 0 )
		{
			SPR_nextFrame ( go->sprite );
		}

		SPR_update ( (Sprite*) &waSprites, wvSpriteCounter );
		VDP_waitVSync();
	}

	goSetObject ( go, &sw->on );
	goIncX ( go, +8 );
	SPR_setPosition ( go->sprite, go->x, go->y );

	return false;
}


