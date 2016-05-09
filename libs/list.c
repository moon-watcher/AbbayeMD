// V.2
// Removes the node ID for saving memory
// ID: ID implementation goes to the proccess that use the list
// Find: list_find were removed. Find implementation algo goes with the proccess that use the list
//
// Borrowed from http://pseudomuto.com/development/2013/05/02/implementing-a-generic-linked-list-in-c/ Thanks!


#include <genesis.h>
#include "list.h"



static void _remove ( list *list, listNode *node )
{
	if ( list->freeFn )
	{
		list->freeFn ( node->data );
	}

	list->length--;

	MEM_free ( node->data );
	MEM_free ( node );
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void list_new ( list *list, u16 elementSize, freeFunction freeFn )
{
	list_destroy ( list );

	list->length      = 0;
	list->elementSize = elementSize;
	list->head        = NULL;
	list->tail        = NULL;
	list->freeFn      = freeFn;
}



void list_destroy ( list *list )
{
	listNode *node;

	while ( list->head != NULL )
	{
		node = list->head;
		list->head = node->next;

		_remove ( list, node );
	}
}



void list_prepend ( list *list, void *element )
{
	listNode *node = MEM_alloc ( sizeof ( listNode ) );
	node->data = MEM_alloc ( list->elementSize );
	memcpy ( node->data, element, list->elementSize );

	node->next = list->head;
	list->head = node;

	if ( !list->tail )
	{
		list->tail = list->head;
	}

	list->length++;
}



void list_append ( list *list, void *element )
{
	listNode *node = MEM_alloc ( sizeof ( listNode ) );
	node->data = MEM_alloc ( list->elementSize );
	node->next = NULL;

	memcpy ( node->data, element, list->elementSize );

	if ( list->length == 0 )
	{
		list->head = list->tail = node;
	}
	else
	{
		list->tail->next = node;
		list->tail       = node;
	}

	list->length++;
}



void list_foreach ( list *list, listIterator iterator )
{
	listNode *node = list->head;

	while ( node )
	{
		iterator ( node->data );
		node = node->next;
	}
}



void list_head ( list *list, void *element, u16 removeFromList )
{
	listNode *node = list->head;
	memcpy ( element, node->data, list->elementSize );

	if ( removeFromList )
	{
		list->head = node->next;

		_remove ( list, node );
	}
}



void list_tail ( list *list, void *element )
{
	listNode *node = list->tail;
	memcpy ( element, node->data, list->elementSize );
}



u16 list_size ( list *list )
{
	return list->length;
}



void list_remove_node ( list *list, listNode *search )
{
	listNode *prev = NULL;
	listNode *node = list->head;

	while ( node )
	{
		if ( search == node )
		{
			if ( node == list->head )
			{
				list->head = node->next;
			}
			else if ( node == list->tail )
			{
				list->tail = prev;
			}
			else
			{
				prev->next = node->next;
			}

			_remove ( list, node );

			break;
		}

		prev = node;
		node = node->next;
	}
}
