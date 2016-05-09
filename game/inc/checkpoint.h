#ifndef _CHECKPOINT_H_
#define _CHECKPOINT_H_



const Object *checkpoint_list [ VERSION_MAX ] [ 2 ];



typedef struct
{
	s16 pos_x;
	s16 pos_y;
	u8  room_x;
	u8  room_y;
}
Checkpoint;



void        checkpoint_init ( );
void        checkpoint_save ( GameObject *check );
void        checkpoint_draw ( GameObject *check );
Checkpoint *checkpoint_get  ( );



#endif // _CHECKPOINT_H_
