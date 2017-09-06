#include "../inc/include.h"


static Music *current = NULL;





void musicInit ( )
{
	current->track = NULL;
	current = NULL;
}


void musicPlay ( Music *track )
{
	if ( track == NULL || track->track == NULL )
	{
		musicStop();
	}
	else if ( track->id != current->id || inSoundTest )
	{
		u8 playing = SND_isPlaying_XGM();

		musicStop();

		if ( playing )
		{
			VDP_waitVSync();

			#ifdef SGDKv122a
			VDP_waitVSync();
			VDP_waitVSync();
			#endif // SGDKv122a
		}

		SND_setMusicTempo_XGM ( 60 );
		SND_startPlay_XGM ( track->track );
		SND_setForceDelayDMA_XGM ( true );

		#ifdef SGDKv122a
		XGM_setLoopNumber ( track->loop );
		#endif // SGDKv122a

		current = track;
	}
}


void musicStop ( )
{
	musicInit ( );

	if ( SND_isPlaying_XGM() )
	{
		SND_stopPlay_XGM();
	}

	SND_stopPlayPCM_XGM ( SOUND_PCM_CH1 ); // prevents long samples
	//SND_stopPlayPCM_XGM ( SOUND_PCM_CH2 );
	//SND_stopPlayPCM_XGM ( SOUND_PCM_CH3 );
	//SND_stopPlayPCM_XGM ( SOUND_PCM_CH4 );
}


void musicPause ( )
{
	if ( game.version == VERSION_C64 )
	{
		return;
	}


	if ( SND_isPlaying_XGM() )
	{
		SND_pausePlay_XGM();
	}

	SND_stopPlayPCM_XGM ( SOUND_PCM_CH1 );  // prevents long samples
	//SND_stopPlayPCM_XGM ( SOUND_PCM_CH2 );
	//SND_stopPlayPCM_XGM ( SOUND_PCM_CH3 );
	//SND_stopPlayPCM_XGM ( SOUND_PCM_CH4 );
}


void musicResume ( )
{
	if ( game.version == VERSION_C64 )
	{
		return;
	}


	if ( !SND_isPlaying_XGM() )
	{
		SND_resumePlay_XGM();
	}
}



//void musicPlay ( Music *track )
//{
//	u8 playing = SND_isPlaying_XGM();
//
//	if ( track == NULL || track->track == NULL )
//	{
//		musicStop();
//	}
//	else if ( track->id != current->id || !playing )
//	{
//		musicStop();
//
//		if ( playing )
//		{
//			VDP_waitVSync();
//			VDP_waitVSync();
//		}
//
//		SND_startPlay_XGM ( track->track );
//		XGM_setLoopNumber ( track->loop  );
//		SND_setForceDelayDMA_XGM ( true );
//
//		current = track;
//
//
////		VDP_waitVSync();
////
////		if ( !SND_isPlaying_XGM() )
////		{
////			VDP_waitVSync();
////			SND_stopPlay_XGM();
////			SND_stopPlayPCM_XGM ( SOUND_PCM_CH1 );
////			VDP_waitVSync();
////			VDP_waitVSync();
////			SND_startPlay_XGM ( (u8*) track->track );
////			XGM_setLoopNumber ( track->loop  );
////		}
//
//
//
////		u16 i = 10;
////		while ( i-- )
////		{
////			VDP_waitVSync();
////
////			if ( SND_isPlaying_XGM() )
////			{
////				return;
////			}
////
////			SND_stopPlay_XGM();
////
////			VDP_waitVSync();11
////			VDP_waitVSync();
////
////			SND_stopPlayPCM_XGM ( SOUND_PCM_CH1 );
////			SND_stopPlayPCM_XGM ( SOUND_PCM_CH2 );
////			SND_stopPlayPCM_XGM ( SOUND_PCM_CH3 );
////			SND_stopPlayPCM_XGM ( SOUND_PCM_CH4 );
////
////			SND_startPlay_XGM ( (u8*) track->track );
////		}
//	}
//}
