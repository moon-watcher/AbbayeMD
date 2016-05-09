#ifndef _MCB_H_
#define _MCB_H_



#define MCB_MAX  10



typedef struct
{
	u8 length;
	u8 values [ MCB_MAX ];

	u8 x;
	u8 y;
}
Mcb;



typedef void (*McbPtrFn) ( void *data );

void mcb_null      ( void *data );
void mcb_player    ( void *data );
void mcb_udlr      ( void *data );
void mcb_crusader  ( void *data );
void mcb_udlr      ( void *data );
void mcb_coco      ( void *data );
void mcb_bullet    ( void *data );
void mcb_fireball  ( void *data );
void mcb_scythe    ( void *data );
void mcb_drop      ( void *data );
void mcb_ud_flipH  ( void *data );

#endif // _MCB_H_
