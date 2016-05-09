#include "../inc/include.h"



//sprites_init ( Room *room, Sprite *sprites )
//{
////	SPR_init ( 0 );
////
////
////	u16 i, count = objects_count ( room );
////
////	sprites = MEM_alloc ( sizeof(Sprite) * count );
////
////	Sprite sss[count];
////
////	for ( i = 0; i < count; i ++ )
////	{
////		Object o = room->objects->array[i];
////
////		SPR_initSprite
////		(
////			sprites+i,
////			(SpriteDefinition*) o.entity->sd,
////			fix32ToRoundedInt ( o.x ),
////			fix32ToRoundedInt ( o.y ),
////			TILE_ATTR ( o.entity->palette, 0, 0, 0 )
////		);
////
////		SPR_setAnim ( sprites, o.entity->animation );
////		SPR_setVRAMTileIndex ( sprites, vram_new ( SPR_nbTiles ( sprites ) )  );
////		*sprites++;
////	}
////
////	SPR_update(sprites,count);
//
//
//
//
//
//
////	u16 i;
////
////
////	_nb_objects = objects_count();
////	_sprites    = (Sprite *) MEM_alloc ( sizeof(Sprite) * _nb_objects );
////	_objects    = (Object *) MEM_alloc ( sizeof(Object) * _nb_objects );
////
////	for ( i=0; i < _nb_objects; i++ )
////	{
////		_objects[i] = objects_get ( i ) ;
////
////		SPR_initSprite (
////			(Sprite*) &_sprites[i],
////			(SpriteDefinition*) _objects[i].entity->sd,
////			fix32ToRoundedInt ( _objects[i].x ),
////			fix32ToRoundedInt ( _objects[i].y ),
////			TILE_ATTR ( _objects[i].entity->palette, 0, 0, 0 )
////		);
////
////		SPR_setAnim ( (Sprite*) &_sprites[i], _objects[i].entity->animation );
////		SPR_setVRAMTileIndex ( (Sprite*) &_sprites[i], vram_new ( SPR_nbTiles ( &_sprites[i] ) )  );
////
////		_objects[i].sprite = &_sprites[i];
////	}
////
////
////
////	#include "../inc/data/entities.h"
////
////	// añade a Jean
////	_nb_objects = _nb_objects + 1;
////	_sprites    = (Sprite *) realloc ( _sprites, sizeof(Sprite) * _nb_objects );
////	_objects    = (Object *) realloc ( _objects, sizeof(Object) * _nb_objects );
////
////	_objects[_nb_objects-1].entity = (Entity*)&entity_md_01;
////	_objects[_nb_objects-1].x      =  20;
////	_objects[_nb_objects-1].y      =  20;
////	_objects[_nb_objects-1].sprite = &_sprites[_nb_objects-1];
////
////	SPR_initSprite (
////		(Sprite*) &_sprites[_nb_objects-1],
////		(SpriteDefinition*) _objects[_nb_objects-1].entity->sd,
////		fix32ToRoundedInt (_objects[_nb_objects-1].x ),
////		fix32ToRoundedInt ( _objects[_nb_objects-1].y ),
////		TILE_ATTR ( _objects[_nb_objects-1].entity->palette, 0, 0, 0 )
////	);
////
////	SPR_setAnim ( (Sprite*) &_sprites[_nb_objects-1], _objects[_nb_objects-1].entity->animation );
////	SPR_setVRAMTileIndex ( (Sprite*) &_sprites[_nb_objects-1], vram_new ( SPR_nbTiles ( &_sprites[_nb_objects-1] ) )  );
//
//}
