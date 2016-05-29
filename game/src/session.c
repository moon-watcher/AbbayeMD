#include "../inc/include.h"



void session_init ( )
{
	session.rnd         = random();
	session.level       = 0; // 0: Normal;  1: Hard
	session.palette_gb  = 0;
	session.palette_cga = 0;
}



void session_inc_alt_palette ( u8 max )
{
	if ( !max )
	{
		return;
	}

	else if ( game.version == VERSION_GB  )
	{
		++session.palette_gb;
		session.palette_gb %= max;
	}

	else if ( game.version == VERSION_CGA )
	{
		++session.palette_cga;
		session.palette_cga %= max;
	}

}
