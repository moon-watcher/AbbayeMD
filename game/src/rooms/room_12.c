#include "../inc/include.h"


static GameObject *coco = NULL;



static u16 _which_coco ( )
{
	u16 ret = 26;

	if ( game.version == VERSION_MD )
	{
		u16 list [ 3 ] = { 26, 91, 92 };
		u16 i, which = session.rnd % 3;

		for ( i=0; i<3; i++ )
		{
			GameObject *c = goManagerFindByEntityId ( &waObjects, list[i], 0 );

			setActive ( c, 0 );

			if ( which == i )
			{
				setActive ( c, 1 );
				preparePal ( c->object->entity->palette, c->object->entity->sd->palette->data );
				ret = list [ i ];
			}
		}
	}

	return ret;
}




static void _room_enter ( Room *room )
{
	coco = goManagerFindByEntityId ( &waObjects, _which_coco(), 0 ); // Coco
}



static void _room_stay ( Room *room )
{
	enemy_coco ( coco );
}



void room_funct_12_all ( Room *room, u8 action )
{
	if ( action == ROOM_ACTION_ENTER ) // enter
	{
		_room_enter ( room );
	}

	else if ( action == ROOM_ACTION_STAY ) // stay
	{
		_room_stay ( room );
	}

	else if ( action == ROOM_ACTION_LEAVE ) // leave
	{
		//_room_leave ( room );
	}
}
