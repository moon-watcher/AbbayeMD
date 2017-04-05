#include "../inc/include.h"


#ifdef SGDKv122a

    #define APLAN_ADDR   aplan_addr
    #define BPLAN_ADDR   bplan_addr

    #define PLAN_VALUE   plan.value
    #define PLAN_A_VALUE PLAN_A.value
    #define PLAN_B_VALUE PLAN_B.value

#endif // SGDKv122a



#ifdef SGDKv121

    #define APLAN_ADDR   aplan_adr
    #define BPLAN_ADDR   bplan_adr

    #define PLAN_VALUE   plan.plan
    #define PLAN_A_VALUE PLAN_A.plan
    #define PLAN_B_VALUE PLAN_B.plan

#endif // SGDKv121



//void my_SPR_setFrame ( GameObject go, s16 frame)
//{
//	u16 pos = vc_get ( go->object->entity->id, frame );
//
//	if ( pos == VC_ERROR )
//	{
//		SPR_setFrame ( go->sprite, frame );
//
//		vc_add ( go->object->entity->id, frame, )
//	}
//
//
//
//    if (sprite->seqInd != frame)
//    {
//        const Animation *animation = sprite->animation;
//        const u16 frameInd = animation->sequence[frame];
//
//        sprite->seqInd = frame;
//
//        if (sprite->frameInd != frameInd)
//        {
//            sprite->frameInd = frameInd;
//
//            // set current frame
//            setFrame(sprite, animation->frames[frameInd]);
//        }
//    }
//}

//void SPR_setVFlip ( Sprite *sprite, u8 VFlip )
//{
//	SYS_disableInts();
//
//	if( VFlip )
//	{
//		sprite->attribut |= ( 1<<12 );
//	}
//	else
//	{
//		sprite->attribut &= ~( 1<<12 );
//	}
//
//	SYS_enableInts();
//}
//
//
//
//void SPR_setHFlip ( Sprite *sprite, u8 HFlip )
//{
//	SYS_disableInts();
//
//	if( HFlip )
//	{
//		sprite->attribut |= ( 1<<11 );
//	}
//	else
//	{
//		sprite->attribut &= ~( 1<<11 );
//	}
//
//	SYS_enableInts();
//}

//void SPR_setVisible ( Sprite *sprite, u16 visible )
//{
//	sprite->visibility = 0x40000000 | ( visible ? 0x3FFFFFFF : 0x00000000 );
//
//
////	if ( visible )
////	{
////		SPR_setAlwaysVisible ( sprite, 1 );
////	}
////	else
////	{
////		SPR_setNeverVisible ( sprite, 1 );
////	}
//}



void SPR_setVRAMDirect ( Sprite *sprite, u16 vrampos )
{
	sprite->attribut = ( sprite->attribut & TILE_ATTR_MASK ) | vrampos;
	sprite->status |= 0x0001; // NEED_ST_ATTR_UPDATE;
	sprite->timer = 0;
}


bool SPR_isLastFrame ( Sprite *sprite )
{
    return ( sprite->frameInd == sprite->animation->numFrame - 1 ) ? true : false;
}


u16 SPR_countFrames ( Sprite *sprite )
{
    return sprite->animation->numFrame;
}


u16 SPR_nbTiles ( Sprite *sprite )
{
    // see SPRITE_SIZE macro
    return ( sprite->frame[0].h >> 3 ) * ( sprite->frame[0].w >> 3 );
}



s16 SPR_getXPosition ( Sprite *sprite )
{
    return sprite->x - 0x80;
}



s16 SPR_getYPosition ( Sprite *sprite )
{
    return sprite->y - 0x80;
}



void SPR_setTimer ( Sprite *sprite, u16 timer )
{
    sprite->timer = timer;
}





void SPR_setValues ( Sprite *sprite, s16 visible, s16 frame, s16 timer )
{
    if ( visible != -1 ) SPR_setVisibility ( sprite, visible ? VISIBLE : HIDDEN );
    if ( frame   != -1 ) SPR_setFrame   ( sprite, frame   );
    if ( timer   != -1 ) SPR_setTimer   ( sprite, timer   );
}



u16 SPR_getNextFrame ( Sprite *sprite )
{
    const Animation *anim = sprite->animation;
    u16 seqInd = sprite->seqInd + 1;

    if (seqInd == anim->length)
        seqInd = anim->loop;

    return seqInd;
}



