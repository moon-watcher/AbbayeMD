#include "../inc/include.h"


void fxInit ( )
{
   int i = FX_MAX;

   while ( i-- )
   {
      Fx *fx =  (Fx*) fx_list [ game.version ] [ i ];

      SND_setPCM_XGM ( 64 + fx->id, fx->sample, fx->size );
   }
}



void fxPlay ( Fx *fx )
{
   if ( SND_isPlayingPCM_XGM ( fx->channel ) )
   {
      SND_stopPlayPCM_XGM ( fx->channel );
   }

   SND_startPlayPCM_XGM ( 64 + fx->id, fx->priority, fx->channel );
}


void fxStop ( u16 channel )
{
   SND_stopPlayPCM_XGM ( channel );
}


//void fxInit ( )
//{
//   return;
//
//
//
//   int i;
//
//   for ( i = 0; i < FX_MAX; i++ )
//   {
//      Fx *fx =  (Fx*) fx_list [ game.version ] [ i ];
//
//      switch ( fx->driver )
//      {
//         case Z80_DRIVER_XGM :
//            SND_setPCM_XGM ( fx->xgm_id, fx->sample, fx->size );
//            break;
//      }
//   }
//
//}

//void fxPlay ( Fx *fx )
//{
////   return;
//
//	switch ( fx->driver )
//	{
//      case Z80_DRIVER_XGM :
//         SND_startPlayPCM_XGM ( fx->xgm_id, fx->priority, fx->channel );
//         break;
//
//      case Z80_DRIVER_4PCM_ENV :
//         SND_startPlay_4PCM_ENV ( fx->fx, fx->size, fx->channel, fx->repeat );
//         break;
//	}
//}

