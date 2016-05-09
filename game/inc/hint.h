#ifndef _HINT_H_
#define _HINT_H_



#define HINT_MAX 9



typedef struct
{
	Image *image;
	u8     room_x;
	u8     room_y;
}
Hint;



void hint_show ( bool pause );



#endif // _HINT_H_
