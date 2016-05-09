#ifndef _CONIO_H_
#define _CONIO_H_


struct text_info
{
	unsigned char curx;
	unsigned char cury;

	struct
	{
		unsigned char x;
		unsigned char y;
		unsigned char width;
		unsigned char height;
	}
	window;

	unsigned int plan;
	unsigned int palette;
};


void gettextinfo ( struct text_info * info );
void inittextinfo ( void );
void clrscr ( void );
void clreol ( void );
void delline ( void );
void insline (void);
void cputs ( char *str );
void putch ( char ch );
void gotoxy ( unsigned char x, unsigned char y );
void cputsxy ( unsigned char x, unsigned char y, char * str );
void putchxy ( unsigned char x, unsigned char y, char ch );
void textcolors ( int *colors );
void textcolor ( unsigned int nb, unsigned int color );
unsigned int wherex ( void );
unsigned int wherey ( void );
void delay ( unsigned int ms );
unsigned int kbhit ( );
void window ( unsigned char x, unsigned char y, unsigned char width, unsigned char height );


#endif // _CONIO_H_
