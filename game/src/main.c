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
 * @MUSIC                     => Paolo Arus                     | Twitter:                    | Mail:
 * @FX                        => Paolo Arus                     | Twitter:                    | Mail:
 * @ILLUSTRATION              => Urza                           | Twitter: @Urza2             | Mail:
 * @COVER                     => Felipe Monge Corbalán          | Twitter: @vakapp            | Mail:
 * @INSTRUCTION-MANUAL        => Felipe Monge Corbalán          | Twitter: @vakapp            | Mail:
 * @CRUSADER-MODE             => Felipe Monge Corbalán          | Twitter: @vakapp            | Mail:
 *
 *
 * --------------------------------------------------------------------------------------------------------------------------------
 *  HOW TO COMPILE
 * --------------------------------------------------------------------------------------------------------------------------------
 *
 * Sega Genesis/Megadrive version of l'Abbaye des morts was created using SGDK v1.11 and GenRes v1.1.
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





static void _init ( u16 hard )
{
   return;
//	// 0 is soft reset
//   if ( hard == 0 )
//   {
//		//displayOff(0);
//		//VDP_drawText ( "You pressed reset", 11, 9 );
//
//      _start_entry(); // even more reset
//      MEM_init();
//   }
//
//	////sd_reset();
//	////SYS_reset();
//   //SYS_assertReset(); // makes gensKmod crash, WTF?!
}



void demo1()
{
   return;

	extern const struct genresTiles demo_lightfold64;

	u16 pos  = 16;
	u16 size = demo_lightfold64.width * demo_lightfold64.height;
	u16 j, i = 0;
	u16 palette [ 16 ];


	VDP_loadTileData ( demo_lightfold64.tiles, pos, size, 0 );
	VDP_fillTileMapRectInc ( BPLAN, TILE_ATTR_FULL(PAL0, 0, 0, 0, pos), 0, 0, demo_lightfold64.width, demo_lightfold64.height );
	VDP_setPalette ( PAL0, palette_black );

	while ( 1 )
	{
		for ( j=0; j<16; j++ )
		{
			u16 val = ( ( i % 16 ) + j ) % 16;

			palette [ val ] = demo_lightfold64.pal [ j ];
		}

		VDP_setPaletteColors (  0, palette, 16 );
		VDP_waitVSync();

		waitMs ( 40 );

		++i;
	}
}



void demo2 ( )
{
   return;

	extern const struct genresTiles demo_rainbars16b;

	VDP_setScreenWidth256();
	VDP_setPlanSize(32,32);

	u16 pos  = 16;
	u16 size = demo_rainbars16b.width * demo_rainbars16b.height;

	VDP_loadTileData ( demo_rainbars16b.tiles, pos, size, 0 );
	VDP_fillTileMapRectInc ( BPLAN, TILE_ATTR_FULL(PAL0, 0, 0, 0, pos), 0, 0, demo_rainbars16b.width, demo_rainbars16b.height );


	u16 palette [ 16 ];
	u16 j, i = 0;

	while ( 1 )
	{
//		waitMs(30);

	if ( i % 1 == 0 )
		for ( j=0; j<16; j++ )
		{
			u16 val = ( ( i % 16 ) + j ) % 16;

			palette [ val ] = demo_rainbars16b.pal [ j ];
		}

		VDP_waitVSync();
		VDP_setHorizontalScroll ( PLAN_B, -i );
		VDP_setVerticalScroll ( PLAN_B, -i*8 );
		VDP_setPaletteColors (  0, palette, 16 );

		++i;
	}
}







int main ( int argc, char *argv[] )
{
   _init ( argc );

	demo1();
	demo2();

   dev_init ( 1, 1 );



	game_set_alt_palettes ( false );

	displayInit();
	displayOff(0);

	game.version = VERSION_MD;

	JoyReader_init ( 1 );
	JOY_setSupport ( PORT_1, JOY_SUPPORT_6BTN );

	resetScroll();
	resetScreen();

	screen_disclaimer ( );
	screen_sega ( );

	displayOff(0);
	resetScreen();

	VDP_setScreenWidth256 ( );
	VDP_setPlanSize ( 32, 64 );





//					scrollSet ( SCROLL_INIT );
//					game.version = VERSION_PC;

//				screen_credits ( );
//				screen_title ( );
//				screen_info ( );
//				screen_burning ( );
//				screen_ending ( );
//				screen_tfp ( );
//				screen_prologue ( );
//				screen_gameover ( );
//				screen_soundtest();



	session_init ();


	while ( TRUE )
	{
		game_set_alt_palettes ( false );

		screen_credits ( );

		displayOff(0);

		resetScroll ( );
		resetScreen ( );
		scrollSet ( 0 );
		font_load ( 0 );


		u16 title = screen_title ( );

		if ( title )
		{
			screen_prologue ( );
			cm_init ( );
			checkpoint_init ( );
			game_init ( );
			switch_init ( );
			musicInit ( );
			hudInit ( );
			scrollSet ( SCROLL_INIT );
			itemManagerInit ( &waItems );



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


	return 0;
}