//u8 SPR_getWidth ( Sprite *sprite )
//{
//	return sprite->frame[0].w;
//}
//
//
//
//u8 SPR_getHeight ( Sprite *sprite )
//{
//	return sprite->frame[0].h;
//}
//
//
//
//u8 SPR_getVFlip ( Sprite *sprite )
//{
//	return ( sprite->attribut >> 12 ) & 1;
//}
//
//
//
//u8 SPR_getHFlip ( Sprite *sprite )
//{
//	return ( sprite->attribut >> 11 ) & 1;
//}



void VDP_setSpriteAttributes ( u16 index, u16 attribut )
{
//	//
//	// SGDK STYLE
//	//
////	SpriteDef *spriteDst;
////
////	if (index >= MAX_SPRITE) return;
////
////	if (index >= spriteNum) spriteNum = index + 1;
////
////	spriteDst = &vdpSpriteCache[index];
////	spriteDst->attribut = attribut;


    vdpSpriteCache[index].attribut = attribut;
}



void VDP_setSpriteVRAM ( u16 index, u16 pos )
{
//	//
//	// SGDK STYLE
//	//
////	SpriteDef *spriteDst;
////
////	if (index >= MAX_SPRITE) return;
////
////	if (index >= spriteNum) spriteNum = index + 1;
////
////	spriteDst = &vdpSpriteCache[index];
////	spriteDst->attribut = ( ( spriteDst->attribut >> 11 ) << 11 ) + pos ;


    vdpSpriteCache[index].attribut = ( ( vdpSpriteCache[index].attribut >> 11 ) << 11 ) + pos ;
}



void VDP_setSpritePiority ( u16 index, u16 high )
{
    if( high )
    {
        vdpSpriteCache[index].attribut |= ( 1 << 15 );
    }
    else
    {
        vdpSpriteCache[index].attribut &= ~( 1 << 15 );
    }
}



u16 VDP_getTile ( VDPPlan plan, u16 x, u16 y )
{
    vu32 *plctrl;
    vu16 *pwdata;


    u16 plan_dir = VDP_PLAN_A;

    if ( PLAN_VALUE == PLAN_B_VALUE )
    {
        plan_dir = VDP_PLAN_B;
    }

    u16 addr = plan_dir + ((x + (planWidth * y)) * 2);

    /* point to vdp port */
    plctrl = (u32 *) GFX_CTRL_PORT;
    pwdata = (u16 *) GFX_DATA_PORT;

    *plctrl = GFX_READ_VRAM_ADDR(addr);

    return *pwdata;
}



void VDP_setTilePriority ( VDPPlan plan, u16 value, u16 x, u16 y )
{
    u16 tile = VDP_getTile ( plan, x, y );

    if ( value )
    {
        tile |= ( 1 << 15 );
    }
    else
    {
        tile &= ~( 1 << 15 );
    }

    VDP_setTileMapXY ( plan, tile, x, y );
}



void VDP_setTileVRAM ( VDPPlan plan, u16 index, u16 x, u16 y )
{
    VDP_setTileMapXY ( plan, ( ( VDP_getTile ( plan, x, y ) >> 11 ) << 11 ) + index, x, y );
}



s16 VDP_getHorizontalScroll ( VDPPlan plan )
{
    vu16 *pw;
    vu32 *pl;
    u16 addr;

    /* Point to vdp port */
    pw = (u16 *) GFX_DATA_PORT;
    pl = (u32 *) GFX_CTRL_PORT;

    addr = VDP_HSCROLL_TABLE;
    if ( PLAN_VALUE == PLAN_B_VALUE ) addr += 2;

    *pl = GFX_READ_VRAM_ADDR(addr);

    return (s16) *pw;
}



s16 VDP_getVerticalScroll ( VDPPlan plan )
{
    vu16 *pw;
    vu32 *pl;
    u16 addr;

    /* Point to vdp port */
    pw = (u16 *) GFX_DATA_PORT;
    pl = (u32 *) GFX_CTRL_PORT;

    addr = 0;
    if ( PLAN_VALUE == PLAN_B_VALUE ) addr += 2;

    *pl = GFX_READ_VSRAM_ADDR(addr);

    return (s16) *pw;
}


