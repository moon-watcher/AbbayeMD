#include "../inc/include.h"



//#define HZ_TO_REACTIVATE  getHz ( ) * 3
#define HZ_TO_REACTIVATE  150




static u32 _countdown = 0;



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
			SPR_update ( );

			play_fx_pause ( FX_CHECKPOINT, getHz() );
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

	play_fx ( FX_CHAIN );

	goSetObject ( go, &sw->transaction );
	goIncX ( go, -8 );
	SPR_setPosition ( go->sprite, go->x, go->y );

	SND_pausePlay_XGM();

	while ( timeout-- )
	{
		u16 frec = ( ( go->sprite->frameInd % 2  ) ? 7 : 20 ) ;

		go->sprite->timer = 100;

		if ( timeout % frec == 0 )
		{
			SPR_nextFrame ( go->sprite );
		}

		SPR_update ( );
		VDP_waitVSync();
	}

	goSetObject ( go, &sw->on );
	goIncX ( go, +8 );
	SPR_setPosition ( go->sprite, go->x, go->y );

	SND_resumePlay_XGM();

	return false;
}


