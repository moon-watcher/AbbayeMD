#ifndef _LISTPTR_H_
#define _LISTPTR_H_


typedef void (*listptrFunction) (void*);


typedef struct _listptrNode
{
	void                *pointer;
	struct _listptrNode *next;
	struct _listptrNode *prev;
}
listptrNode;


typedef struct
{
	int              length;
	listptrNode     *head;
	listptrFunction  freeFn;
}
listptr;


void         listptr_new      ( listptr *list, listptrFunction freeFn );
void         listptr_destroy  ( listptr *list );
int          listptr_size     ( listptr *list );
listptrNode *listptr_append   ( listptr *list, void *element );
void         listptr_foreach  ( listptr *list, listptrFunction iterator );
void         listptr_remove   ( listptr *list, listptrNode *node );


#endif // _LISTPTR_H_
