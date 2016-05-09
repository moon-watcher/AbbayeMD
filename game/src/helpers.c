#include "../inc/include.h"




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

void SPR_setVFlip ( Sprite *sprite, u8 VFlip )
{
	SYS_disableInts();

	if( VFlip )
	{
		sprite->attribut |= ( 1<<12 );
	}
	else
	{
		sprite->attribut &= ~( 1<<12 );
	}

	SYS_enableInts();
}



void SPR_setHFlip ( Sprite *sprite, u8 HFlip )
{
	SYS_disableInts();

	if( HFlip )
	{
		sprite->attribut |= ( 1<<11 );
	}
	else
	{
		sprite->attribut &= ~( 1<<11 );
	}

	SYS_enableInts();
}



u16 SPR_nbTiles ( Sprite *sprite )
{
	// see SPRITE_SIZE macro
//	return sprite->frame[0].h / 8 * sprite->frame[0].w / 8;
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



void SPR_setVisible ( Sprite *sprite, u16 visible )
{
	sprite->visibility = 0x40000000 | ( visible ? 0x3FFFFFFF : 0x00000000 );


//	if ( visible )
//	{
//		SPR_setAlwaysVisible ( sprite, 1 );
//	}
//	else
//	{
//		SPR_setNeverVisible ( sprite, 1 );
//	}
}



void SPR_setAll ( Sprite *sprite, s16 visible, s16 frame, s16 timer )
{
	if ( visible != -1 ) SPR_setVisible ( sprite, visible );
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



void VDP_setSpriteAttributes ( u16 index, u16 tile_attr )
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
////	spriteDst->tile_attr = tile_attr;


	vdpSpriteCache[index].tile_attr = tile_attr;
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
////	spriteDst->tile_attr = ( ( spriteDst->tile_attr >> 11 ) << 11 ) + pos ;


	vdpSpriteCache[index].tile_attr = ( ( vdpSpriteCache[index].tile_attr >> 11 ) << 11 ) + pos ;
}



void VDP_setSpritePiority ( u16 index, u16 high )
{
	if( high )
	{
		vdpSpriteCache[index].tile_attr |= ( 1 << 15 );
	}
	else
	{
		vdpSpriteCache[index].tile_attr &= ~( 1 << 15 );
	}
}



u16 VDP_getTile ( u16 plan, u16 x, u16 y )
{
	vu32 *plctrl;
	vu16 *pwdata;

	const u32 addr = plan + ((x + (VDP_getPlanWidth() * y)) * 2);

	/* point to vdp port */
	plctrl = (u32 *) GFX_CTRL_PORT;
	pwdata = (u16 *) GFX_DATA_PORT;

	*plctrl = GFX_READ_VRAM_ADDR(addr);

	return *pwdata;
}



void VDP_setTilePriority ( u16 plan, u16 value, u16 x, u16 y )
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

	SYS_disableInts();

	VDP_setTileMapXY ( plan, tile, x, y );

	SYS_enableInts();
}



void  VDP_setTileVRAM ( u16 plan, u16 index, u16 x, u16 y )
{
	SYS_disableInts();

	VDP_setTileMapXY ( plan, ( ( VDP_getTile ( plan, x, y ) >> 11 ) << 11 ) + index, x, y );

	SYS_enableInts();
}



