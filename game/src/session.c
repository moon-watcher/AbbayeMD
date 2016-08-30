#include "../inc/include.h"



void session_init ( )
{
	session.rnd         = random();
	session.level       = 0; // 0: Normal;  1: Hard
	session.palette_gb  = 0;
	session.palette_cga = 0;
}

