#ifndef _LIST_H_
#define _LIST_H_


typedef void (*freeFunction)(void *); // a common function used to free malloc'd objects
typedef void (*listIterator)(void *);


typedef struct _listNode
{
	void             *data;
	struct _listNode *next;
}
listNode;


typedef struct
{
	unsigned int  length;
	unsigned int  elementSize;
	listNode     *head;
	listNode     *tail;
	freeFunction  freeFn;
}
list;


void         list_new         ( list *list, unsigned int elementSize, freeFunction freeFn );
void         list_destroy     ( list *list );
unsigned int list_size        ( list *list );

void         list_prepend     ( list *list, void *element );
void         list_append      ( list *list, void *element );

void         list_head        ( list *list, void *element, unsigned int removeFromList );
void         list_tail        ( list *list, void *element );
void         list_foreach     ( list *list, listIterator iterator );

void         list_remove_node ( list *list, listNode *node );


#endif // _LIST_H_
