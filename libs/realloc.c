#include <genesis.h>
#include "realloc.h"


void *realloc ( void *ptr, unsigned int size )
{
	if ( !ptr )
	{
		return MEM_alloc ( size );
	}


	// TODO.
	// Calculate the size of *ptr and assign it to bsize.
	unsigned int bsize = size; // malloc_size ( ptr ); // instead of "size"

	if ( bsize >= size )
	{
		//return ptr;
	}


	void *newptr = MEM_alloc ( bsize );

	if ( !newptr )
	{
		return NULL;
	}

	memcpy ( newptr, ptr, bsize );
	MEM_free ( ptr );

	return newptr;
}



///*
// * From:
// *
// * http://stackoverflow.com/questions/10864593/implementation-of-realloc-in-c
// * http://danluu.com/malloc-tutorial/
// *
// */
//
//
//struct block_meta
//{
//  int size;
//  struct block_meta *next;
//  int free;
//  int magic;    // For debugging only. TODO: remove this in non-debug mode.
//  char data[1];
//};
//
//
//
//struct block_meta *get_block_ptr ( void *ptr )
//{
//	return ( struct block_meta* ) ptr - 1;
//}
//
//
//
//void *realloc ( void *ptr, unsigned int size )
//{
//	if ( !ptr )
//	{
//		VDP_drawText("sale1",0,0); waitMs(1000); VDP_clearTextLine(0);
//
//		return MEM_alloc ( size ); // NULL ptr. realloc should act like malloc.
//	}
//
////	struct block_meta* block_ptr = get_block_ptr ( ptr );
////
////	if ( block_ptr->size >= size )
////	{
////		VDP_drawText("sale2",0,0); waitMs(1000); VDP_clearTextLine(0);
////
////		return ptr; // We have enough space. Could free some once we implement split.
////	}
//
//
//	int bsize = 0;
//	int *aux = ptr;
//
//	--aux;
//	bsize = *aux;
//
//	drawUInt ( size,  10, 0, 7 );
//	drawInt ( *, 20, 0, 7 );
//
//
//
//
//
////	unsigned int bsize = 0;
////	int *aux = ptr;
////
////	if ( aux )
////	{
////		--aux;
////		bsize = *aux;
////	}
////
////	if ( bsize >= size )
////	{
////		VDP_drawText("sale2",0,0); waitMs(1000); VDP_clearTextLine(0);
////		// We have enough space. Could free some once we implement split.
////		return ptr;
////	}
//
//
//	// Need to really realloc. Malloc new space and free old space.
//	// Then copy old data to new space.
//	void *new_ptr = MEM_alloc ( size );
//
//	if ( !new_ptr )
//	{
//		VDP_drawText("sale3",0,0); waitMs(1000); VDP_clearTextLine(0);
//		return NULL; // TODO: set errno on failure.
//	}
//
////	memcpy ( new_ptr, ptr, block_ptr->size );
//	memcpy ( new_ptr, ptr, bsize );
//	MEM_free ( ptr );
//
//	VDP_drawText("sale4",0,0); waitMs(1000); VDP_clearTextLine(0);
//	return new_ptr;
//}
//
//
////void *realloc ( void *ptr, unsigned int size )
////{
////	if ( !ptr )
////	{
////		// NULL ptr. realloc should act like malloc.
////		return MEM_alloc ( size );
////	}
////
////	unsigned int bsize = 0;
////	unsigned int *in = ptr;
////
////	if ( in )
////	{
////		--in;
////		bsize = *in;
////	}
////
////
////	if ( bsize >= size )
////	{
////		// We have enough space. Could free some once we implement split.
////		return ptr;
////	}
////
////	// Need to really realloc. Malloc new space and free old space.
////	// Then copy old data to new space.
////	void *new_ptr = MEM_alloc ( size );
////
////	if ( !new_ptr )
////	{
////		return NULL; // TODO: set errno on failure.
////	}
////
////	memcpy ( new_ptr, ptr, bsize );
////	MEM_free ( ptr );
////
////	return new_ptr;
////}


