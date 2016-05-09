#ifndef _COLLISION_H_
#define _COLLISION_H_



#define COLLISION_MAX  10



typedef struct
{
	u8 length;

	struct
	{
		u8 value;

		s16 x;
		s16 y;
		s16 width;
		s16 height;
	}
	array [ COLLISION_MAX ];
}
Collision;



#endif // _COLLISION_H_