void VDP_fillGenresSpriteAsImage ( VDPPlan plan, u16 basetile, u16 x, u16 y, u16 w, u16 h )
{
   u32 addr;
   u32 width;
   u16 i, j;

   switch ( PLAN_VALUE )
   {
      case CONST_PLAN_A:
         addr = APLAN_ADDR + ((x + (y << planWidthSft)) * 2);
         width = planWidth;
         break;

      case CONST_PLAN_B:
         addr = BPLAN_ADDR + ((x + (y << planWidthSft)) * 2);
         width = planWidth;
         break;

      case CONST_PLAN_WINDOW:
         addr = BPLAN_ADDR + ((x + (y << windowWidthSft)) * 2);
         width = windowWidth;
         break;

      default:
         return;
   }

   VDP_setAutoInc(2);

   /* point to vdp port */
   vu32 *plctrl = (u32 *) GFX_CTRL_PORT;
   vu16 *pwdata = (u16 *) GFX_DATA_PORT;

   for ( i = 0; i < w; i++ )
   {
      u16 tile = basetile + ( h - 1 ) * i;

      *plctrl = GFX_WRITE_VRAM_ADDR ( addr );

      j = w;
      while ( j-- )
      {
         *pwdata = tile;
         tile += w;
      }

      addr += width * 2;
   }
}





// idea de http://stackoverflow.com/questions/28931379/implementation-of-strtok-function

static u8 *_my_strtok_string;

u8 *my_strtok ( u8 *string, u8 delimitador )
{
    u8  i = 0;
    u8 *part = (u8*) MEM_alloc ( sizeof(u8) * 100 ) ;

    if ( string != NULL )
    {
        _my_strtok_string = string;
    }

    while ( _my_strtok_string )
    {
        u8 chr = *_my_strtok_string++;

        if ( chr == delimitador )
        {
            break;
        }

        else if ( chr == '\0' )
        {
            _my_strtok_string = NULL;
        }

        part [ i++ ] = chr;
    }

    return part;
}



u32 my_strtol ( u8 *cadena )
{
    u8  len = strlen ( cadena );
    u32 val = 0;
    u32 p10 = 1;

    while ( len-- )
    {
        val += ( ( cadena [ len ] - 48 ) * p10 ) ;
        p10 *= 10;
    }

    return val;
}


// copied from uintToStr_()
void my_strpad ( u8 *str, const u8 size, u8 type )
{
    if ( type == 0 )  // Left padding
    {
        u8 i = 0;
        s8 len = strlen(str);
        u8 string[size];
        u8 diff = size - len;

        for ( i=0; i<size; i++ )
        {
            string[i] = ' ';
        }

        string[i] = '\0';

        for ( i=diff; i<size; i++ )
        {
            string[i] = str[i-diff];
        }

        string[size+1] = '\0';
        strcpy ( str, string );
    }
}


//
// Returns 1 if both strings are equal. Else 0
//
u16 my_strcmp ( u8 *str1, u8 *str2 )
{
    u8 *s1 = str1;
    u8 *s2 = str2;

    u32 l1 = strlen ( s1 );
    u32 l2 = strlen ( s2 );

    if ( !l1 || l1 != l2 )
    {
        return 0;
    }

    while ( l1-- )
    {
        if ( *s1++ != *s2++ )
        {
            return 0;
        }
    }

    return 1;
}





void drawText ( const char *str, u16 x, u16 y )
{
    SYS_disableInts();
    VDP_drawText ( str, x, y );
    SYS_enableInts();
}


void drawInt ( u32 nb, u8 x, u8 y, u8 zeros )
{
    u8 str [ zeros+1 ];
    intToStr ( nb, str, zeros );

    SYS_disableInts();
    VDP_drawText ( str, x, y );
    SYS_enableInts();
}


void drawUInt ( u32 nb, u8 x, u8 y, u8 zeros )
{
    u8 str [ zeros+1 ];
    uintToStr ( nb, str, zeros );

    SYS_disableInts();
    VDP_drawText ( str, x, y );
    SYS_enableInts();
}


void drawFix32 ( fix32 nb, u8 x, u8 y, u8 zeros )
{
    u8 str [ zeros+1 ];
    fix32ToStr ( nb, str, zeros );

    SYS_disableInts();
    VDP_drawText ( str, x, y );
    SYS_enableInts();
}


