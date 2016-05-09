#include "../inc/include.h"



void fxPlay ( Fx *fx )
{
	return;

	// Z80_DRIVER_4PCM_ENV driver makes sprites go white. Try to avoid using it

	if ( fx->driver == Z80_DRIVER_4PCM_ENV )
	{
		SND_startPlay_4PCM_ENV ( fx->fx, fx->size, fx->channel, fx->repeat );
	}
}




//void fx_stop ( )
//{
//	SND_stopPlay_4PCM  ( SOUND_PCM_CH3 );
//}
//
//
//
//void fx_play ( u8 x )
//{
//	SND_startPlay_4PCM ( fxs[x].fx, fxs[x].size, fxs[x].channel, 0 );
//}
//
//
//FX fx_get_fx ( u8 x )
//{
//	return fxs [ x ] ;
//}
//
//
//u8 fx_get_nb_fxs (  )
//{
//	return NB_FXS;
//}
//
//
