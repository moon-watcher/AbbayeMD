#ifndef _INCLUDE_H_
#define _INCLUDE_H_



typedef enum
{
   false = 0,
   true  = !false
}
bool;



#define MAX_SPRITE 80



#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

#define ABS(a) ( (a)<0 ? -(a) : (a) )

#define SWAP(x, y)   do { typeof(x) temp##x##y = x; x = y; y = temp##x##y; } while (0)

#define IMPLIES(x, y) (!(x) || (y))

#define COMPARE(x, y) (((x) > (y)) - ((x) < (y)))
#define SIGN(x) COMPARE(x, 0)

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(*a))

//#define SWAP(x, y, T) do { T tmp = (x); (x) = (y); (y) = tmp; } while(0)
//#define SORT2(a, b, T) do { if ((a) > (b)) SWAP((a), (b), T); } while (0)

#define SET(d, n, v) do{ size_t i_, n_; for (n_ = (n), i_ = 0; n_ > 0; --n_, ++i_) (d)[i_] = (v); } while(0)
#define ZERO(d, n) SET(d, n, 0)


#define BitBool(x) (!(!(x)))
#define BitSet(arg,posn) ((arg) | (1L << (posn)))
#define BitClr(arg,posn) ((arg) & ~(1L << (posn)))
#define BitTst(arg,posn) BitBool((arg) & (1L << (posn)))
#define BitFlp(arg,posn) ((arg) ^ (1L << (posn)))



#include <genesis.h>
#include <genres.h>


#include "../../libs/uniqid.h"
#include "../../libs/stdarg.h"
#include "../../libs/realloc.h"
#include "../../libs/dev.h"
#include "../../libs/list.h"
#include "../../libs/listptr.h"
#include "../../libs/psg.h"

#include "../libs/vram.h"
#include "../libs/spritedispacher.h"
#include "../libs/JoyReader.h"


#include "../inc/scroll.h"
#include "../inc/sfx.h"
#include "../inc/music.h"
#include "../inc/session.h"
#include "../inc/game.h"
#include "../inc/hud.h"
#include "../inc/palette.h"
#include "../inc/mcb.h"
#include "../inc/entity.h"
#include "../inc/mask.h"
#include "../inc/object.h"
#include "../inc/objects.h"
#include "../inc/crusader_mode.h"
#include "../inc/room.h"
#include "../inc/rooms.h"
#include "../inc/item.h"
#include "../inc/GameObject.h"
#include "../inc/switch.h"
#include "../inc/passage.h"
#include "../inc/player.h"
#include "../inc/checkpoint.h"
#include "../inc/ocb.h"
#include "../inc/hint.h"
#include "../inc/screen.h"
#include "../inc/helpers.h"
#include "../inc/enemy.h"
#include "../inc/debug.h"
#include "../inc/font.h"
#include "../inc/display.h"
#include "../inc/door.h"








const u8 versions_list       [ VERSION_MAX ] [ 15 ];
const u8 versions_upper_list [ VERSION_MAX ] [ 15 ];



Sprite   waSprites [ MAX_SPRITE ] ;
u8       wvSpriteCounter;

listptr  waObjects;
listptr  waItems;

Room    *currentRoom;
Mask     currentMask;

bool     invertedCross;

TileSet *font;

bool     inSoundTest;





enum
{
	SFX_DOOR,
	SFX_HIT,
	SFX_ITEM,
	SFX_JUMP,
	SFX_SHOT,
	SFX_SLASH,
	SFX_SWITCH,
	SFX_TREE,
	SFX_LIGHTING,
	SFX_SPIT,
	SFX_LAVABALL,
	SFX_CHAIN,
	SFX_CLOSED_DOOR,
	SFX_CHECKPOINT,

	FX_MAX
};

enum
{
	MUSIC_NULL,
	MUSIC_CHURCH,
	MUSIC_CAVES,
	MUSIC_HELL,
	MUSIC_SATAN,
	MUSIC_GAMEOVER,
	//MUSIC_START,
	MUSIC_TITLE,
	MUSIC_WOODS,
	MUSIC_PROLOGUE,
	MUSIC_HOPE,
	MUSIC_HANGMAN,

	MUSIC_MAX
};



const Sfx      *fx_list          [ VERSION_MAX ] [ FX_MAX          ];
const Music   *music_list       [ VERSION_MAX ] [ MUSIC_MAX       ];
const Hint     hint_list        [ VERSION_MAX ] [ HINT_MAX        ];
const Switch   switch_list      [ VERSION_MAX ] [ SWITCH_MAX      ];
const Passage  passage_list     [ VERSION_MAX ] [ PASSAGE_MAX     ];
const Object   crosses_list     [ VERSION_MAX ] [ 2 ];
//const TileSet *font_list        [ VERSION_MAX ] [ 1 ];
const Palette *palette_list     [ VERSION_MAX ] [ PALETTE_MAX     ];
const Palette *palette_alt_list [ VERSION_MAX ] [ PALETTE_ALT_MAX ];




//const Objects  objects_burnhim_md;
//const Objects  objects_burnhim_pc;



#endif // _INCLUDE_H_
