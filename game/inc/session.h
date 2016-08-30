#ifndef _SESSION_H_
#define _SESSION_H_



struct
{
	u16 rnd;

	u8 level; // difficulty

	u8 palette_gb;
	u8 palette_cga;
}
session;



void session_init            ( );



#endif
