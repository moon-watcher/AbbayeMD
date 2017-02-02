#include "../inc/include.h"



static s16 coco_x;
static s16 coco_y;
static s16 player_x;
static s16 player_y;



static s16 _get_tartet_x ( GameObject *go )
{
//	u16 dis_y = ABS ( coco_y - player_y );
//
//	if ( coco_y > player_y ) player_x += ( dis_y / 1 );
//	if ( coco_y < player_y ) player_x -= ( dis_y / 1 );


//	u16 dis_x = ABS ( coco_x - player_x );
//	u16 dis_y = ABS ( coco_y - player_y );
//
//	dis_x = ( dis_y + dis_x ) / 2;
//
//	if ( coco_y > player_y ) player_x -= ( dis_x );
//	if ( coco_y < player_y ) player_x += ( dis_x );


	player_x += ( ( player_x - coco_x ) / 1 );



	return player_x;
}


static s16 _get_tartet_y ( GameObject *go )
{
	player_y += ( ( player_y - coco_y ) / 1 );



	return player_y;
}



void enemy_coco ( GameObject *go )
{
	if ( vtimer % 20 ) // % 30
	{
		return;
	}

	coco_x   = goGetCenterX ( go );
	coco_y   = goGetCenterY ( go );
	player_x = goGetCenterX ( player.go );
	player_y = goGetCenterY ( player.go );


	if ( coco_y+scrollVertical > 124 ) goSetY ( go, 156 );
	if ( coco_x                > 238 ) goSetX ( go, 238 );
	if ( coco_x                <   2 ) goSetX ( go,   2 );

	Vect2D_f32 pos =
	{
		FIX32 ( _get_tartet_x ( go ) - coco_x ),
		FIX32 ( _get_tartet_y ( go ) - coco_y )
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
