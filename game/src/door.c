#include "../inc/include.h"


void door_init ( bool cm )
{
	if ( cm )
	{
		//
	}
	else
	{
		//
	}
}


void door_open ( u16 x, u16 y )
{
	Item *item = (Item*) itemManagerFind ( &waItems, 0, x, y );

	//setActive ( door, false );
	itemSetChecked ( item, false );
}
