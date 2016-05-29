#include "../inc/include.h"




u8 mask_get ( Mask *mask, u8 x, u8 y )
{
	return mask->array [ y ] [ x ];
}



void mask_draw ( Mask *mask )
{
   u8 y, x;

   VDP_clearPlan( BPLAN, 0 );

   for ( y=0; y<22; y++ )
   {
      for ( x=0; x<32; x++ )
      {
         u8 color = mask->array [ y ] [ x ];

         if ( color == 0 )
         {
            continue;
         }

              if ( color ==  4 ) color = 3;
         else if ( color ==  8 ) color = 4;
         else if ( color == 16 ) color = 5;
         else if ( color == 32 ) color = 6;
         else if ( color == 64 ) color = 7;

         drawUInt ( color, x, y, 0 );
         VDP_setTileMapXY ( BPLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, color ), x, y );
      }
   }

	SYS_disableInts();
   VDP_setPalette ( PAL0, palette_green );
   SYS_enableInts();
}





static s16 _counter;
static s16 _dir;
static s16 _line;


void mask_ini_priorities ( )
{
	_counter = 0;
	_dir     = SPR_getHFlip ( player.go->sprite ) ? -1 : +1;
	_line    = set_value_in ( ( goGetLeft(player.go) >> 3 ) - _dir, 0, 31 );

	mask_set_priorities ( &currentMask );
	mask_set_priorities ( &currentMask );
}


void mask_set_priorities ( Mask *mask )
{
	if ( _counter == 32 )
	{
		return;
	}

	u16 y;

   for ( y=0; y<22; y++ )
   {
		if ( currentMask.array[y][_line] & 64 )
		{
			VDP_setTilePriority ( APLAN, 1, _line, y );
		}
   }

	//drawInt(_line,0,0,5);
	//waitMs(1000);

	++_counter;
   _line += _dir;

   if ( _line == 32  &&  _dir == +1 )
   {
		_line = 0;
	}

   if ( _line == -1  &&  _dir == -1 )
   {
		_line = 31;
	}
}




//void mask_set_priorities ( Mask *mask )
//{
//   u8 y, x;
//
//   for ( y=0; y<22; y++ )
//   {
//      for ( x=0; x<32; x++ )
//      {
//         VDP_setTilePriority ( APLAN, ( mask->array[y][x] & 64 ), x, y );
//      }
//   }
//}



//void mask_get_range_horizontal ( Mask *mask, u8 x, u8 y, u8 len, u8 *values )
//{
//   while ( len-- )
//   {
//      if ( x + len < MASK_MAX_WIDTH )
//      {
//         values [ len ] = mask->array [ y ] [ x + len ];
//      }
//      else
//      {
//         values [ len ] = MAX_U8;
//      }
//
//      //drawUInt ( values [ len ], 6 + len * 4, 3, 3 );
//   }
//}
//
//
//
//void mask_get_range_vertical ( Mask *mask, u8 x, u8 y, u8 len, u8 *values )
//{
//   while ( len-- )
//   {
//      if ( y + len < MASK_MAX_HEIGHT )
//      {
//         values [ len ] = mask->array [ y + len ] [ x ];
//      }
//      else
//      {
//         values [ len ] = MAX_U8;
//      }
//
//      //drawUInt ( values [ len ], 6 + len * 4, 3, 3 );
//   }
//}
//
//
//
//void mask_get_range ( Mask *mask, u8 x, u8 y, u8 width, u8 height, u8 *values )
//{
//   u8 i, j, cnt = 0;
//
//   for ( i = 0; i < height; i++ )
//   {
//      for ( j = 0; j < width; j++ )
//      {
//         values [ cnt++ ] = mask->array [ y + i ] [ x + j ];
//      }
//   }
//}
