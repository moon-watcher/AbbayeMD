#ifndef _SFX_H_
#define _SFX_H_



typedef struct
{
	u8   id;
	u8  *title;
	u8  *data;
	u8   channel; // XGM
	u32  length;
	u8   priority;

	u8   driver;

	// Z80_DRIVER_NULL and Shiru's PSG
	u8   sample;

	// Z80_DRIVER_PCM
	u8 rate;
	u8 pan;
	u8 loop;
}
Sfx;


void sfxInit ( );
void sfxPlay ( Sfx *sfx );
void sfxStop ( s8 channel );
void sfxMute ( );



#endif // _SFX_H_




//#include "../res/original_snd_door.h"
//#include "../res/original_snd_hit.h"
//#include "../res/original_snd_item.h"
//#include "../res/original_snd_jump.h"
//#include "../res/original_snd_shoot.h"
//#include "../res/original_snd_slash.h"
//#include "../res/original_snd_switch.h"
//
//
//
//
//#define FX struct _fx
//
//#define NB_FXS 7
//
//
//FX
//{
//	u8 *title;
//	u8 channel;
//	u8 *fx;
//	u32 size;
//};
//
//
//
//void fx_stop       ( );
//void fx_play       ( u8 theme );
//FX   fx_get_fx     ( u8 fx );
//u8   fx_get_nb_fxs ( );
//
//
