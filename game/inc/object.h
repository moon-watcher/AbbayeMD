#ifndef _OBJECT_H_
#define _OBJECT_H_



typedef struct
{
	Entity *entity;

	s16     x;
	s16     y;

	s8      dir_x;
	s8      dir_y;

	fix32   vel_x;
	fix32   vel_y;

	u8      flipH;
	u8      flipV;
}
Object;



Object *objectCreate           ( );
void    objectDelete           ( Object *object );

u16     objectIsItem           ( Object *object );
u16     objectIsDoor           ( Object *object );
u16     objectIsItemRemovable  ( Object *object );

s8      objectGetPaddingTop    ( Object *object );
s8      objectGetPaddingLeft   ( Object *object );
s8      objectGetPaddingRight  ( Object *object );
s8      objectGetPaddingBottom ( Object *object );

u8      objectGetWidth         ( Object *object );
u8      objectGetHeight        ( Object *object );



#endif // _ENTITY_H_
