#include "../inc/include.h"



void goManagerInit ( listptr *list )
{
	//
	// Este "goDelete" es la función que libera dos cosas:
	//
	//  1.- Las posiciones VRAM
	//  2.- Los objetos
	//

	listptr_new ( list, (listptrFunction) goDelete );
}



GameObject *goManagerAdd ( listptr *list, Object *object ) //GameObject *GoManagerCreate ( void (*funcPointer)(GameObject*) )
{
	GameObject *go = goCreate ( );

	//funcPointer ( go );

	//go->id      = uniqid ( );
	go->active  = 1;
	go->object  = object;
	go->item    = NULL;

	go->prev_x  = goSetX ( go, go->object->x - scrollHorizontal );
	go->prev_y  = goSetY ( go, go->object->y - scrollVertical   );

	go->vel_x   = zero;
	go->vel_y   = zero;

	go->node    = (listptrNode*) listptr_append ( list, (GameObject*) go );

	go->grabity = true;

	go->counter = 0;
	go->data    = NULL;


	if ( go->object->dir_x )
	{
		go->vel_x = go->object->vel_x ? go->object->vel_x : go->object->entity->vel_x;

		if ( go->object->dir_x < 0 )
		{
			go->vel_x = -go->vel_x;
		}
	}

	if ( go->object->dir_y )
	{
		go->vel_y = go->object->vel_y ? go->object->vel_y : go->object->entity->vel_y;

		if ( go->object->dir_y < 0 )
		{
			go->vel_y = -go->vel_y;
		}
	}

	return go;
}



void goManagerUpdate ( listptr *list )
{
	listptr_foreach ( list, (listptrFunction) goUpdate );
}



void goManagerDelete ( listptr *list, GameObject *go )
{
	listptr_remove ( list, (listptrNode*) go->node );
}



u16 goManagerCount ( listptr *list )
{
	return listptr_size ( list );
}



GameObject *goManagerFindByIndex ( listptr *list, u16 index )
{
	u16 i = 0;

	listptrNode *node = list->head;

	// listptr_append() adds new nodes at the first instead of last
	// so this line inverts index
	index = listptr_size ( list ) - index - 1;
	//

	while ( node )
	{
		if ( index == i++ )
		{
			return (GameObject *) node->pointer;
		}

		node = node->next;
	}

	return NULL;
}



GameObject *goManagerFindByEntityId ( listptr *list, u16 id, u8 rep )
{
	listptrNode *node = list->head;

	while ( node )
	{
		GameObject *go = (GameObject *) node->pointer;

		if ( go->object->entity->id == id && rep-- == 0 )
		{
			return (GameObject*) go;
		}

		node = node->next;
	}

	return NULL;
}



u16 goManagerFindAllByEntityId ( listptr *list, GameObject *gos[], u16 id )
{
	u16 counter = 0;

	listptrNode *node = list->head;

	while ( node )
	{
		GameObject *go = (GameObject *) node->pointer;

		if ( go->object->entity->id == id )
		{
			gos [ counter++ ] = ( GameObject *) go;
		}

		node = node->next;
	}

	return counter;
}



u16 goManagerFindAllByEntityIds ( listptr *list, GameObject *gos[], u16 id, ... )
{
	u16 counter = 0;

   va_list ap;
   va_start ( ap, id );

   while ( id )
   {
		listptrNode *node = list->head;

		while ( node )
		{
			GameObject *go = (GameObject *) node->pointer;

			if ( go->object->entity->id == id )
			{
				gos [ counter++ ] = ( GameObject *) go;
			}

			node = node->next;
		}

		id = va_arg ( ap, unsigned int );
	}

   va_end ( ap );

	return counter;
}



void goManagerEnd ( listptr *list )
{
	listptr_destroy ( list );
}






void goSetActive ( GameObject *go, u8 active )
{
	go->active = active;
}



