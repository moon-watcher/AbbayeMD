#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_



typedef struct
{
	//u16          id;
	listptrNode *node;

	u8           active;

	Object      *object;
	Sprite      *sprite;
	Item        *item;

	s16          prev_x, x;
	s16          prev_y, y;

	fix32        fix32x, vel_x; // ambos son fix32 para poder incremetarle valores decimales
	fix32        fix32y, vel_y; // ambos son fix32 para poder incremetarle valores decimales

	u16          vram;

	bool         grabity;

	// for other stuff
	s32          counter;
}
GameObject;



#define goGetPaddingHorizontal(go,val)  ( SPR_getHFlip ( (go)->sprite ) == (val) ? (go)->object->entity->padding.left : (go)->object->entity->padding.right  )
#define goGetPaddingVertical(go,val)    ( SPR_getVFlip ( (go)->sprite ) == (val) ? (go)->object->entity->padding.top  : (go)->object->entity->padding.bottom )

#define goGetLeft(go)                   (                                  goGetPaddingHorizontal((go),0) + scrollHorizontal + (go)->x )
#define goGetRight(go)                  ( SPR_getWidth  ( (go)->sprite ) - goGetPaddingHorizontal((go),1) + scrollHorizontal + (go)->x )
#define goGetTop(go)                    (                                  goGetPaddingVertical((go),0)   + scrollVertical   + (go)->y )
#define goGetBottom(go)                 ( SPR_getHeight ( (go)->sprite ) - goGetPaddingVertical((go),1)   + scrollVertical   + (go)->y )

#define goGetLeftPos(go,pos)            (                                  goGetPaddingHorizontal((go),0) + scrollHorizontal + (pos)   )
#define goGetRightPos(go,pos)           ( SPR_getWidth  ( (go)->sprite ) - goGetPaddingHorizontal((go),1) + scrollHorizontal + (pos)   )
#define goGetTopPos(go,pos)             (                                  goGetPaddingVertical((go),0)   + scrollVertical   + (pos)   )
#define goGetBottomPos(go,pos)          ( SPR_getHeight ( (go)->sprite ) - goGetPaddingVertical((go),1)   + scrollVertical   + (pos)   )

#define goGetWidth(go)                  ( SPR_getWidth  ( (go)->sprite ) - (go)->object->entity->padding.left - (go)->object->entity->padding.right  )
#define goGetHeight(go)                 ( SPR_getHeight ( (go)->sprite ) - (go)->object->entity->padding.top  - (go)->object->entity->padding.bottom )

#define goGetCenterX(go)                ( ( goGetPaddingHorizontal((go),0) >> 1 ) + scrollHorizontal + (go)->x )
#define goGetCenterY(go)                ( ( goGetPaddingVertical((go),0)   >> 1 ) + scrollVertical   + (go)->y )

#define goSetX(go,value)                ({ (go)->x = (value);  (go)->fix32x = intToFix32 ( (go)->x );  (go)->x; })
#define goSetY(go,value)                ({ (go)->y = (value);  (go)->fix32y = intToFix32 ( (go)->y );  (go)->y; })
#define goSetXY(go,vx,vy)               ({ (go)->x = (vx);     (go)->fix32x = intToFix32 ( (go)->x );  (go)->y = (vy);     (go)->fix32y = intToFix32 ( (go)->y ); })

#define goIncX(go,value)		        ({ (go)->x += (value);  (go)->fix32x = intToFix32 ( (go)->x );  (go)->x; })
#define goIncY(go,value)		        ({ (go)->y += (value);  (go)->fix32y = intToFix32 ( (go)->y );  (go)->y; })

#define goIncFix32x(go,value)           ({ (go)->fix32x = fix32Add ( (go)->fix32x, (value) );  (go)->x = fix32ToInt ( (go)->fix32x );  (go)->x; })
#define goIncFix32y(go,value)           ({ (go)->fix32y = fix32Add ( (go)->fix32y, (value) );  (go)->y = fix32ToInt ( (go)->fix32y );  (go)->y; })

#define goIsMovingHorizontally(go)      ( (go)->vel_x != zero )
#define goIsMovingVertically(go)        ( (go)->vel_y != zero )

#define goRestoreX(go)                  goSetX ( (go), (go)->prev_x )
#define goRestoreY(go)                  goSetY ( (go), (go)->prev_y )




void        goManagerInit               ( listptr *list );
GameObject *goManagerAdd                ( listptr *list, Object *object ); //GameObject *GoManagerCreate ( void (*funcPointer)(GameObject*) );
void        goManagerUpdate             ( listptr *list );
u16         goManagerCount              ( listptr *list );
void        goManagerDelete             ( listptr *list, GameObject *go );
GameObject *goManagerFindByIndex        ( listptr *list, u16 index );
GameObject *goManagerFindByEntityId     ( listptr *list, u16 id, u8 rep );
u16         goManagerFindAllByEntityId  ( listptr *list, GameObject *gos[], u16 id );
u16         goManagerFindAllByEntityIds ( listptr *list, GameObject *gos[], u16 id, ... );
void        goManagerEnd                ( listptr *list );

void        goSetSprite                 ( GameObject *go, Sprite *sprite );
void        goSetObject                 ( GameObject *go, Object *object );
void        goSetItem                   ( GameObject *go, Item   *item   );
void        goSetActive                 ( GameObject *go, u8 active );

GameObject *goCreate                    ( );
void        goUpdate                    ( GameObject *go );
void        goDelete                    ( GameObject *go );



#endif // _GAMEOBJECT_H_
