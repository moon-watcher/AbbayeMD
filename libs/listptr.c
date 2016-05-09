#include "listptr.h"



//
// for SGDK compatibility
//
#define malloc MEM_alloc
#define free   MEM_free

#include <genesis.h>
//
//
//



void listptr_new ( listptr *list, listptrFunction freeFn )
{
	/*
		Destruye la lista al iniciarse.

		Lo quito. Si lo dejo ejecutar, al pulsar reset, entra
		en el bucle (a pesar de que no es un puntero válido y
		su memoria acaba de ser eliminada) y ejecuta MEM_free,
		el cual hace fallar la ejecución del programa.

		listptr_destroy ( list );
	*/

	list->length = 0;
	list->head   = ((void*) 0);
	list->freeFn = freeFn;
}



void listptr_destroy ( listptr *list )
{
	listptrNode *node;

	while ( list->head )
	{
		node = list->head;
		list->head = node->next;

		listptr_remove ( list, node );
	}
}



listptrNode *listptr_append ( listptr *list, void *element )
{
	listptrNode *node = (listptrNode *) malloc ( sizeof ( listptrNode ) );

	node->pointer    = element;
	node->prev       = ((void*) 0);
	node->next       = list->head;

	list->head->prev = node;
	list->head       = node;

	++list->length;

	return node;
}



void listptr_foreach ( listptr *list, listptrFunction iterator )
{
	listptrNode *node = list->head;

	while ( node )
	{
		iterator ( node->pointer );
		node = node->next;
	}
}



int listptr_size ( listptr *list )
{
	return list->length;
}



void listptr_remove ( listptr *list, listptrNode *node )
{
	if ( list->freeFn )
	{
		list->freeFn ( node->pointer );
	}

   if ( !node->prev )
   {
      list->head = node->next;
	}
	else
	{
		node->prev->next = node->next;
	}

	if ( node->next )
	{
		node->next->prev = node->prev;
	}

	list->length--;

	free ( node );
}
