#ifndef _MASK_H_
#define _MASK_H_



#define MASK_MAX_WIDTH  32
#define MASK_MAX_HEIGHT 22



typedef struct
{
	u8 array [ MASK_MAX_HEIGHT ] [ MASK_MAX_WIDTH ];
}
Mask;



u8   mask_get            ( Mask *mask, u8 x, u8 y );
void mask_draw           ( Mask *mask );
void mask_ini_priorities ( );
void mask_set_priorities ( Mask *mask );

//void  mask_get_range_horizontal ( Mask *mask, u8 x, u8 y, u8 *len, u8 *values );
//void  mask_get_range_vertical   ( Mask *mask, u8 x, u8 y, u8 *len, u8 *values );
//void  mask_get_range            ( Mask *mask, u8 x, u8 y, u8 width, u8 height, u8 *values );



#endif
