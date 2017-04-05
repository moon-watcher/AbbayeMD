#include "../../inc/include.h"





static listptr lObjects = { };
static Sprite  lSprites [ 12 ] = { };
static u16     lSpriteCounter = 0;



static void _add_objects (  Objects *objects )
{
 	u16 i = 0;

	lSpriteCounter = 0;

	pack_vram_init ( );

	for ( i = 0; i < 11 ; i++ )
	{
		GameObject *go =  goManagerAdd ( &lObjects, (Object*) &objects->array [ i ] );
		Sprite     *sp = &lSprites [ lSpriteCounter++ ];

		goSetSprite ( go, sp );
		go->grabity = false;

		pack_vram_add ( go );
	}
}



static void _draw_screen()
{
	u16 pal = PAL1;

	displayOff(0);


	play_sfx ( SFX_ITEM );
	palette_init();

	resetScroll ( );
	resetScreen ( );

	VDP_setPaletteColor(0, 0x000);
	preparePal ( pal, palette_get(6)->data );
	VDP_setTextPalette ( pal );

	if ( game.version == VERSION_PCW )
	{
		prepareColor ( pal * 16 + 1, palette_get(0)->data[1] );
		prepareColor ( pal * 16 + 2, palette_get(0)->data[0] );
	}

	if ( game.version == VERSION_GB )
	{
		prepareColor ( pal * 16 + 1, palette_get(0)->data[4] );
		prepareColor ( pal * 16 + 2, palette_get(0)->data[2] );
	}

	VDP_drawText ( "Extra life",          6, 10 );
	VDP_drawText ( "Collect",             3, 13 );
	VDP_drawText ( "crosses",             5, 14 );
	VDP_drawText ( "Use it as",          21, 11 );
	VDP_drawText ( "checkpoint",         21, 12 );
	VDP_drawText ( "You are Jean",        4,  3 );
	VDP_drawText ( "Raymond",             4,  4 );
	VDP_drawText ( "???",                28,  4 );

	VDP_drawText ( "Message",            16,  7 );
	VDP_drawText ( "???",                 7, 20 );
	VDP_drawText ( "Avoid enemies",      17, 17 );
	VDP_drawText ( "and traps",          17, 18 );
	VDP_drawText ( "???",                26, 21 );
	VDP_drawText ( "???",                28, 24 );
	VDP_drawText ( "Activate mechanism",  4, 24 );
	VDP_drawText ( "to open the doors",   4, 25 );



	Screen *screen = (Screen*) screen_get ( 12 );

	SPR_init ( 80, 500, 0 ); // SPR_init ( 1 ); // SPR_init ( 200 );
	goManagerInit ( &lObjects );
	_add_objects ( screen->objects );


	SPR_update ( );


	displayOn ( 10 );
}





void screen_info ()
{
	//vram_init ( VRAM_DEFAULT );

	waitHz(5);

	_draw_screen();

	listptrNode *node;
	GameObject  *go;

	while ( 1 )
	{
		JoyReader_update();

		if ( joy1_pressed_abc | joy1_pressed_start )
		{
			break;
		}

		node = lObjects.head;

		while ( node )
		{
			go = (GameObject *) node->pointer;

			goUpdate ( go );

			node = node->next;
		}


		SPR_update ( );
		VDP_waitVSync ( );
	}

	displayOff(10);

	//vram_destroy();


	goManagerEnd ( &lObjects );
	SPR_clear ( );
	SPR_end ( );
}