s16 VDP_getHorizontalScroll ( VDPPlan plan )
{
	vu16 *pw;
	vu32 *pl;
	u16 addr;

	/* Point to vdp port */
	pw = (u16 *) GFX_DATA_PORT;
	pl = (u32 *) GFX_CTRL_PORT;

	addr = HSCRL;
	if (plan.v == PLAN_B.v) addr += 2;

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
	if (plan.v == PLAN_B.v) addr += 2;

	*pl = GFX_READ_VSRAM_ADDR(addr);

	return (s16) *pw;
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


void drawUIntBG ( u32 nb, u8 x, u8 y, u8 zeros, u16 plan, u16 flags )
{
	u8 str [ zeros+1 ];
	uintToStr ( nb, str, zeros );

	SYS_disableInts();
	VDP_drawTextBG ( BPLAN, str, flags, x, y );
	SYS_enableInts();
}


u16 drawImage ( Image *image, u16 plan )
{
	if ( image == NULL )
	{
		return 0;
	}

	s16 x   = VDP_getScreenWidth  ( ) / 8 / 2 - image->map->w / 2;
	s16 y   = VDP_getScreenHeight ( ) / 8 / 2 - image->map->h / 2;
	u16 pos = vram_new ( image->tileset->numTile );
	u16 pal = ( plan == APLAN ) ? PAL1 : PAL0;

	//VDP_waitVSync();

	SYS_disableInts();

	VDP_drawImageEx ( plan, image, TILE_ATTR_FULL ( pal, 0, 0, 0, pos ), x, y, 0, 1 ); VDP_waitDMACompletion();
	//VDP_drawImageEx ( plan, image, TILE_ATTR_FULL ( pal, 0, 0, 0, pos ), x, y, 0, 0 );

	SYS_enableInts();

	preparePal ( pal, image->palette->data );

	return pos;
}



u16 drawImageXY ( Image *image, u16 plan, u16 x, u16 y )
{
	if ( image == NULL )
	{
		return 0;
	}

	u16 pos = vram_new ( image->tileset->numTile );
	u16 pal = ( plan == APLAN ) ? PAL1 : PAL0;

	//VDP_waitVSync();

	SYS_disableInts();

	VDP_drawImageEx ( plan, image, TILE_ATTR_FULL ( pal, 0, 0, 0, pos ), x, y, 0, 1 ); VDP_waitDMACompletion();
	//VDP_drawImageEx ( plan, image, TILE_ATTR_FULL ( pal, 0, 0, 0, pos ), x, y, 0, 0 );

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



u16 between ( s32 min, s32 nb, s32 max )
{
	return ( min <= nb && nb <= max );
}



void resetPalettes ( )
{
	const u16 colores [ 64 ] = { };

	SYS_disableInts();

	VDP_setPaletteColors ( 0, (u16*)colores, 64 );

	SYS_enableInts();
}



void resetVRAM ( )
{
	VDP_doVRamDMAFill ( 0, 0xFFFF, 1 ); // reset video memory
	VDP_waitDMACompletion();            // wait for DMA completion
}



void resetScreen ( )
{
	VDP_clearPlan ( APLAN, 1 ); VDP_waitDMACompletion ( );
	VDP_clearPlan ( BPLAN, 1 ); VDP_waitDMACompletion ( );
}



void resetScroll ( )
{
	SYS_disableInts();

	VDP_setScrollingMode ( HSCROLL_PLANE, VSCROLL_PLANE );

	VDP_setHorizontalScroll ( PLAN_A, 0 );
	VDP_setVerticalScroll   ( PLAN_A, 0 );
	VDP_setHorizontalScroll ( PLAN_B, 0 );
	VDP_setVerticalScroll   ( PLAN_B, 0 );

	SYS_enableInts();
}



void resetSprites ( )
{
	u8 i;

	for ( i=0; i<MAX_SPRITE; i++ )
	{
		vdpSpriteCache [ i ] = (SpriteDef) { };
	}

	VDP_resetSprites();
	VDP_updateSprites();
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





void play_fx ( u8 fx )
{
	fxPlay ( (Fx*) fx_list [ game.version ] [ fx ] );
}



void play_music ( u8 track )
{
	musicPlay ( (Music*) music_list [ game.version ] [ track ] );
}



u16 goIsItem ( GameObject *go )
{
	return in_array ( go->object->entity->type, (u16[]) { ITEM_LIST, 0 } );
}



u16 goGetEntityType ( GameObject *go )
{
	return go->object->entity->type;
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
	itemSetHidden ( door->item );

	setDoor ( door, 0 );
	setActive ( door, 0 );

	SPR_update ( (Sprite*) &waSprites, wvSpriteCounter );

	play_fx ( FX_DOOR );
	waitHz ( getHz() );
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
		SPR_setVisible ( go->sprite, active );

//		if ( active )
//		{
//			SPR_setAlwaysVisible ( go->sprite, 1 );
//		}
//		else
//		{
//			SPR_setNeverVisible ( go->sprite, 1 );
//		}
	}

	goSetActive ( go, active );
}



void show_screen ( )
{
	VDP_fadeAllTo ( getColors(), getHz()/10, 0 );
}








static u16 pack_vram_vpos [ 100 ];


void pack_vram_init ( )
{
	memsetU16 ( (u16*) &pack_vram_vpos, 0, 100 );
}


void pack_vram_add ( GameObject *go )
{
	#define PACKED_OBJECTS   11, 12, 13, 14, 15, 16, 17, 18, 19, 21, 23, 24, 25, 28, 29, 32, 33, 34, 37, 38, 41, 50, 53, 55, 58, 61, 81

	if ( in_array ( go->object->entity->id, (u16[]) {PACKED_OBJECTS, 0 } ) )
	{
		u16 *pos = &pack_vram_vpos [ go->object->entity->id ];

		if ( !*pos )
		{
			*pos = go->vram;
		}
		else
		{
			vram_delete ( go->vram );

			//SYS_disableInts();
			go->sprite->fixedIndex = *pos;
			go->vram               = *pos;
			//SYS_enableInts();
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
		u16 tile1 = VDP_getTile ( APLAN, x1, y1 );
		u16 tile2 = VDP_getTile ( APLAN, x2, y2 );

		VDP_setTileMapXY ( APLAN, tile2, x1, y1 );
		VDP_setTileMapXY ( APLAN, tile1, x2, y2 );
	}
}