void drawUIntBG ( u32 nb, u8 x, u8 y, u8 zeros, VDPPlan plan, u16 flags )
{
    u8 str [ zeros+1 ];
    uintToStr ( nb, str, zeros );

    SYS_disableInts();
    VDP_drawTextBG ( PLAN_B, str, x, y );
    SYS_enableInts();
}


u16 drawImage ( Image *image, VDPPlan plan )
{
    if ( image == NULL )
    {
        return 0;
    }

    s16 x = ( screenWidth  >> 4 ) - ( image->map->w >> 1 );
    s16 y = ( screenHeight >> 4 ) - ( image->map->h >> 1 );

    return drawImageXY ( image, plan, x, y );
}


u16 drawImageXY ( Image *image, VDPPlan plan, u16 x, u16 y )
{
    if ( image == NULL )
    {
        return 0;
    }

    u16 pos = vram_new ( image->tileset->numTile );
    u16 pal = ( PLAN_VALUE == PLAN_A_VALUE ) ? PAL1 : PAL0;

    SYS_disableInts();
    VDP_drawImageEx ( plan, image, TILE_ATTR_FULL ( pal, 0, 0, 0, pos ), x, y, 0, 0 );
    SYS_enableInts();

    preparePal ( pal, image->palette->data );

    return pos;
}


void drawMem ( u8 x, u8 y )
{
    drawUInt ( MEM_getFree ( ), x, y, 5 );
}






u32 ntsc2pal ( u32 value )
{
    if ( IS_PALSYSTEM )
    {
        value = fix32ToRoundedInt ( fix32Mul ( intToFix32(value), FIX32(0.8333) ) ); // FIX32(0.8); ---> 50 Hz / 60 Hz
    }

    return value;
}


u8 getHz ( )
{
    return IS_PALSYSTEM ? 50 : 60;
}

void waitHz ( u16 hzs )
{
    while ( hzs-- )
    {
        VDP_waitVSync();
    }
}

void waitSc ( u16 sc )
{
    sc *= getHz();

    while ( sc-- )
    {
        VDP_waitVSync();
    }
}

void waitJoy ( )
{
    JoyReader_update();

    while ( 1 )
    {
        VDP_waitVSync();

        JoyReader_update();

        if ( joy1_pressed_abc || joy1_pressed_start )
        {
            return ;
        }
    }
}

void waitJoySc ( u16 sc )
{
    JoyReader_update();

    sc *= getHz();

    while ( sc-- )
    {
        VDP_waitVSync();

        JoyReader_update();

        if ( joy1_pressed_abc || joy1_pressed_start )
        {
            return ;
        }
    }
}




u16 between ( s32 min, s32 nb, s32 max )
{
    return ( min <= nb && nb <= max );
}




void resetPalettes ( )
{
    u16 blacks [ 64 ] = { [0 ... 63] = 0x0000 };

    SYS_disableInts();
    VDP_setPaletteColors ( 0, (u16*) blacks, 64 );
    SYS_enableInts();
}



void resetVRAM ( )
{
    VDP_doVRamDMAFill ( 0, 0xFFFF, 1 ); // reset video memory
    VDP_waitDMACompletion();            // wait for DMA completion
}



void resetScreen ( )
{
    VDP_clearPlan ( PLAN_A, 1 );
    VDP_clearPlan ( PLAN_B, 1 );
}



void resetScroll ( )
{
    VDP_setScrollingMode ( HSCROLL_PLANE, VSCROLL_PLANE );

    VDP_setHorizontalScroll ( PLAN_A, 0 );
    VDP_setVerticalScroll   ( PLAN_A, 0 );
    VDP_setHorizontalScroll ( PLAN_B, 0 );
    VDP_setVerticalScroll   ( PLAN_B, 0 );
}



void resetSprites ( )
{
    u8 i = MAX_SPRITE;

    while ( i-- )
    {
        vdpSpriteCache [ i ] = (VDPSprite) { };
    }

    VDP_resetSprites();
    VDP_updateSprites ( 80, 1 );
}



void fadeIn ( u16 pal0[16], u16 pal1[16], u16 pal2[16], u16 pal3[16], u16 numframe, u8 async )
{
    u16 colores [ 64 ];

    memcpyU16 ( &colores[0],  pal0, 16 );
    memcpyU16 ( &colores[16], pal1, 16 );
    memcpyU16 ( &colores[32], pal2, 16 );
    memcpyU16 ( &colores[48], pal3, 16 );

    VDP_fadeInAll ( (u16 *) colores, numframe, async ) ;
}



