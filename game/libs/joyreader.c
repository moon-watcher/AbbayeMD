/*
    Original idea by @MoonWatcherMD

    Some changes and improvements by JackNolddor (@nolddor)
    Last Update: 31/May/2015
*/

#include <genesis.h>
#include "JoyReader.h"



static u8 _joys = 0;     //Total of enabled joys



void JoyReader_init ( u8 joys )
{
    _joys = ( joys < JOY_MAX ) ? joys : JOY_MAX;

    memset ( joysticks, NULL, sizeof(JoyReader) * _joys );
}



void JoyReader_update ( void )
{
    u16 i;

    for ( i = JOY_1; i < _joys; i++ )
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
