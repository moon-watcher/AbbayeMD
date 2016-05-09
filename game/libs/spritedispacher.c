#include <genesis.h>
#include "spritedispacher.h"



static u8 _list [ MAX_SPRITE ];

static u8 _start;
static u8 _direction;



static u16 _find ( )
{
   s16 i;

   switch ( _direction )
   {
      case SD_DOWN:

         for ( i = _start; i < MAX_SPRITE; i++ )
         {
            if ( ! _list[i] )
            {
               _start = i;
               return i;
            }
         }

         return MAX_SPRITE-1; // SD_ERROR;


      case SD_UP:

         for ( i = _start; i >= 0; i-- )
         {
            if ( ! _list[i] )
            {
               _start = i;
               return i;
            }
         }

         return 0; // SD_ERROR;
   }

   return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////



void sd_init()
{
   u16 i;

   _start     = 0;
   _direction = SD_DOWN;

   for ( i = 0; i < MAX_SPRITE; i++ )
   {
      sd_delete ( i ) ;
   }
}


u16 sd_new ( u8 start, u8 direction )
{
   _start     = start;
   _direction = direction;

   u16 i = _find ( );

   _list [ i ] = TRUE;

   return i;
}


void sd_set ( u8 start, u8 direction )
{
   _start     = start;
   _direction = direction;
}


u16 sd_next ( )
{
   return sd_new ( _start, _direction );
}


inline void sd_delete ( u16 i )
{
   _list [ i ] = FALSE;
}

