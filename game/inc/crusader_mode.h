#ifndef _CRUSADER_MODE_H_
#define _CRUSADER_MODE_H_



void cm_init             ( );
void cm_activate         ( );
void cm_start            ( );
u16  cm_can_be_activated ( );
bool cm_is_activated     ( );
void cm_setSuccess       ( bool );
bool cm_getSuccess       ( );

#endif // _CRUSADER_MODE_H_