u16 in_array ( u16 needle, u16 array[] )
{
    while ( *array && *array != needle ) ++array;

    return *array;
}





void play_sfx ( u8 fx )
{
    sfxPlay ( (Sfx*) sfx_list [ game.version ] [ fx ] );
}


void play_sfx_pause ( u8 fx, u16 hz )
{
    musicPause();

    play_sfx ( fx );
    waitHz ( hz );

	musicResume();
}


void play_music ( u8 track )
{
    musicPlay ( (Music*) music_list [ game.version ] [ track ] );
}





s16 set_value_in ( s16 value, s16 min, s16 max )
{
    if ( value < min )
    {
        value = min;
    }

    else if ( value > max )
    {
        value = max;
    }

    return value;
}



//u16 find_values ( u16 needle, u16 value, ... )
//{
//   va_list ap;
//   va_start ( ap, value );
//
//	while ( value  &&  value != needle )
//	{
//		value = va_arg ( ap, int );
//   }
//
//   va_end ( ap );
//
//   return value;
//}


//u16 collide ( s16 x1, )
//
//	s16 top    = MAX ( goGetTop    ( go ), goGetTop    ( player->go ) + dir_y );
//	s16 bottom = MIN ( goGetBottom ( go ), goGetBottom ( player->go ) + dir_y );
//
//	if ( top >= bottom )
//	{
//		return;
//	}
//
//
//	s16 left  = MAX ( goGetLeft  ( go ), goGetLeft  ( player->go ) );
//	s16 right = MIN ( goGetRight ( go ), goGetRight ( player->go ) );
//
//	if ( left >= right )
//	{
//		return;
//	}




void setDoor ( GameObject *door, bool value )
{
    s16 x = ( door->x + scrollHorizontal ) >> 3;
    s16 y = ( door->y + scrollVertical   ) >> 3;

    u16 j, width  = goGetWidth  ( door ) >> 3;
    u16 i, height = goGetHeight ( door ) >> 3;

    for ( i=0; i<height; i++ )
    {
        for ( j=0; j<width; j++ )
        {
            u8 *current = &currentMask.array [ y+i ] [ x+j ];

            if ( !current )
            {
                current = (u8*) ( value ? 1 : 0 );
            }
        }
    }
}


void hide_door ( GameObject *door )
{
    itemSetVisible ( door->item, false );

    setDoor ( door, 0 );
    setActive ( door, 0 );

    musicPause();
    waitHz(20);

    SPR_update ( );

    play_sfx_pause ( SFX_DOOR, 35 );
}





void invert_cross ( GameObject *cross )
{
    if ( !cross->active )
    {
        return;
    }

    u16 type = ( goGetEntityType ( cross ) == ENTITY_CROSS ) ? 1 : 0;

    goSetObject ( cross, (Object*) &crosses_list [ game.version ] [ type ] );
}



void setActive ( GameObject *go, u8 active )
{
    if ( go == NULL )
    {
        return;
    }

    if ( go->sprite != NULL )
    {
        //SPR_setVisible ( go->sprite, active );
        SPR_setVisibility ( go->sprite, active ? VISIBLE : HIDDEN );
    }

    goSetActive ( go, active );
}






u16 apply_alt_palettes ( )
{
    s8 pal = -1;

    if ( game.version == VERSION_GB  ) pal = session.palette_gb;
    if ( game.version == VERSION_CGA ) pal = session.palette_cga;

    if ( pal != -1 )
    {
        preparePal ( PAL0, palette_alt_list [ game.version ] [ (u16) pal ]->data );
        preparePal ( PAL1, palette_alt_list [ game.version ] [ (u16) pal ]->data );
        preparePal ( PAL2, palette_alt_list [ game.version ] [ (u16) pal ]->data );
        preparePal ( PAL3, palette_alt_list [ game.version ] [ (u16) pal ]->data );

        prepareColor ( 0, palette_alt_list [ game.version ] [ (u16) pal ]->data [ 1 ] );

        return 1;
    }

    return 0;
}



void apply_alt_palettes_joy ( )
{
    u8 count = 0;

    if ( joy1_pressed_mode  &&  ( count = palette_alt_palettes ( ) ) )
    {
        if ( game.version == VERSION_GB  )
        {
            ++session.palette_gb;
            session.palette_gb %= count;
        }

        if ( game.version == VERSION_CGA )
        {
            ++session.palette_cga;
            session.palette_cga %= count;
        }

        if ( apply_alt_palettes ( ) )
        {
            displayOn ( 0 );
        }
    }

}










