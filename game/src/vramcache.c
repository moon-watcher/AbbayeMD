#include <genesis.h>
#include "../inc/vramcache.h"



static u16 _array [ VC_MAX_OBJECTS ] [ VC_MAX_ANIMS ] = { };



void vc_init ( )
{
	memsetU16 ( (u16*)&_array, VC_ERROR, VC_MAX_OBJECTS * VC_MAX_ANIMS );
}



u16 vc_get ( u8 object, u8 anim )
{
	return _array [ object ] [ anim ];
}



void vc_add ( u8 object, u8 anim, u16 value )
{
	_array [ object ] [ anim ] = value;
}
