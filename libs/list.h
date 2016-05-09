// V.2
// Removes the node ID for saving memory
// ID implementation corresponds to the proccess that use the  list
// list_find were removed
//
// Borrowed from http://pseudomuto.com/development/2013/05/02/implementing-a-generic-linked-list-in-c/ Thanks!


#ifndef _LIST_H_
#define _LIST_H_


// a common function used to free malloc'd objects
typedef void (*freeFunction)(void *);
typedef void (*listIterator)(void *);



typedef struct _listNode
{
	void             *data;
	struct _listNode *next;
}
listNode;


typedef struct
{
	u16           length;
	u16           elementSize;
	listNode     *head;
	listNode     *tail;
	freeFunction  freeFn;
}
list;



#define list_find_node( list, type, field, search ) \
({                                                  \
	listNode *node = list.head;                      \
	listNode *retu = NULL;                           \
                                                    \
	while ( node )                                   \
	{                                                \
		type *o = (type*) node->data;                 \
                                                    \
		if ( o->field == search )                     \
		{                                             \
			retu = node;                               \
			break;                                     \
		}                                             \
                                                    \
		node = node->next;                            \
	}                                                \
	                                                 \
	retu;                                            \
})



void list_new         ( list *list, u16 elementSize, freeFunction freeFn );
void list_destroy     ( list *list );
u16  list_size        ( list *list );

void list_prepend     ( list *list, void *element );
void list_append      ( list *list, void *element );

void list_head        ( list *list, void *element, u16 removeFromList );
void list_tail        ( list *list, void *element );
void list_foreach     ( list *list, listIterator iterator );

void list_remove_node ( list *list, listNode *node );



#endif // _LIST_H_
