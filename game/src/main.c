/***
 *    - Feel free to do anything you want* with this code, consider it as PUBLIC DOMAIN -
 *               ... but be careful, this code is dark and full of terrors.
 *
 *                (*) NOT ALLOW TO USE THIS CODE FOR COMMERCIAL PURPOSES
 *
 *
 *                   +
 *                  m       +++++++++
 *                   ++++++++m+++++++m+
 *                ++++    ++mmmmmmmmmmmm
 *             ++m+     +mm+++++++++++mmm+
 *              m+ +m++mm+       ++    +mmm            ++++          ++++
 *             m  m+  +m   +m++mmm      +mmm         ++++ mm       ++++ mm
 *             m  m   m   mm+ +mm        mmm+  +++ +m++  mm ++++ +m++  mm +
 *    +   +    +m +++ m ++m+ +mmm        mmmm    m+mm+     +   m+mm+     +
 *     m+m      +m++   m ++  mmmm        mmmm+   mmmm          mmmm
 *      mm mm      +++++m    mmmm        mmmm m  mmm++mm++     mmm++mm++       +mmmm+++   +m +mmmmm++      +m+
 *      mm +        +++++++++mmmm        mmmm++  mmm+m+mmmm    mmm+m+mmmm    ++    +m+  +mmmm+    ++     +mmmmm+
 *      mm        ++   ++m++ mmmmmmmm++  mmmm+   mmm+   +mmm   mmm+   +mmm  ++     ++    mmm     ++     m   +mmm
 *      mm ++     m   +    +mmmmm  +mmmm+mmmm    mmm ++++mmm   mmm ++++mmm  m  ++  m     mmm ++ +m     m   ++ mm
 *      mm+++m     mmm+   m  mmmm +      mmmm    mmmm    mmm   mmmm    mmm mm m   mm     mmmm   mm    mm  m  ++
 *      +        m+  +mm+ +  mmmm m      mmmm    mmm     mm+   mmm     mm+ mm+m   mm++   mmmm   mmm+  mm+ m +
 *              m  ++   mmm  mmm mmm     mmmm    mmm    mm+    mmm    mm+  mmm++++mmm+   mmm++  mmm+  +mm+ ++  +
 *              m  m+++++  ++++   m      mmmm    +mmm++m+      +mmm++m+     mmmm+++mmm++ mmmm+m+ mmm   +mmmm++m
 *              ++  +mmmmmm++++++++m+    mmmm+    +mmm+         +mmm+        ++m+  +mm+   +mmm    mmm    ++mmm
 *               +++  +++mmmm+      +m+ +mmmmm           +m+m                                      mmm
 *                  +++++mm++mm+++++++mmmmmmm           mm  ++                               +++++  mm
 *               ++    ++++  mm     m  +m+mmmm          mm+      +     +  +             +    +   m  m+
 *               ++++++   m +++ m+  m   +m +            +mm+   +m+m+ +mm++               +m+     m ++
 *                         m   +   +++++ +            ++ + ++ mm  +m mm ++                 ++m+++++
 *                          +++++++++                 m+m   m mm+m+   +++mm       +m+
 *                               m+                   mmm+ m  mm+  + ++mmm+  ++ +mm
 *                                                     +mmm    +mm+ m++m+      mmm
 *                                                       +                     mmm
 *                                    +    ++   +++  +                +   +   +mmm+++      +   +
 *                                  +mm+++mmm+++++mmm    ++ +mm+    +mm  mmm+  mmm      ++mmmm+
 *                                 +mmm+   mmm   +mm   +m+ +++mmm+ +mmm++ +mm  mmm    +m+++++
 *                                  mmm   +mmm ++mm   +mmmmmmmmmmm+ mmm+  ++   mmm   mmm+
 *                                  mmm ++ mmmm  mm   m+ +mmmmm+ +m mmm+ m     mmm   mmmm++mmmmm+
 *                                  mmm++  mmm   mm+  m+  +m+m+  +m mmm   +    mmm    ++mm++ +mmm
 *                                  mmmm   mmm   mmm   +mmm + mmm+  mmm        mmm        +++ mm+
 *                                  mmmm+  mmm+  +mmm +  mmmmmmm    mmm        mmm     +++++m m+
 *                                  mmm+   mm+    mmmm    + + +     mm++       mm++  +++++mmm+
 *                                  ++     +       ++               +          +           +
 *
 *
 * Original game by Locomalito & Gryzor87, released for PC, CHECK OUT THIS! [http://locomalito.com/]
 *
 * @CODE:                     =>  Mun                           | Twitter: @MoonWatcherMD
 * @PROJECT:                  =>  #AbbayeMD
 * @START-DATE:               =>  xx-xx-2011
 * @LAST-UPDATE:              =>  xx-xx-2016
 * @LIB:                      =>  SGDK (v1.11) by Stephane Dallongeville
 *
 *
 *
 * --------------------------------------------------------------------------------------------------------------------------------
 *  SPECIAL THANKS TO
 * --------------------------------------------------------------------------------------------------------------------------------
 * @GODFATHER-OF-THIS-RELEASE => Leander                        | Twitter: @leanderpixel      | Mail:
 * @MSX-SKIN                  => Gerardo Herce                  | Twitter: @pipagerardo       | Mail:
 * @GB-SKIN                   => Felipe Monge Corbalán          | Twitter: @vakapp            | Mail:
 * @PCW-SKIN                  => Felipe Monge Corbalán          | Twitter: @vakapp            | Mail:
 * @CGA-SKIN                  => Felipe Monge Corbalán          | Twitter: @vakapp            | Mail:
 * @MD-SKIN                   => Dani Nevado                    | Twitter: @DanySnowyman      | Mail:
 * @MUSIC                     => Paolo Arus "DaRkHoRaCe"        | Twitter: @oongamoonga       | Mail:
 * @FX                        => Paolo Arus "DaRkHoRaCe"        | Twitter: @oongamoonga       | Mail:
 * @ILLUSTRATION              => Urza                           | Twitter: @Urza2             | Mail:
 * @COVER                     => Felipe Monge Corbalán          | Twitter: @vakapp            | Mail:
 * @INSTRUCTION-MANUAL        => Felipe Monge Corbalán          | Twitter: @vakapp            | Mail:
 * @CRUSADER-MODE             => Felipe Monge Corbalán          | Twitter: @vakapp            | Mail:
 * @BETA-TESING               => Alfonso                        | Twitter: @_SrPresley_       | Mail:
 *
 *
 * --------------------------------------------------------------------------------------------------------------------------------
 *  HOW TO COMPILE
 * --------------------------------------------------------------------------------------------------------------------------------
 *
 * Sega Genesis/Megadrive version of l'Abbaye des morts was created using SGDK v1.21 and GenRes v1.1.
 *
 *  - Go gendev.spritesmind.net/page-genres.html
 *  - Download GenRes v1.1
 *  - Extract and replace all genres.* files in the zip into SGDK's bin directory
 *  - Compile #AbbayeMD
 *  - Tadah!
 *
 *
 *
 * --------------------------------------------------------------------------------------------------------------------------------
 *  CHANGELOG
 * --------------------------------------------------------------------------------------------------------------------------------
 * xx-xx-2016 » First release
 * --------------------------------------------------------------------------------------------------------------------------------
 *
 */



