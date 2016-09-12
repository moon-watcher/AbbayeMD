#ifndef _SWITCH_H_
#define _SWITCH_H_



#define SWITCH_MAX 5



typedef struct Switch
{
	u8      room_x;
	u8      room_y;

	Object  off;
	Object  transaction;
	Object  on;

	bool    reactivable;
	bool    (*function) ( GameObject*, struct Switch* ) ;
}
Switch;



void    switch_init      ( );
Switch *switch_find      ( u8 room_x, u8 room_y );
void    switch_touched   ( GameObject *go );

bool    switch_crosses   ( GameObject *go, Switch *sw );
bool    switch_ring_bell ( GameObject *go, Switch *sw );


#endif // _SWITCH_H_
