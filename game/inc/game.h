#ifndef _GAME_H_
#define _GAME_H_



#define GAME_AREA_WIDTH   ( MASK_MAX_WIDTH  << 3 )
#define GAME_AREA_HEIGHT  ( MASK_MAX_HEIGHT << 3 )



enum
{
	VERSION_PC,
	VERSION_MD,
	VERSION_MSX,
	VERSION_PCW,
	VERSION_GB,
	//VERSION_NES,
	VERSION_CGA,

	VERSION_MAX
};



typedef enum
{
	GAME_STATUS_OK,
	GAME_STATUS_GONEXT,
	GAME_STATUS_RESTART,
	GAME_STATUS_GAMEOVER,
	GAME_STATUS_ENDING,
}
GameStatus;



struct
{
	u8 version;

	struct
	{
		u8 x;
		u8 y;
	}
	room;

	GameStatus status;

	u16 rnd;
	bool alt_palettes;
}
game;



void game_init             ( );
void game_set_alt_palettes ( bool value );
u8   game_room_x           ( s8 inc );
u8   game_room_y           ( s8 inc );
void game_loop_room        ( );
void game_loop             ( );



#endif
