#ifndef _DEBUG_H_
#define _DEBUG_H_


bool debug_show_nb_room;
u16  debug_fps;
u32  debug_z80load;
u16  debug_nbObjects;


void debug_info  ( );
void showFps     ( );
void showZ80Load ( );


#endif // _DEBUG_H_
