#ifndef _ITEM_H_
#define _ITEM_H_



//#define itemAdd(list,id)   itemManagerAdd  ( (list), (id), game.room.x, game.room.y, 0, 0, 0 )
//#define itemFind(list,id)  itemManagerFind ( (list), (id), game.room.x, game.room.y )




#define ITEM_LIST          ENTITY_HINT, ENTITY_CROSS, ENTITY_HEART, ENTITY_INV_CROSS, ENTITY_CHECKPOINT, ENTITY_DOOR, ENTITY_HATCH, ENTITY_SWITCH
#define ITEM_IS_REMOVABLE  ENTITY_HINT, ENTITY_CROSS, ENTITY_HEART, ENTITY_INV_CROSS
#define ITEM_IS_DOOR       ENTITY_DOOR, ENTITY_HATCH
#define ITEM_IS_CROSS      ENTITY_CROSS, ENTITY_INV_CROSS



typedef struct
{
	u8           id;

	u8           room_x;
	u8           room_y;

	bool         checked;
	bool         visible;
	s32          value;

	listptrNode *node;
}
Item;



void  itemManagerInit      ( listptr *list );
Item *itemManagerAdd       ( listptr *list, u8 id, u8 room_x, u8 room_y, bool checked, bool visible, s32 value );
Item *itemManagerFind      ( listptr *list, u8 id, u8 room_x, u8 room_y );
void  ItemManagerDelete    ( listptr *list, Item *item );
u16   ItemManagerLength    ( listptr *list );
void  itemManagerShow      ( listptr *list );
void  itemManagerEnd       ( listptr *list );

Item *itemCreate           ( );
void  itemDelete           ( Item *item );

bool  itemGetVisible       ( Item *item );
void  itemSetVisible       ( Item *item, bool value );
bool  itemGetChecked       ( Item *item );
void  itemSetChecked       ( Item *item, bool value );
s32   itemGetValue         ( Item *item );
s32   itemIncValue         ( Item *item, s32 value );
void  itemSetValue         ( Item *item, s32 value );


#endif // _ITEM_H_
