#ifndef _FX_H_
#define _FX_H_



typedef struct
{
	u8   id;
	u8  *title;
	u8  *sample;
	u8   driver;
	u8   channel;
	u8   repeat;
	u32  size;
	u8   priority;
}
Fx;



void fxInit ( );
void fxPlay ( Fx *fx );
void fxStop ( u16 channel );



#endif // _FX_H_




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
