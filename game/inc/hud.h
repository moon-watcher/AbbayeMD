#ifndef _HUD_H_
#define _HUD_H_



const struct genresTiles *hud_objects [ VERSION_MAX ] [ 4 ];



void hudInit       ( );
void hudResetVram  ( );
void hudDrawText   ( );
void hudIncCrosses ( s8 inc );
void hudIncHearts  ( s8 inc );
u8   hudGetHearts  ( );
u8   hudGetCrosses ( );
void hudSetHearts  ( u16 x );


#endif // _HUD_H_
