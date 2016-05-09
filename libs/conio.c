#include <genesis.h>
#include "conio.h"


#define ABSOLUTEX  _ti.window.x + _ti.curx
#define ABSOLUTEY  _ti.window.y + _ti.cury




static struct text_info _ti;



static void _update_textinfo ( )
{
	_ti.plan    = VDP_getTextPlan().v ? APLAN : BPLAN;
	_ti.palette = VDP_getTextPalette();
}



/////////////////////////////////////////////////////////////////////////////////////////////////////////



void gettextinfo ( struct text_info * info )
{
	*info = _ti;
}


void inittextinfo ( void )
{
	_ti.curx          = 0;
	_ti.cury          = 0;

	_ti.window.x      = 0;
	_ti.window.y      = 0;
	_ti.window.width  = VDP_getPlanWidth();
	_ti.window.height = VDP_getPlanHeight();

	_update_textinfo ( );
}


void gotoxy ( unsigned char x, unsigned char y )
{
	_ti.curx = x;
	_ti.cury = y;
}


unsigned int wherex ( void )
{
	return _ti.curx;
}


unsigned int wherey ( void )
{
	return _ti.cury;
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

	_update_textinfo ( );
	VDP_fillTileMapRect ( _ti.plan, 0, ABSOLUTEX, ABSOLUTEY, _ti.window.width, _ti.window.height );
}


void clreol ( void )
{
	_update_textinfo ( );
	VDP_fillTileMapRect ( _ti.plan, 0, ABSOLUTEX, ABSOLUTEY, _ti.window.width - _ti.curx, 1 );
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
	u8 string[2] = { ch };

	VDP_drawText ( string, ABSOLUTEX, ABSOLUTEY );

	_ti.curx += 1;

	if ( _ti.curx >= _ti.window.width )
	{
		_ti.curx = 0;
		_ti.cury += 1;

		if ( _ti.cury >= _ti.window.height )
		{
			// Quizá en lugar de volver arriba debería subir el contenido
			// de windows una fila, borrar la última e insertar a ésta.

			_ti.cury = 0;
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
	_update_textinfo ( );

	VDP_setPaletteColor ( _ti.palette + nb, color );
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
	_ti.window.x      = x;
	_ti.window.y      = y;
	_ti.window.width  = width;
	_ti.window.height = height;

	gotoxy ( 0, 0 );
}
