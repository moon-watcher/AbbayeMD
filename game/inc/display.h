#ifndef _DISPLAY_H_
#define _DISPLAY_H_


void  displayInit   ( );
void  preparePal    ( u16 pal, u16 *colors );
void  prepareColors ( u16 *colors );
void  prepareColor  ( u16 index, u16 color );
void  displayOff    ( u16 frames );
void  displayOn     ( u16 frames );
u16  *getColors     ( );


#endif // _DISPLAY_H_
