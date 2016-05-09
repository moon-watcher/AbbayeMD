#include "../inc/include.h"



u16 entityIsItem ( EntityType entity )
{
	return in_array ( entity, (u16[]) { ITEM_LIST, 0 } );
}



u16 entityIsItemRemovable ( EntityType entity )
{
	return in_array ( entity, (u16[]) { ITEM_IS_REMOVABLE, 0 } );
}
