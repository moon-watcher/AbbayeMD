#include "../inc/include.h"



Object *objectCreate ( )
{
	return (Object *) MEM_alloc ( sizeof ( Object ) );
}



void objectDelete ( Object *object )
{
	MEM_free ( object );
	object = NULL;
}



u16 objectIsItem ( Object *object )
{
	return in_array ( object->entity->type, (u16[]) { ITEM_LIST, 0 } );
}



u16 objectIsDoor ( Object *object )
{
	return in_array ( object->entity->type, (u16[]) { ITEM_IS_DOOR, 0 } );
}



u16 objectIsItemRemovable ( Object *object )
{
	return in_array ( object->entity->type, (u16[]) { ITEM_IS_REMOVABLE, 0 } );
}




s8 objectGetPaddingTop ( Object *object )
{
	return object->entity->padding.top;
}


s8 objectGetPaddingLeft ( Object *object )
{
	return object->entity->padding.left;
}


s8 objectGetPaddingRight ( Object *object )
{
	return object->entity->padding.right;
}


s8 objectGetPaddingBottom ( Object *object )
{
	return object->entity->padding.bottom;
}





u8 objectGetWidth  ( Object *object )
{
	return object->entity->sd->animations[0]->frames[0]->w;
}


u8 objectGetHeight ( Object *object )
{
	return object->entity->sd->animations[0]->frames[0]->h;
}
