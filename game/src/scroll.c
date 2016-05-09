#include "../inc/include.h"



s16 scrollHorizontal = 0;
s16 scrollVertical   = 0;



void scrollSet ( s16 value )
{
	scrollVertical = value;

	VDP_setVerticalScroll ( PLAN_A, value );
	VDP_setVerticalScroll ( PLAN_B, value );
}
