#include "../inc/include.h"



void itemManagerInit ( listptr *list )
{
	listptr_new ( list, (listptrFunction) itemDelete );
}



Item *itemManagerAdd ( listptr *list, u8 id, u8 room_x, u8 room_y, bool checked, bool visible, s32 value )
{
	Item *item = (Item*) itemManagerFind ( &waItems, id, room_x, room_y );

	if ( item != NULL )
	{
		return (Item*) item;
	}

	item = itemCreate ( );

	item->id      = id;
	item->room_x  = room_x;
	item->room_y  = room_y;
	item->checked = checked;
	item->visible = visible;
	item->value   = value;
	item->node    = (listptrNode*) listptr_append ( list, (Item*) item );

	return (Item*) item;
}



Item *itemManagerFind ( listptr *list, u8 id, u8 room_x, u8 room_y )
{
	listptrNode *node = list->head;

	while ( node )
	{
		Item *item = (Item*) node->pointer;

		if
		(
			item->room_x == room_x &&
			item->room_y == room_y &&
			item->id     == id
		)
		{
			return (Item*) item;
		}

		node = node->next;
	}

	return NULL;
}



void ItemManagerDelete ( listptr *list, Item *item )
{
	listptr_remove ( list, item->node );

	item->node = NULL;

	MEM_free ( item ); // no funciona?
	item = NULL;       // no funciona?
}



u16 ItemManagerLength ( listptr *list )
{
	return list->length;
}



void itemManagerShow (  listptr *list )
{
	if ( !DEVELOPEMENT )
	{
		return;
	}


	listptrNode *node = list->head;


	drawUInt ( ItemManagerLength ( &waItems ), 0, 0, 0 );

	u8 i = 1;

	while ( node )
	{
		Item *item = ( Item * ) node->pointer;

		drawUInt ( item->id,       0, i, 1 );
		drawUInt ( item->room_x,   2, i, 1 );
		drawUInt ( item->room_y,   4, i, 1 );
		drawUInt ( item->checked,  6, i, 1 );
		drawUInt ( item->visible,  8, i, 1 );
		drawUInt ( item->value,   10, i, 1 );

		node = node->next;
		++i;
	}
}



void itemManagerEnd ( listptr *list )
{
	listptr_destroy ( list );
}





Item *itemCreate ( )
{
	u16 size = sizeof ( Item );

	Item *item = MEM_alloc ( size );
	memset ( item, 0, size );

	return ( Item *) item;
}


void itemDelete ( Item *item )
{
	item->node = NULL;

	MEM_free ( item );
	item = NULL;
}





bool itemGetVisible ( Item *item )
{
	if ( item )
	{
		return item->visible;
	}

	return false;
}

void itemSetVisible ( Item *item, bool value )
{
	if ( item )
	{
		item->visible = value;
	}
}



bool itemGetChecked ( Item *item )
{
	if ( item )
	{
		return item->checked;
	}

	return false;
}

void itemSetChecked ( Item *item, bool value )
{
	if ( item )
	{
		item->checked = value;
	}
}



s32 itemIncValue ( Item *item, s32 value )
{
	if ( item )
	{
		return ( item->value += value );
	}

	return 0;
}

s32 itemGetValue ( Item *item )
{
	if ( item )
	{
		return item->value;
	}

	return 0;
}

void itemSetValue ( Item *item, s32 value )
{
	if ( item )
	{
		item->value = value;
	}
}
