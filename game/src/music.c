#include "../inc/include.h"



static Music *current = NULL;



void musicInit ( )
{
	current = NULL;
}



void musicPlay ( Music *track )
{
	if ( track->id == current->id )
	{
		return;
	}

	musicStop ( );
	current = track;

	if ( current && current->track )
	{
		VDP_waitVSync();
		SND_startPlay_XGM ( current->track );
	}



//	musicStop ( );
//	current = track;
//
//	VDP_waitVSync ( );
//	SYS_disableInts();
//	SND_startPlay_XGM ( current->track );
//	SYS_enableInts();
//	VDP_waitVSync ( );
}



void musicStop ( )
{
	if ( SND_isPlaying_XGM ( ) )
    {
		SND_stopPlay_XGM ( );
    }

	current = NULL;

//	VDP_waitVSync ( );
//	SYS_disableInts();
//	SND_stopPlay_XGM ( );
//	SYS_enableInts();
//	VDP_waitVSync ( );
}




//void musicPlay ( Music *track )
//{
//	if ( track->id == current->id )
//	{
//		return;
//	}
//
//	if ( track->track == NULL )
//	{
//		musicStop ( );
//		return;
//	}
//
//	current = track;
//
//	switch ( current->driver )
//	{
//		case Z80_DRIVER_4PCM_ENV:
//			SND_startPlay_4PCM_ENV ( current->track, current->size, current->channel, current->repeat );
//			break;
//
//		case Z80_DRIVER_XGM:
//			SND_startPlay_XGM ( current->track );
//			break;
//	}
//}
//
//
//
//void musicStop ( )
//{
//   switch ( current->driver )
//   {
//      case Z80_DRIVER_4PCM_ENV:
//         SND_stopPlay_4PCM_ENV ( current->channel );
//         break;
//
//      case Z80_DRIVER_XGM:
//         SND_stopPlay_XGM ( current->track );
//         break;
//	}
//
//	current = NULL;
//}
