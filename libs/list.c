#include <genesis.h>
#define malloc  MEM_alloc // for SGDK compatibility
#define free    MEM_free  // for SGDK compatibility


// Borrowed from:
// http://pseudomuto.com/development/2013/05/02/implementing-a-generic-linked-list-in-c/


#include "list.h"

#define nullptr ((void*)0)


static void remove_node ( list *list, listNode *node )
{
	if ( list->freeFn )
	{
		list->freeFn ( node->data );
	}

	--list->length;

	free ( node->data );
	free ( node );
}


void list_new ( list *list, unsigned int elementSize, freeFunction freeFn )
{
	list->length      = 0;
	list->elementSize = elementSize;
	list->head        = nullptr;
	list->tail        = nullptr;
	list->freeFn      = freeFn;
}


void list_destroy ( list *list )
{
	listNode *node;

	while (  list->head != nullptr )
	{
		node = list->head;
		list->head = node->next;

		remove_node ( list, node );
	}
}


void list_prepend ( list *list, void *element )
{
	listNode *node = malloc ( sizeof ( listNode ) );
	node->data = malloc ( list->elementSize );
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
	listNode *node = malloc ( sizeof ( listNode ) );
	node->data = malloc ( list->elementSize );
	node->next = nullptr;

	memcpy ( node->data, element, list->elementSize );

	if ( list->length )
	{
		list->tail->next = node;
		list->tail       = node;
	}
	else
	{
		list->head = list->tail = node;
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


void list_head ( list *list, void *element, unsigned int removeFromList )
{
	listNode *node = list->head;
	memcpy ( element, node->data, list->elementSize );

	if ( removeFromList )
	{
		list->head = node->next;

		remove_node ( list, node );
	}
}


void list_tail ( list *list, void *element )
{
	listNode *node = list->tail;
	memcpy ( element, node->data, list->elementSize );
}


unsigned int list_size ( list *list )
{
	return list->length;
}


void list_remove_node ( list *list, listNode *search )
{
	listNode *prev = nullptr;
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

			remove_node ( list, node );

			break;
		}

		prev = node;
		node = node->next;
	}
}


//// find example
//void *list_find_node( list, type, field, search )
//{
//	listNode *node = list.head;
//	listNode *retu = nullptr;
//
//	while ( node )
//	{
//		type *o = (type*) node->data;
//
//		if ( o->field == search )
//		{
//			retu = node;
//			break;
//		}
//
//		node = node->next;
//	}
//
//	return retu;
//}

