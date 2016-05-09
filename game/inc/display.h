#ifndef _DISPLAY_H_
#define _DISPLAY_H_


void  displayInit     ( );
void  preparePal      ( u16 pal, u16 *colors );
void  preparePalettes ( u16 *colors );
void  prepareColor    ( u16 index, u16 color );
void  displayOff      ( );
void  displayOn       ( );
u16  *getColors       ( );


#endif // _DISPLAY_H_
