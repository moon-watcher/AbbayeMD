#include "../inc/include.h"



Screen *screen_get ( u8 id )
{
	return (Screen*) &screen_list [ game.version ] [ id ];
}






