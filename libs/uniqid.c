//#include <genesis.h>
#include "uniqid.h"



static unsigned int _counter = 0;



void uniqid_init ( )
{
	_counter = 0;
}


unsigned int uniqid ( )
{
	return ++_counter;
}