#include "../inc/include.h"




static bool demo = false;


static void demo1()
{
	if ( !demo && joy1_pressed_a )
	{
		demo = true;

		extern const struct genresTiles demo_lightfold64;

		u16 pos  = 16;
		u16 size = demo_lightfold64.width * demo_lightfold64.height;
		u16 j, i = 0;
		u16 palette [ 16 ];


		SYS_disableInts();
		VDP_loadTileData ( demo_lightfold64.tiles, pos, size, 0 );
		VDP_fillTileMapRectInc ( PLAN_B, TILE_ATTR_FULL(PAL0, 0, 0, 0, pos), 0, 0, demo_lightfold64.width, demo_lightfold64.height );
		VDP_setPalette ( PAL0, palette_black );
		SYS_enableInts();

		while ( 1 )
		{
			for ( j=0; j<16; j++ )
			{
				u16 val = ( ( i % 16 ) + j ) % 16;

				palette [ val ] = demo_lightfold64.pal [ j ];
			}

			SYS_disableInts();
			VDP_setPaletteColors (  0, palette, 16 );
			SYS_enableInts();
			waitMs ( 40 );

			JoyReader_update();

			if ( joy1_pressed_btn )
			{
				break;
			}

			VDP_waitVSync();

			++i;
		}

		VDP_fadeOutAll ( 30, 0 );
	}
}


static void demo2 ( )
{
	if ( !demo && joy1_pressed_b )
	{
		demo = true;


		extern const struct genresTiles demo_rainbars16b;

		VDP_setScreenWidth256();
		VDP_setPlanSize(32,32);

		u16 pos  = 16;
		u16 size = demo_rainbars16b.width * demo_rainbars16b.height;

		SYS_disableInts();
		VDP_loadTileData ( demo_rainbars16b.tiles, pos, size, 0 );
		VDP_fillTileMapRectInc ( PLAN_B, TILE_ATTR_FULL(PAL0, 0, 0, 0, pos), 0, 0, demo_rainbars16b.width, demo_rainbars16b.height );
		SYS_enableInts();

		u16 palette [ 16 ];
		u16 j, i = 0;

		while ( 1 )
		{
			if ( i % 1 == 0 )
			{
				for ( j=0; j<16; j++ )
				{
					u16 val = ( ( i % 16 ) + j ) % 16;

					palette [ val ] = demo_rainbars16b.pal [ j ];
				}
			}


			SYS_disableInts();
			VDP_setHorizontalScroll ( PLAN_B, -i );
			VDP_setVerticalScroll ( PLAN_B, -i*8 );
			VDP_setPaletteColors (  0, palette, 16 );
			SYS_enableInts();
			waitMs(30);


			JoyReader_update();

			if ( joy1_pressed_btn )
			{
				break;
			}


			VDP_waitVSync();

			++i;
		}

		VDP_fadeOutAll ( 30, 0 );
	}
}


