#include "../inc/include.h"



void sfxInit ( )
{
   int i = SFX_MAX;

   while ( i-- )
   {
      Sfx *sfx = (Sfx*) sfx_list [ game.version ] [ i ];

      XGM_setPCM ( sfx->id + 64, sfx->data, sfx->length );
   }
}


void sfxPlay ( Sfx *fx )
{
   s8 channel  = fx->channel;
   u8 priority = fx->priority;

   if ( inSoundTest )
   {
      channel  = SOUND_PCM_CH2;
      priority = 10;
   }

   sfxStop ( channel );

   XGM_startPlayPCM ( 64 + fx->id, priority, channel );
}


void sfxStop ( s8 channel )
{
   if ( inSoundTest )
   {
      channel = SOUND_PCM_CH2;
   }

   if ( XGM_isPlayingPCM ( channel ) )
   {
      XGM_stopPlayPCM ( channel );
   }
}


void sfxMute ( )
{
   sfxStop ( SOUND_PCM_CH1 );
   sfxStop ( SOUND_PCM_CH2 );
   sfxStop ( SOUND_PCM_CH3 );
   sfxStop ( SOUND_PCM_CH4 );
}






//
//static Sfx *current = NULL;
//
//
//
//void sfxInit ( )
//{
//	current->data = NULL;
//	current = NULL;
//}
//
//
//void sfxPlay ( Sfx *sfx )
//{
//   // QUEDA LA PRIORIDAD DEL VGM!!!
//
//   switch ( sfx->driver )
//   {
//      case Z80_DRIVER_VGM:
//         SND_playSfx_VGM ( sfx->data, sfx->length );
//         break;
//
//      case Z80_DRIVER_PCM:
//         SND_startPlay_PCM ( sfx->data, sfx->length, sfx->rate, sfx->pan, sfx->loop );
//         break;
//
//      case Z80_DRIVER_NULL:
//         psg_play ( sfx->data, sfx->sample );
//         break;
//
//      default:
//         break;
//   }
//
//   current = sfx;
//}
//
//
//void sfxStop ( s8 channel )
//{
//   if ( !current || !current->sample )
//   {
//      return;
//   }
//
//
//   switch ( current->driver )
//   {
//      case Z80_DRIVER_VGM:
//         SND_playSfx_VGM ( NULL, 0 );
//         break;
//
//      case Z80_DRIVER_PCM:
//         SND_startPlay_PCM ( NULL, 0, 0, 0, 0 );
//         break;
//
//      case Z80_DRIVER_NULL:
//         psg_stop();
//         break;
//
//      default:
//         break;
//   }
//
//   sfxInit();
//}













//void sfxInit ( )
//{
//   return;
//
//
//
//   int i;
//
//   for ( i = 0; i < SFX_MAX; i++ )
//   {
//      Sfx *fx =  (Sfx*) fx_list [ game.version ] [ i ];
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

//void sfxPlay ( Sfx *fx )
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

