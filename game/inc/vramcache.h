#ifndef _VRAMCACHE_H_
#define _VRAMCACHE_H_



#define VC_ERROR       0
#define VC_MAX_ANIMS   8
#define VC_MAX_OBJECTS 70



void vc_init ( );
u16  vc_get  ( u8 item, u8 amin );
void vc_add  ( u8 item, u8 amin, u16 value );



#endif // _VRAMCACHE_H_
