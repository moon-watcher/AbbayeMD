#include "../inc/include.h"



void itemManagerInit ( listptr *list )
{
	listptr_new ( list, (listptrFunction) itemDelete );
}



Item *itemManagerAdd ( listptr *list, u8 id, u8 room_x, u8 room_y, u8 checked, u8 hidden, s16 value )
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
	item->hidden  = hidden;
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



void itemManagerShow (  listptr *list, u8 x, u8 y )
{
//	listptrNode *node = list->head;
//
//	u8 cnt = 0;
//
//	while ( node )
//	{
//		Item *item = (Item*) node->pointer;
//
//		GameObject *go = (GameObject*) item->go;
//
//		drawUInt( goGetEntityType(go) , x, y+cnt, 0);
//
//		node = node->next;
//		++cnt;
//	}
//
//	drawUInt(ItemManagerLength(list), x, y+cnt, 0);
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





u8 itemIsHidden ( Item *item )
{
	return item->hidden ? 1 : 0;
}

u8 itemIsVisible ( Item *item )
{
	return item->hidden ? 0 : 1;
}



void itemSetHidden ( Item *item )
{
	item->hidden = 1;
}

void itemSetVisible ( Item *item )
{
	item->hidden = 0;
}



u8 itemGetChecked ( Item *item )
{
	return item->checked;
}



bool itemSetChecked ( Item *item, u16 value )
{
	item->checked = value;

	return value ? true : false;
}



s16 itemGetValue ( Item *item )
{
	return item->value;
}



void itemSetValue ( Item *item, s16 value )
{
	item->value = value;
}



s16 itemIncValue ( Item *item, s16 value )
{
	item->value += value;

	return item->value;
}

