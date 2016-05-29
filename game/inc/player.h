#ifndef _PLAYER_H_
#define _PLAYER_H_




typedef struct
{
	fix32 jump;
	u8    max_hearts;
}
PlayerData;



typedef enum
{
	PLAYER_STAY,
	PLAYER_WALKS_RIGHT,
	PLAYER_WALKS_LEFT,
	PLAYER_JUMPS,
	PLAYER_JUMPS_RIGHT,
	PLAYER_JUMPS_LEFT,
	PLAYER_BURNS,
	PLAYER_LIEDOWN,
	PLAYER_SNEAKS_RIGHT,
	PLAYER_SNEAKS_LEFT,
	PLAYER_CAPTURED,
	PLAYER_PLUNGE,
	PLAYER_MAX_ACTIONS,


	PLAYER_JUMP_PRESSED = 100,
}
PlayerAction;



typedef struct
{
	GameObject   *go;
	PlayerAction  action;
	u8            burning;
	u8            plunge;
	bool          in_passage;
	bool          grial;
	bool          invulnerable;

	struct
	{
		Object     object;
		fix32      vel_x;
		fix32      vel_y;
	}
	saved;
}
Player;



Player player;



const Object player_actions [ VERSION_MAX ] [ PLAYER_MAX_ACTIONS ];
const PlayerData player_data [ VERSION_MAX ];


void         playerUpdate    ( Player *player, PlayerAction action );
void         playerAdd       ( Player *player, listptr *list, Sprite *sprite );
void         playerSave      ( Player *player );
void         playerInit      ( Player *player );
u16          playerIsOnAir   ( Player *player );
u16          playerIsLieDown ( Player *player );
PlayerAction playerGetAction ( Player *player );
void         playerSetAction ( Player *player, PlayerAction action );
PlayerData  *playerGetData   ( );

#endif // _PLAYER_H_
