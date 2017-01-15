#include "../inc/include.h"





static s16 _get_tartet_x ( GameObject *go )
{
	return goGetCenterX ( player.go );
}


static s16 _get_tartet_y ( GameObject *go )
{
	return goGetCenterY ( player.go );
}



void enemy_coco ( GameObject *go )
{
	if ( vtimer % 30 )
	{
		return;
	}


	s16 coco_x = goGetCenterX ( go );
	s16 coco_y = goGetCenterY ( go );


	if ( coco_y+scrollVertical > 124 ) goSetY ( go, 156 );
	if ( coco_x                > 238 ) goSetX ( go, 238 );
	if ( coco_x                <   2 ) goSetX ( go,   2 );

	Vect2D_f32 pos =
	{
		FIX32 ( _get_tartet_x(go) - coco_x ),
		FIX32 ( _get_tartet_y(go) - coco_y )
	};

	Vect2D_f32 abs =
	{
		( pos.x < 0 ) ? - pos.x : pos.x,
		( pos.y < 0 ) ? - pos.y : pos.y
	};

	go->vel_x = 0;
	go->vel_y = 0;



	if ( abs.x > abs.y )
	{
		if ( pos.x > 0 ) go->vel_x = +go->object->entity->vel_x;
		else             go->vel_x = -go->object->entity->vel_x;

		if ( abs.y == zero ) abs.y = FIX32(5);

		fix32 div = fix32Div ( abs.x, abs.y );

		if ( div == zero ) div = FIX32 ( random() % 2 ? +5 : -5 );

		if ( pos.y > 0 ) go->vel_y = +fix32Div ( ABS(go->vel_x), div );
		else             go->vel_y = -fix32Div ( ABS(go->vel_x), div );
	}

	else
	{
		if ( pos.y > 0 ) go->vel_y = +go->object->entity->vel_y;
		else             go->vel_y = -go->object->entity->vel_y;

		if ( abs.x == zero ) abs.x = FIX32(5);

		fix32 div = fix32Div ( abs.y, abs.x );

		if ( div == zero ) div = FIX32 ( random() % 2 ? +5 : -5 );

		if ( pos.x > 0 ) go->vel_x = +fix32Div ( ABS(go->vel_y), div );
		else             go->vel_x = -fix32Div ( ABS(go->vel_y), div );
	}


//	if ( abs.x > abs.y )
//	{
//		if ( pos.x > 0 ) go->vel_x = +go->object->entity->vel_x;
//		if ( pos.x < 0 ) go->vel_x = -go->object->entity->vel_x;
//
//		if ( abs.y == zero ) abs.y = FIX32(15);
//
//		div = fix32Div ( abs.x, abs.y );
//
//		if ( div == zero ) div = FIX32 ( random() % 2 ? +5 : -5 );
//
//		if ( pos.y > 0 ) go->vel_y = +fix32Div ( ABS(go->vel_x), div );
//		if ( pos.y < 0 ) go->vel_y = -fix32Div ( ABS(go->vel_x), div );
//	}
//
//	if ( abs.x < abs.y )
//	{
//		if ( pos.y > 0 ) go->vel_y = +go->object->entity->vel_y;
//		if ( pos.y < 0 ) go->vel_y = -go->object->entity->vel_y;
//
//		if ( abs.x == zero ) abs.x = FIX32(15);
//
//		div = fix32Div ( abs.y, abs.x );
//
//		if ( div == zero ) div = FIX32 ( random() % 2 ? +5 : -5 );
//
//		if ( pos.x > 0 ) go->vel_x = +fix32Div ( ABS(go->vel_y), div );
//		if ( pos.x < 0 ) go->vel_x = -fix32Div ( ABS(go->vel_y), div );
//	}

}
