#ifndef _SPRITEDISPACHER_H_
#define _SPRITEDISPACHER_H_




enum
{
   SD_DOWN,
   SD_UP,
   SD_ERROR = 100
};


void sd_init   ( );
u16  sd_new    ( u8 start, u8 direction );
inline void sd_delete ( u16 i );
u16  sd_next   ( );
void sd_set    ( u8 start, u8 direction );


#endif
