#include "../inc/include.h"




static GameObject *philippe [ 5 ];
static s16         _x1 [ 5 ];
static s16         _x2 [ 5 ];
static s16         _random [ 5 ];
static s16         _vel_x [ 5 ];
static s16         _count;





void philippe_init ( )
{
	_count = 0;
}



void philippe_add ( s16 x1, s16 x2 )
{
	if ( _count == 5 )
	{
		_count = 0;
	}

	_x1[_count]      = x1;
	_x2[_count]      = x2;
	_random[_count]  = ( random() % 29 ) + 29  ;
	philippe[_count] = (GameObject*) goManagerFindByEntityId ( &waObjects, 97, _count ); // Philippe like crusader
	_vel_x[_count]   = philippe[_count]->object->entity->vel_x; // Philippe like crusader

	if ( cm_is_activated ( ) )
	{
		philippe[_count]->vel_x = _vel_x[_count];
	}
	else
	{
		setActive ( philippe[_count], 0 );
	}

	++_count;
}


void philippe_update()
{
	if ( cm_is_activated ( ) )
	{
		u8 i;

		for ( i=0; i<_count; i++ )
		{
			if ( philippe[i]->vel_x != zero  &&  random() % 29 == 0 )
			{
				_vel_x[i] = philippe[i]->vel_x;
				philippe[i]->vel_x = 0;
				continue;
			}

			if ( philippe[i]->vel_x == zero  &&  random() % 27 == 0 )
			{
				philippe[i]->vel_x = _vel_x[i];
			}

			bool can_change = true;
			s16 x = goGetCenterX ( philippe[i] );

			if ( 0 && DEVELOPEMENT )
			{
				drawInt ( x, 0, i, 0 );
				drawInt ( _x1[i], 10, i, 0 );
				drawInt ( _x2[i], 20, i, 0 );
			}

			if ( x < _x1[i] || x > _x2[i] )
			{
				philippe[i]->vel_x = -philippe[i]->vel_x;
				can_change = false;
			}
			if ( can_change &&  ( random() % _random[i] == 0 ) )
			{
				philippe[i]->vel_x = -philippe[i]->vel_x;
			}
		}
	}
}
