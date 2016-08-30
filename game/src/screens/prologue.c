#include "../../inc/include.h"

static listptr lObjects = { };
static Sprite  lSprites [ 10 ] = { } ;
static u16     lSpriteCounter = 0;



static void _add_objects (  Objects *objects )
{
 	u16 i = 0;

	lSpriteCounter = 0;

	pack_vram_init ( );

	while ( 1 )
	{
		if ( !objects->array [ i ].entity->id )
		{
			break;
		}

		GameObject *go =  goManagerAdd ( &lObjects, (Object*) &objects->array [ i ] );
		Sprite     *sp = &lSprites [ lSpriteCounter++ ];

		goSetSprite ( go, sp );
		go->grabity = false;

		pack_vram_add ( go );

		++i;
	}
}




void screen_prologue ( )
{
	if ( DEV ) return;

	displayOff(0);




	palette_init();
	vram_init ( VRAM_DEFAULT );

	resetScroll();
	resetScreen();

	play_music ( MUSIC_PROLOGUE );


	Screen *screen = (Screen*) screen_get ( 1 );

	drawImage ( (Image*) screen->foreground, PLAN_A );

	if ( screen->background != NULL )
	{
		drawImage ( (Image*) screen->background, PLAN_B );
	}


	SPR_init ( 80, 500, 0 ); // SPR_init ( 1 ); // SPR_init ( 200 );
	goManagerInit ( &lObjects );
	_add_objects ( screen->objects );

	displayOn ( 10 );


	u16 count = getHz() * 10;

	listptrNode *node;
	GameObject  *go;

	while ( count-- )
	{
		node = lObjects.head;

		while ( node )
		{
			go = (GameObject *) node->pointer;

			goUpdate ( go );
			SPR_setPosition ( go->sprite, go->x, go->y );

			node = node->next;
		}

		SPR_update ( );
		VDP_waitVSync ( );

		if ( count == 20 )
		{
			SYS_disableInts();
			VDP_fadeOutAll ( 20, 0 );
			SYS_enableInts();
		}

		JoyReader_update();

		if ( joy1_pressed_abc || joy1_pressed_start )
		{
			break;
		}
	}

	displayOff(10);

	vram_destroy();

	goManagerEnd ( &lObjects );
	SPR_clear ( );
	SPR_end ( );
}