void goSetSprite ( GameObject *go, Sprite *sprite )
{
	u16 vram = go->vram;

	go->sprite = sprite;

	u16 flipH = go->object->dir_x < 0 ? go->object->entity->doesFlipH : 0;
	u16 flipV = go->object->dir_y < 0 ? go->object->entity->doesFlipV : 0;

	if ( go->object->flipH ) flipH = flipH ? 0 : 1;
	if ( go->object->flipV ) flipV = flipV ? 0 : 1;


	SYS_disableInts();
	go->sprite = SPR_addSprite
	(
		go->object->entity->sd,
		go->x,
		go->y,
		TILE_ATTR
		(
			go->object->entity->palette,
			go->object->entity->priority,
			flipV,
			flipH
		)
	);
	SYS_enableInts();

	go->vram = vram_new ( SPR_nbTiles ( go->sprite ) );

	SYS_disableInts();
	SPR_setVRAMTileIndex ( go->sprite, go->vram );
	SYS_enableInts();

	SPR_setVisibility ( go->sprite, VISIBLE ); // force load to VRAM even if is not visible
	SPR_setAnim ( go->sprite, go->object->entity->animation );


	preparePal ( go->object->entity->palette, go->object->entity->sd->palette->data );

	if ( vram )
	{
		vram_delete ( vram );
	}
}



void goSetObject ( GameObject *go, Object *object )
{
	if ( go->object->entity->id == object->entity->id )
	{
		return;
	}

	u16 vram = go->vram;

	go->object = object;

	SYS_disableInts();
	SPR_setDefinition ( go->sprite, go->object->entity->sd );
	SYS_enableInts();

	if ( !go->object->entity->doesFlipV  &&  SPR_getVFlip ( go->sprite ) ) SPR_setVFlip( go->sprite, 0 );
	if ( !go->object->entity->doesFlipH  &&  SPR_getHFlip ( go->sprite ) ) SPR_setHFlip( go->sprite, 0 );

	go->vram = vram_new ( SPR_nbTiles ( go->sprite ) );

	SPR_setAnim ( go->sprite, go->object->entity->animation );

	//SPR_setVRAMTileIndex ( go->sprite, go->vram );

//	go->sprite->attribut = ( go->sprite->attribut & TILE_ATTR_MASK ) | go->vram;
//	go->sprite->status |= 0x0001; // NEED_ST_ATTR_UPDATE;
//	go->sprite->timer = 0;

	SYS_disableInts();
	SPR_setVRAMDirect ( go->sprite, go->vram );
	SYS_enableInts();

	if ( vram )
	{
		vram_delete ( vram );
	}
}



void goSetItem ( GameObject *go, Item *item )
{
	go->item = item;
}







GameObject *goCreate ( )
{
	u16 size = sizeof ( GameObject );

	GameObject *go = MEM_alloc ( size );
	memset ( go, 0, size );

	return ( GameObject *) go;
}



void goUpdate ( GameObject *go )
{
	if ( !go->active )
	{
		return;
	}



//	//
//	// for debug; force flipH & flipV
//	//
//	SPR_setHFlip ( go->sprite, 0 );
//	SPR_setVFlip ( go->sprite, 0 );
//	//
//	//
//	//



	// Save previous
	go->prev_y = go->y;
	go->prev_x = go->x;



	if ( go->vel_x != zero )
	{
		//
		// Flip
		//
		if ( go->object->entity->doesFlipH  )
		{
			SPR_setHFlip ( go->sprite, go->vel_x < zero ? 1 : 0 );
		}


		//
		// Momemtum
		//
		if ( go->vel_x > ENTITY_MAX_VEL_X )
		{
			go->vel_x = ENTITY_MAX_VEL_X;
		}
		else if ( go->vel_x < -ENTITY_MAX_VEL_X )
		{
			go->vel_x = -ENTITY_MAX_VEL_X;
		}


		//
		// Update position
		//
		goIncFix32x ( go, go->vel_x );
	}



	//
	// Gravity
	//
	if ( go->grabity  &&  go->object->entity->weight != zero )
	{
		go->vel_y = fix32Add ( go->vel_y, go->object->entity->weight );
	}


	if ( go->vel_y != zero )
	{
		//
		// Flip
		//
		if ( go->object->entity->doesFlipV )
		{
			SPR_setVFlip ( go->sprite, go->vel_y < zero ? 1 : 0 );
		}


		//
		// Momemtum
		//
		if ( go->vel_y > ENTITY_MAX_VEL_Y )
		{
			go->vel_y = ENTITY_MAX_VEL_Y;
		}
		else if ( go->vel_y < -ENTITY_MAX_VEL_Y )
		{
			go->vel_y = -ENTITY_MAX_VEL_Y;
		}


		//
		// Update position
		//
		goIncFix32y ( go, go->vel_y );
	}
}



