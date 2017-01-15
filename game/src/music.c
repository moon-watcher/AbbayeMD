#include "../inc/include.h"


static Music *current = NULL;



void musicInit ( )
{
	current = NULL;
}


void musicPlay ( Music *track )
{
	if ( track == NULL || track->track == NULL )
	{
		musicStop();
	}
	else if ( track->id != current->id )
	{
		if ( musicStop() )
		{
			VDP_waitVSync();
			VDP_waitVSync();
		}

		SND_startPlay_XGM ( (u8*) track->track );

		current = track;
	}
}


bool musicStop ( )
{
	current = NULL;

	if ( SND_isPlaying_XGM() )
	{
		SND_stopPlay_XGM();

		return true;
	}

	return false;
}


//		VDP_setTextPalette(PAL2);
//		drawText(current->title,0,0);
//		VDP_waitVSync();
//		if ( XGM_isPlaying() )
//		{
//			drawText("playing", 0,1);
//		}
//		else
//		{
//			drawText("NOT playing", 0,1);
//		}