static u16 pack_vram_vpos [ 100 ];


void pack_vram_init ( )
{
    memsetU16 ( (u16*) &pack_vram_vpos, 0, 100 );
}


void pack_vram_add ( GameObject *go )
{
    #define PACKED_OBJECTS   11, 12, 13, 14, 15, 16, 17, 18, 19, \
	                         21, 23, 24, 25, 28, 29, \
	                         30, 32, 33, 37, 38, \
	                         41, \
	                         50, 53, 55, \
	                         61, \
	                         81, 82, 86, 87, 88, 89, \
	                         90, 94, 96, 97


    if ( in_array ( go->object->entity->id, (u16[]) { PACKED_OBJECTS, 0 } ) )
    {
        u16 *pos = &pack_vram_vpos [ go->object->entity->id ];

        if ( !*pos )
        {
            *pos = go->vram;
        }
        else
        {
            vram_delete ( go->vram );

            go->sprite->attribut = ( go->sprite->attribut & TILE_ATTR_MASK ) | *pos;
            go->vram             = *pos;
        }
    }
}




void swap_tiles ( Vect2D_u16 exception[], u8 count, u16 x1, u16 y1, u16 x2, u16 y2 )
{
    u8 i    = 0;
    bool swap = true;

    for ( i = 0; i < count; i++ )
    {
        Vect2D_u16 *ex = (Vect2D_u16*) &exception[i];

        if
        (
            ( x1 == ex->x  &&  y1 == ex->y ) ||
            ( x2 == ex->x  &&  y2 == ex->y ) ||
            ( x1 == x2     &&  y1 == y2    )
        )
        {
            swap = false;
            break;
        }
    }

    if ( swap )
    {
        u16 tile1 = VDP_getTile ( PLAN_A, x1, y1 );
        u16 tile2 = VDP_getTile ( PLAN_A, x2, y2 );

        VDP_setTileMapXY ( PLAN_A, tile2, x1, y1 );
        VDP_setTileMapXY ( PLAN_A, tile1, x2, y2 );
    }
}


void alternate_color_in_cm ( )
{
    if ( !game.crusader )
    {
        return;
    }

    const struct
    {
        u16 pos1, color1;
        u16 pos2, color2;
    }
    variations [ 2 ] =
    {
        { 5, 0x024, 6, 0x048 },
        { 5, 0x202, 6, 0x404 },
    };

    u8 i = session.rnd % 2;

    prepareColor ( variations[i].pos1, variations[i].color1 );
    prepareColor ( variations[i].pos2, variations[i].color2 );
}


// http://totaki.com/poesiabinaria/2010/12/separar-palabras-de-una-cadena-de-caracteres-en-un-array-c/
//u16 explode ( u8 *delim, u8 *orig, u8 *args[] )
//{
//   u8 *tmp;
//   u16 num = 0;
//
//   u8 *str = MEM_alloc ( strlen(orig)+1 );
//   strcpy ( str, orig );
//
//   tmp = (u8*) strtok ( str, delim );
//   do
//   {
//      args [ num++ ] = tmp;
//      tmp = (u8*) strtok ( NULL, delim );
//   }
//   while ( tmp );
//
//   return num;
//}


void prepare_doors ()
{
    // open church's door
    if ( !game.crusader  &&  game.room.x == 0  &&  game.room.y == 1 )
    {
        Item *item = (Item*) itemManagerFind ( &waItems, 0, 2, 1 );
        itemSetChecked ( item, false );
    }
}


void mute ( )
{
    // for XGM driver

    sfxStop ( SOUND_PCM_CH1 );
    sfxStop ( SOUND_PCM_CH2 );
    sfxStop ( SOUND_PCM_CH3 );
    sfxStop ( SOUND_PCM_CH4 );


    // hay que parar también los sfx

    musicStop();
}




void player_freeze_at_44 ( )
{
	if ( game.room.x == 4  && game.room.y == 4 && room_44_get_sequence() > 5 )
	{
		SPR_setPosition ( player.go->sprite, player.go->sprite->x, 128 );

		player.go->vel_x = 0;
		player.go->vel_y = 0;

		goSetY(player.go,120);
		SPR_update();
	}
}