static void monos()
{
	if ( !demo && joy1_pressed_c )
	{
		demo = true;

		extern const Image ob_title_monos_mi;

		SYS_disableInts();
		VDP_loadTileSet ( ob_title_monos_mi.tileset, 16, 0 );
		VDP_setPalette ( PAL1, ob_title_monos_mi.palette->data );
		SYS_enableInts();

		u16 x = 0;
		u16 y = 0;

		while ( 1 )
		{
			SYS_disableInts();
			VDP_setMapEx ( PLAN_A, ob_title_monos_mi.map, TILE_ATTR_FULL(PAL1,0,0,0,16), 14, 10, x*13, y*6, 13, 6 );
			SYS_enableInts();
			waitMs(100);

			++x;

			if ( x == 10 )
			{
				x = 0;
				++y;
			}

			if ( x == 6 && y == 6 )
			{
				x = 0;
				y = 0;
			}

			JoyReader_update();

			if ( joy1_pressed_btn )
			{
				break;
			}

			VDP_waitVSync();
		}

		VDP_fadeOutAll ( 30, 0 );
	}
}



static _voidCallback *vint_callback ( )
{
//	SND_setManualSync_XGM ( FALSE );
//	SND_setMusicTempo_XGM ( 60 );

	if ( DEV )
	{
//		showMcb();
//		showOcb();
//		showNbObjects();
//		showZ80Load();
		showFps();
	}

	return 0;
}






static void init ( int argc, char *argv[] )
{
//	// 0 is soft reset
//	if ( argc == 0 )
//	{
////		displayOff(0);
////		VDP_drawText ( "You pressed reset", 11, 9 );
//
//		_start_entry(); // even more reset
//		MEM_init();
//	}
//
////	sd_reset();
////	SYS_reset();
////	SYS_assertReset(); // makes gensKmod crash, WTF?!


	VDP_init();

    displayInit ( );
    displayOff ( 0 );
	dev_init ( 0, 0 );
    fxInit ( );
    session_init ( );
    JOY_setSupport ( PORT_1, JOY_SUPPORT_6BTN );
    JoyReader_init ( 1 );
    SYS_setVIntCallback ( (_voidCallback*) vint_callback );
	VDP_setScreenWidth320 ( );
	VDP_setPlanSize ( 64, 32 );

	game.version = VERSION_MD;
	demo = false;

	JoyReader_update();
	monos();
	demo1();
	demo2();

    screen_disclaimer ( );
    screen_sega ( );

    displayOff(0);
    resetScroll();
	resetScreen();
	VDP_setScreenWidth256 ( );
	VDP_setPlanSize ( 32, 64 );


//				scrollSet ( SCROLL_INIT );
//				game.version = VERSION_PC;

//				screen_credits ( );
//				screen_title ( );
//				screen_info ( );
//				screen_burning ( );
//				screen_ending ( );
//				screen_tfp ( );
//				screen_prologue ( );
//				screen_gameover ( );
//				screen_soundtest();

}


void loop ( )
{
	while ( TRUE )
    {
        screen_credits ( );

		if ( screen_title ( ) )
        {
        	VDP_setPlanSize ( 32, 64 );

            screen_prologue ( );
            cm_init ( );
            checkpoint_init ( );
            game_init ( );
            switch_init ( );
            musicInit ( );
            hudInit ( );
            scrollSet ( SCROLL_INIT );
            itemManagerInit ( &waItems );

//play_fx(FX_SWITCH);waitMs(1000);

//						// desde el inicio para matar a Satán
//						game.version  = VERSION_MD;
//						session.level = 1;
//						game.room.x = 4;
//						game.room.y = 4;
//						//

//						// activate the crusader mode
//						game.version  = VERSION_MD;
//						session.level = 1;
//						hudIncHearts(-8);
//						game.crusader = false;
//						cm_activate();
//						game.status = GAME_STATUS_OK;
//						//

//						game.room.x = 3;
//						game.room.y = 2;
//						game.version  = VERSION_GB;




            playerInit ( &player );
            invertedCross = false;

            game_loop ( );

            JoyReader_init ( 1 );

            itemManagerEnd ( &waItems );


            if ( game.status == GAME_STATUS_ENDING )
            {
                screen_burning ( );
                screen_ending ( );
                //screen_credits ( );
                screen_tfp ( ); // thanks for playing
            }

            if ( game.status == GAME_STATUS_GAMEOVER )
            {
                screen_gameover ( );
            }
        }
        else
        {
            //screen_info ( );
            //screen_demo ( );
        }
    }
}



int main ( int argc, char *argv[] )
{
    init ( argc, argv );
	loop ( );

    return 0;
}