void goDelete ( GameObject *go )
{
	if ( go->vram )
	{
		vram_delete ( go->vram );
	}

	if ( go->data )
	{
		MEM_free ( go->data );
	}

	go->active = 0;
	go->node   = NULL;

	MEM_free ( go );
	go = NULL;
}












//#include "../inc/include.h"
//
//
//
//
//static void _update ( GameObject *go );
//
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//
//
//
//void goManagerInit ( listptr *list )
//{
//	//
//	// Este "goDelete" es la función que libera dos cosas:
//	//
//	//  1.- Las posiciones VRAM
//	//  2.- Los objetos
//	//
//
//	listptr_new ( list, (listptrFunction) goDelete );
//}
//
//
//
//GameObject *goManagerAdd ( listptr *list, Object *object ) //GameObject *GoManagerCreate ( void (*funcPointer)(GameObject*) )
//{
//	GameObject *go = goCreate ( );
//
//	//funcPointer ( go );
//
//	//go->id      = uniqid ( );
//	go->active  = 1;
//	go->object  = object;
//	go->item    = NULL;
//
//	go->prev_x  = goSetX ( go, go->object->x - scrollHorizontal );
//	go->prev_y  = goSetY ( go, go->object->y - scrollVertical   );
//
//	go->vel_x   = zero;
//	go->vel_y   = zero;
//
//	go->node    = (listptrNode*) listptr_append ( list, (GameObject*) go );
//
//	go->grabity = true;
//
//	go->counter = 0;
//
//
//	if ( go->object->dir_x )
//	{
//		go->vel_x = go->object->vel_x ? go->object->vel_x : go->object->entity->vel_x;
//
//		if ( go->object->dir_x < 0 )
//		{
//			go->vel_x = -go->vel_x;
//		}
//	}
//
//	if ( go->object->dir_y )
//	{
//		go->vel_y = go->object->vel_y ? go->object->vel_y : go->object->entity->vel_y;
//
//		if ( go->object->dir_y < 0 )
//		{
//			go->vel_y = -go->vel_y;
//		}
//	}
//
//	return go;
//}
//
//
//
//void goManagerUpdate ( listptr *list )
//{
//	listptr_foreach ( list, (listptrFunction) goUpdate );
//}
//
//
//
//void goManagerDelete ( listptr *list, GameObject *go )
//{
//	listptr_remove ( list, (listptrNode*) go->node );
//}
//
//
//
//u16 goManagerCount ( listptr *list )
//{
//	return listptr_size ( list );
//}
//
//
//
//GameObject *goManagerFindByIndex ( listptr *list, u16 index )
//{
//	u16 i = 0;
//
//	listptrNode *node = list->head;
//
//	// listptr_append() adds new nodes at the first instead of last
//	// so this line inverts index
//	index = listptr_size ( list ) - index - 1;
//	//
//
//	while ( node )
//	{
//		if ( index == i++ )
//		{
//			return (GameObject *) node->pointer;
//		}
//
//		node = node->next;
//	}
//
//	return NULL;
//}
//
//
//
//GameObject *goManagerFindByEntityId ( listptr *list, u16 id, u8 rep )
//{
//	listptrNode *node = list->head;
//
//	while ( node )
//	{
//		GameObject *go = (GameObject *) node->pointer;
//
//		if ( go->object->entity->id == id && rep-- == 0 )
//		{
//			return (GameObject*) go;
//		}
//
//		node = node->next;
//	}
//
//	return NULL;
//}
//
//
//
//u16 goManagerFindAllByEntityId ( listptr *list, GameObject *gos[], u16 id )
//{
//	u16 counter = 0;
//
//	listptrNode *node = list->head;
//
//	while ( node )
//	{
//		GameObject *go = (GameObject *) node->pointer;
//
//		if ( go->object->entity->id == id )
//		{
//			gos [ counter++ ] = ( GameObject *) go;
//		}
//
//		node = node->next;
//	}
//
//	return counter;
//}
//
//
//
//u16 goManagerFindAllByEntityIds ( listptr *list, GameObject *gos[], u16 id, ... )
//{
//	u16 counter = 0;
//
//   va_list ap;
//   va_start ( ap, id );
//
//   while ( id )
//   {
//		listptrNode *node = list->head;
//
//		while ( node )
//		{
//			GameObject *go = (GameObject *) node->pointer;
//
//			if ( go->object->entity->id == id )
//			{
//				gos [ counter++ ] = ( GameObject *) go;
//			}
//
//			node = node->next;
//		}
//
//		id = va_arg ( ap, unsigned int );
//	}
//
//   va_end ( ap );
//
//	return counter;
//}
//
//
//
//void goManagerEnd ( listptr *list )
//{
//	listptr_destroy ( list );
//}
//
//
//
//
//
//void goSetSprite ( GameObject *go, Sprite *sprite )
//{
//	u16 vram = go->vram;
//
//	go->sprite = sprite;
//
//	u16 flipH = go->object->dir_x < 0 ? go->object->entity->doesFlipH : 0;
//	u16 flipV = go->object->dir_y < 0 ? go->object->entity->doesFlipV : 0;
//
//	if ( go->object->flipH ) flipH = flipH ? 0 : 1;
//	if ( go->object->flipV ) flipV = flipV ? 0 : 1;
//
//	SYS_disableInts();
//
//	go->sprite = SPR_addSprite
//	(
//		go->object->entity->sd,
//		go->x,
//		go->y,
//		TILE_ATTR
//		(
//			go->object->entity->palette,
//			go->object->entity->priority,
//			flipV,
//			flipH
//		)
//	);
//
//	go->vram = vram_new ( SPR_nbTiles ( go->sprite ) );
//	SPR_setVRAMTileIndex ( go->sprite, go->vram );
//	SPR_setVisibility ( go->sprite, VISIBLE ); // force load to VRAM even if is not visible
//	SPR_setAnim ( go->sprite, go->object->entity->animation );
//	preparePal ( go->object->entity->palette, go->object->entity->sd->palette->data );
//
//	SYS_enableInts();
//
//
//	if ( vram )
//	{
//		vram_delete ( vram );
//	}
//}
//
//
//
//void goSetObject ( GameObject *go, Object *object )
//{
//	if ( go->object->entity->id == object->entity->id )
//	{
//		return;
//	}
//
//	go->object = object;
//
//	if ( go->active )
//	{
//		_update ( go );
//	}
//}
//
//
//
//void goSetActive ( GameObject *go, u8 active )
//{
//	if ( go->active == active )
//	{
//		return;
//	}
//
//	go->active = active;
//
//	if ( active )
//	{
//		_update ( go );
//	}
//}
//
//
//
//
//void goSetItem ( GameObject *go, Item *item )
//{
//	go->item = item;
//}
//
//
//
//
//
//
//
//GameObject *goCreate ( )
//{
//	u16 size = sizeof ( GameObject );
//
//	GameObject *go = MEM_alloc ( size );
//	memset ( go, 0, size );
//
//	return ( GameObject *) go;
//}
//
//
//
//void goUpdate ( GameObject *go )
//{
//	if ( !go->active )
//	{
//		return;
//	}
//
//
//
////	//
////	// for debug; force flipH & flipV
////	//
////	SPR_setHFlip ( go->sprite, 0 );
////	SPR_setVFlip ( go->sprite, 0 );
////	//
////	//
////	//
//
//
//
//	// Save previous
//	go->prev_y = go->y;
//	go->prev_x = go->x;
//
//
//
//	if ( go->vel_x != zero )
//	{
//		//
//		// Flip
//		//
//		if ( go->object->entity->doesFlipH  )
//		{
//			SPR_setHFlip ( go->sprite, go->vel_x < zero ? 1 : 0 );
//		}
//
//
//		//
//		// Momemtum
//		//
//		if ( go->vel_x > ENTITY_MAX_VEL_X )
//		{
//			go->vel_x = ENTITY_MAX_VEL_X;
//		}
//		else if ( go->vel_x < -ENTITY_MAX_VEL_X )
//		{
//			go->vel_x = -ENTITY_MAX_VEL_X;
//		}
//
//
//		//
//		// Update position
//		//
//		goIncFix32x ( go, go->vel_x );
//	}
//
//
//
//	//
//	// Gravity
//	//
//	if ( go->grabity  &&  go->object->entity->weight != zero )
//	{
//		go->vel_y = fix32Add ( go->vel_y, go->object->entity->weight );
//	}
//
//
//	if ( go->vel_y != zero )
//	{
//		//
//		// Flip
//		//
//		if ( go->object->entity->doesFlipV )
//		{
//			SPR_setVFlip ( go->sprite, go->vel_y < zero ? 1 : 0 );
//		}
//
//
//		//
//		// Momemtum
//		//
//		if ( go->vel_y > ENTITY_MAX_VEL_Y )
//		{
//			go->vel_y = ENTITY_MAX_VEL_Y;
//		}
//		else if ( go->vel_y < -ENTITY_MAX_VEL_Y )
//		{
//			go->vel_y = -ENTITY_MAX_VEL_Y;
//		}
//
//
//		//
//		// Update position
//		//
//		goIncFix32y ( go, go->vel_y );
//	}
//}
//
//
//
//void goDelete ( GameObject *go )
//{
//	if ( go->vram )
//	{
//		vram_delete ( go->vram );
//	}
//
//	go->active = 0;
//	go->node   = NULL;
//
//	MEM_free ( go );
//	go = NULL;
//}
//
//
//
//
//
//
//static void _update ( GameObject *go )
//{
//	u16 vram = go->vram;
//
//	SYS_disableInts();
//
//	SPR_setDefinition ( go->sprite, go->object->entity->sd );
//
//	if ( !go->object->entity->doesFlipV  &&  SPR_getVFlip ( go->sprite ) ) SPR_setVFlip( go->sprite, 0 );
//	if ( !go->object->entity->doesFlipH  &&  SPR_getHFlip ( go->sprite ) ) SPR_setHFlip( go->sprite, 0 );
//
//	go->vram = vram_new ( SPR_nbTiles ( go->sprite ) );
//
//	SPR_setAnim ( go->sprite, go->object->entity->animation );
//
//	//SPR_setVRAMTileIndex ( go->sprite, go->vram );
//
////	go->sprite->attribut = ( go->sprite->attribut & TILE_ATTR_MASK ) | go->vram;
////	go->sprite->status |= 0x0001; // NEED_ST_ATTR_UPDATE;
////	go->sprite->timer = 0;
//
//	SPR_setVRAMDirect ( go->sprite, go->vram );
//
//	SYS_enableInts();
//
//	if ( vram )
//	{
//		vram_delete ( vram );
//	}
//}











