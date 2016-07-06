#ifndef _PALETTE_H_
#define _PALETTE_H_



#define PALETTE_MAX       7
#define PALETTE_ALT_MAX  10



//const Palette *palette_list [ VERSION_MAX ][ 4 ];



void     palette_init          ( );
Palette *palette_get           ( u8 id );
u8       palette_alt_palettes  ( );



#endif // _PALETTE_H_
