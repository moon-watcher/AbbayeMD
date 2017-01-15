/*
    Original idea by @MoonWatcherMD

    Some changes and improvements by JackNolddor (@nolddor)
    Last Update: 13/Jun/2016
*/

#include <genesis.h>
#include "JoyReader.h"



static u16 _joys  = 0;     //Total of enabled joys
static u16 _pause = 0;



void JoyReader_init ( u8 joys )
{
    _pause = 0;
    _joys  = ( joys < JOY_MAX ) ? joys : JOY_MAX;

    memset ( joysticks, NULL, sizeof(JoyReader) * _joys );
}



void JoyReader_update ( void )
{
    if ( _pause )
    {
        return;
    }

    u16 i = _joys;

    while ( i-- )
    {
        u16 active  = JOY_readJoypad ( i );
        u16 changed = active ^ joysticks [ i ].active;

        joysticks [ i ] = ( JoyReader ) { active, changed };
    }
}



void JoyReader_reset ( )
{
    JoyReader_init ( _joys );
}


void JoyReader_pause ( )
{
    _pause = 1;
}


void JoyReader_resume ( )
{
    _pause = 0;
}
