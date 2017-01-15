#ifndef _SCREEN_H_
#define _SCREEN_H_



typedef struct
{
	Image   *foreground;
	Image   *background;
	Objects *objects;
}
Screen;



const Screen screen_list [ VERSION_MAX ] [ 20 ];




Screen *screen_get ( u8 id );





void screen_disclaimer  ( bool force );
void screen_sega        ( );
u16  screen_title       ( );
void screen_options     ( );
void screen_info        ( );
void screen_prologue    ( );
void screen_burning     ( );
void screen_ending      ( );
void screen_gameover    ( );
void screen_credits     ( );
void screen_tfp         ( );
void screen_playonretro ( );



#endif // _SCREEN_H_
