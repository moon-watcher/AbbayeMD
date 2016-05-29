#include "../inc/include.h"



static Music *_current;



void musicInit ( )
{
	_current = NULL;
}



void musicPlay ( Music *track )
{
	//if ( track == NULL  ||  !track->track )
	if ( track == NULL  )
	{
		musicStop ( _current );
		_current = track;

		return;
	}

	if ( track->id == _current->id )
	{
		return;
	}


	musicStop ( _current );
	_current = track;

	if ( track->driver == Z80_DRIVER_XGM )
	{
		SND_startPlay_XGM ( (u8*) track->track );
	}

	if ( track->driver == Z80_DRIVER_4PCM_ENV )
	{
		SND_startPlay_4PCM_ENV ( track->track, track->size, track->channel, track->repeat );
	}
}



void musicStop ( )
{
	if ( _current == NULL )
	{
		Z80_init();
	}

	if ( _current->driver == Z80_DRIVER_4PCM_ENV )
	{
		SND_stopPlay_4PCM_ENV ( _current->channel );
	}
}





//void music_override_repeat ( u8 r )
//{
//	_repeat = r;
//}
//
//TRACK music_get_track ( u8 track )
//{
//	return tracks [ track ] ;
//}
//
//u8 music_get_nb_tracks (  )
//{
//	return NB_TRACKS;
//}
//
//s8 music_get_current ( )
//{
//	return _current;
//}
