


#include "../../inc/include.h"






static listptr lObjects = { };
static Sprite  lSprites [ 20 ] = { };
static u16     lSpriteCounter = 0;



void screen_burning ( )
{
//	VDP_setEnable(FALSE);
//
//	MEM_init();
////	palette_init ( );


	displayOff(0);

	vram_init ( VRAM_DEFAULT );

	resetScreen();
	resetScroll();


	Screen *s = (Screen*) screen_get(10);

	drawImage ( (Image*) s->foreground, PLAN_A );
	drawImage ( (Image*) s->background, PLAN_B );


	lSpriteCounter = 0;

	pack_vram_init ( );


	SPR_init ( 80, 500, 0 ); // SPR_init ( 1 ); // SPR_init ( 200 );
	goManagerInit ( &lObjects );

	u16 i;
	for ( i = 0; i < 9; i++ )
	{
		GameObject *go = goManagerAdd ( &lObjects, (Object*)&s->objects->array [ i ] );
		Sprite     *sp = &lSprites [ lSpriteCounter++];

		goSetSprite ( go, sp );
		go->grabity = false;

		if ( i == 2 || i == 3 )
		{
			SPR_setHFlip ( go->sprite, 1 );
		}

		pack_vram_add ( go );
	}

	if ( cm_is_activated() )
	{
		GameObject *go = goManagerAdd ( &lObjects, (Object*)&s->objects->array [ 0 ] );
		Sprite     *sp = &lSprites [ lSpriteCounter++];

		goSetXY ( go, 32, 152 );
		goSetSprite ( go, sp );
		go->grabity = false;

		pack_vram_add ( go );
	}



	//play_music( MUSIC_GAMEOVER );


	listptrNode *node;
	GameObject  *go, *jean = (GameObject*) goManagerFindByEntityId ( &lObjects, 3, 0 );


	u16 count = getHz ( ) * 11;
	const u16 hzd2 = getHz ( ) / 2;
	const u16 hzm4 = getHz ( ) * 4;


	bool shown = false;


	i=32;
	while ( game.version == VERSION_MD  &&  i-- )
	{
		VDP_setTilePriority(PLAN_A, 1, i, 21 );
	}


	while ( count-- )
	{
		SPR_setHFlip ( jean->sprite, ( ( count / hzd2 ) % 2 ) );

		node = lObjects.head;

		while ( node )
		{
			go = (GameObject *) node->pointer;

			if ( go->active )
			{
				goUpdate ( go );

				// update sprite
				SPR_setPosition ( go->sprite, go->x, go->y );
			}

			node = node->next;
		}

		if ( count == hzm4 )
		{
			play_sfx ( SFX_HIT );
			SPR_setAnim ( jean->sprite, 3 );
		}

		SPR_update ( );
		VDP_waitVSync ( );

		if ( !shown )
		{
			displayOn ( 10 );
			shown = true;
		}
	}


	displayOff ( 0 );

	vram_destroy();


	goManagerEnd ( &lObjects );
	SPR_clear ( );
	SPR_end ( );

}
