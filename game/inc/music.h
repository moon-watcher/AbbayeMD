#ifndef _MUSIC_H_
#define _MUSIC_H_



typedef struct
{
	u8   id;
	u8  *title;
	u8  *track;
	u8   driver;
	u8   channel;
	u8   repeat;
	u32  size;
}
Music;



void musicInit ( );
void musicPlay ( Music *track );
bool musicStop ( );



#endif // _MUSIC_H_
