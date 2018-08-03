#ifndef _ENTITY_H_
#define _ENTITY_H_



#define ENTITY_MAX_VEL_X FIX32(7.5)
#define ENTITY_MAX_VEL_Y FIX32(7.5)



typedef struct
{
	s8 top;
	s8 right;
	s8 bottom;
	s8 left;
}
Padding;



typedef enum
{
	ENTITY_NULL,
	ENTITY_HINT,
	ENTITY_PLAYER,
	ENTITY_ENEMY,
	ENTITY_CHECKPOINT,
	ENTITY_GRIAL,
	ENTITY_HEART,
	ENTITY_CROSS,
	ENTITY_INV_CROSS,
	ENTITY_SWITCH,
	ENTITY_DOOR,
	ENTITY_HATCH,
	ENTITY_PASSAGE,

	ENTITY_MAX
}
EntityType;



typedef struct
{
	u8                id;
	char             *name;
	u8                animation;
	SpriteDefinition *sd;
	u16               palette;
	EntityType        type;
	fix32             vel_x;
	fix32             vel_y;
	fix32             weight;
	u8                priority;
	u8                doesFlipH; // does it flips horizontally?
	u8                doesFlipV; // does it flips vertically?
	u8               *sequence;
	McbPtrFn          mcbFn;
	u16              *timer; //  an array of time orderer by the sequence
	Padding           padding;

	// add frame speed // look it in sprite_eng
}
Entity;



u16 entityIsItem          ( EntityType entity );
u16 entityIsItemRemovable ( EntityType entity );


#endif // _ENTITY_H_
