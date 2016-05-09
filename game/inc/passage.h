#ifndef _PASSAGE_H_
#define _PASSAGE_H_



#define PASSAGE_MAX   2



typedef struct
{
	Entity *entidad;

	struct
	{
		u8 x;
		u8 y;
	}
	room_src,
	room_dst;
}
Passage;




Passage *passage_find    ( u8 room_x, u8 room_y );
void     passage_touched ( );

#endif // _PASSAGE_H_
