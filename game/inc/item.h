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

	u8           hidden;
	u8           checked;
	s16          value;

	listptrNode *node;

	//void        *go; // GameObject
}
Item;



void  itemManagerInit      ( listptr *list );
Item *itemManagerAdd       ( listptr *list, u8 id, u8 room_x, u8 room_y, u8 checked, u8 hidden, s16 value );
Item *itemManagerFind      ( listptr *list, u8 id, u8 room_x, u8 room_y );
void  ItemManagerDelete    ( listptr *list, Item *item );
u16   ItemManagerLength    ( listptr *list );
void  itemManagerShow      ( listptr *list, u8 x, u8 y );
void  itemManagerEnd       ( listptr *list );

Item *itemCreate           ( );
void  itemDelete           ( Item *item );

void  itemSetGameObject    ( Item *item, void *gameobject );
void  itemSetRoom          ( Item *item, u8 x, u8 y );
u8    itemIsHidden         ( Item *item );
u8    itemIsVisible        ( Item *item );
void  itemSetHidden        ( Item *item );
void  itemSetVisible       ( Item *item );
u8    itemGetChecked       ( Item *item );
bool  itemSetChecked       ( Item *item, u16 value );
s16   itemGetValue         ( Item *item );
void  itemSetValue         ( Item *item, s16 value );
s16   itemIncValue         ( Item *item, s16 value );


#endif // _ITEM_H_
