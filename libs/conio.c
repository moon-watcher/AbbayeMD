#include <genesis.h>
#include "conio.h"


#define ABSOLUTEX  ti.window.x + ti.curx
#define ABSOLUTEY  ti.window.y + ti.cury




static struct text_info ti = { };


/////////////////////////////////////////////////////////////////////////////////////////////////////////




void gettextinfo ( struct text_info * info )
{
	*info = ti;
}


void inittextinfo ( void )
{
	ti.curx          = 0;
	ti.cury          = 0;

	ti.window.x      = 0;
	ti.window.y      = 0;
	ti.window.width  = VDP_getPlanWidth();
	ti.window.height = VDP_getPlanHeight();

	update_textinfo ( );
}


void gotoxy ( unsigned char x, unsigned char y )
{
	ti.curx = x;
	ti.cury = y;
}


unsigned int wherex ( void )
{
	return ti.curx;
}


unsigned int wherey ( void )
{
	return ti.cury;
}


void delay ( unsigned int ms )
{
	waitMs ( ms );
}


unsigned int kbhit ( )
{
	return JOY_readJoypad ( JOY_ALL );
}


void clrscr ( void )
{
	gotoxy ( 0, 0 );

	update_textinfo ( );

	VDP_fillTileMapRect ( ti.plan, 0, ABSOLUTEX, ABSOLUTEY, ti.window.width, ti.window.height );
}


void clreol ( void )
{
	update_textinfo ( );

	VDP_fillTileMapRect ( ti.plan, 0, ABSOLUTEX, ABSOLUTEY, ti.window.width - ti.curx, 1 );
}


/**
 * Delete the current line (line on which is cursor) and then moves all lines
 * below one line up. Lines below the line are moved one line up.
 */
void delline ( void )
{
	//	void VDP_doVRamDMACopy(u16 from, u16 to, u16 len);
}


/**
 * Insert blank line at the cursor position.
 * Original content of the line and content of lines below moves one line down.
 * The last line is deleted.
 */
void insline (void)
{
	//	void VDP_doVRamDMACopy(u16 from, u16 to, u16 len);
}


// Writes a character.
void putch ( char ch )
{
	char string[2] = { ch };

	VDP_drawText ( string, ABSOLUTEX, ABSOLUTEY );

	ti.curx += 1;

	if ( ti.curx >= ti.window.width )
	{
		ti.curx = 0;
		ti.cury += 1;

		if ( ti.cury >= ti.window.height )
		{
			// Quizá en lugar de volver arriba debería subir el contenido
			// de windows una fila, borrar la última e insertar a ésta.

			ti.cury = 0;
		}
	}
}


// Writes a string.
void cputs ( char *str )
{
	const char *src;

	src = str;

	while ( *src )
	{
		putch ( *src++ ); // too slow!
	}
}


void cputsxy ( unsigned char x, unsigned char y, char * str )
{
	gotoxy ( x, y );
	cputs ( str );
}


void putchxy ( unsigned char x, unsigned char y, char ch )
{
	gotoxy ( x, y );
	putch ( ch );
}


void textcolor ( unsigned int nb, unsigned int color )
{
	update_textinfo ( );

	VDP_setPaletteColor ( ti.palette + nb, color );
}


void textcolors ( int *colors )
{
	int i;

	for ( i=0; i<16; i++ )
	{
		if ( colors[i] >= 0 )
		{
			textcolor ( i, colors[i] );
		}
	}
}


void window ( unsigned char x, unsigned char y, unsigned char width, unsigned char height )
{
	ti.window.x      = x;
	ti.window.y      = y;
	ti.window.width  = width;
	ti.window.height = height;

	gotoxy ( 0, 0 );
}


void update_textinfo ( )
{
	ti.plan    = VDP_getTextPlan();
	ti.palette = VDP_getTextPalette();
}
