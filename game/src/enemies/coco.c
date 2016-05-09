#include "../inc/include.h"







void enemy_coco ( GameObject *go )
{
	s16 jean_x = goGetCenterX ( player.go );
	s16 jean_y = goGetCenterY ( player.go );
	s16 coco_x = goGetCenterX ( go );
	s16 coco_y = goGetCenterY ( go );


	if ( coco_y+scrollVertical > 124 ) goSetY ( go, 156 );
	if ( coco_x > 238 ) goSetX ( go, 238 );
	if ( coco_x < 2 ) goSetX ( go, 2 );


	if ( vtimer % 30 == 0 )
	{
		s16 pasos_x = jean_x - coco_x;
		s16 pasos_y = jean_y - coco_y;

		go->vel_x = 0;
		go->vel_y = 0;


		if ( ABS(pasos_x) > ABS(pasos_y) )
		{
			if ( pasos_x > 0 ) go->vel_x = +go->object->entity->vel_x;
			else               go->vel_x = -go->object->entity->vel_x;

			while ( pasos_y == 0 )
			{
				pasos_y = random ( ) % 90 + 80;

				if ( random() % 2 == 0 )
				{
					pasos_y = -pasos_y ;
				}
			}


			fix32 div = fix32Div ( intToFix32(ABS(pasos_x)), intToFix32(ABS(pasos_y)) );

			while ( div == zero )
			{
				div = FIX32 ( random() % 2 ? +5 : -5 );
			}

			fix32 vel = fix32Div ( ABS(go->vel_x), div );

			if ( pasos_y > 0 ) go->vel_y = +vel;
			else               go->vel_y = -vel;
		}
		else
		{
			if ( pasos_y > 0 ) go->vel_y = +go->object->entity->vel_y;
			else               go->vel_y = -go->object->entity->vel_y;

			while ( pasos_x == 0 )
			{
				pasos_x = random ( ) % 90 + 80;

				if ( random() % 2 == 0 )
				{
					pasos_x = -pasos_x;
				}
			}


			fix32 div = fix32Div ( intToFix32(ABS(pasos_y)), intToFix32(ABS(pasos_x)) );

			while ( div == zero )
			{
				div = FIX32 ( random() % 2 ? +5 : -5 );
			}

			fix32 vel = fix32Div ( ABS(go->vel_y), div );

			if ( pasos_x > 0 ) go->vel_x = +vel;
			else               go->vel_x = -vel;
		}
	}
}


















//void enemy_coco ( GameObject *go )
//{
//	if ( vtimer % 30 == 0 )
//	{
//		s16 jean_x = goGetCenterX ( player.go );
//		s16 jean_y = goGetCenterY ( player.go );
//		s16 coco_x = goGetCenterX ( go );
//		s16 coco_y = goGetCenterY ( go );
//
//		s16 pasos_x = jean_x - coco_x;
//		s16 pasos_y = jean_y - coco_y;
//
//
//		go->vel_x = 0;
//		go->vel_y = 0;
//
//
//		if ( ABS(pasos_x) > ABS(pasos_y) )
//		{
//			if ( pasos_x > 0 ) go->vel_x = +go->object->entity->vel_x;
//			if ( pasos_x < 0 ) go->vel_x = -go->object->entity->vel_x;
//
//			while ( pasos_y == 0 )
//			{
//				pasos_y = random ( ) % 90 + 80;
//
//				if ( random() % 2 == 0 )
//				{
//					pasos_y = -pasos_y ;
//				}
//			}
//
//			if ( pasos_x == 0 )
//			{
//				pasos_x=1;
//			}
//
//			fix32 vel = fix32Div ( ABS(go->vel_x), fix32Div ( intToFix32(ABS(pasos_x)), intToFix32(ABS(pasos_y)) ) );
//
//			if ( pasos_y > 0 ) go->vel_y = +vel;
//			if ( pasos_y < 0 ) go->vel_y = -vel;
//		}
//		else
//		{
//			if ( pasos_y > 0 ) go->vel_y = +go->object->entity->vel_y;
//			if ( pasos_y < 0 ) go->vel_y = -go->object->entity->vel_y;
//
//			while ( pasos_x == 0 )
//			{
//				pasos_x = random ( ) % 90 + 80;
//
//				if ( random() % 2 == 0 )
//				{
//					pasos_x = -pasos_x;
//				}
//			}
//
//			if ( pasos_y == 0 )
//			{
//				pasos_y=1;
//			}
//
//			fix32 vel = fix32Div ( ABS(go->vel_y), fix32Div ( intToFix32(ABS(pasos_y)), intToFix32(ABS(pasos_x)) ) );
//
//			if ( pasos_x > 0 ) go->vel_x = +vel;
//			if ( pasos_x < 0 ) go->vel_x = -vel;
//		}
//	}
//}














//static s16	_safe_pos ( s16 paso )
//{
//	while ( paso == 0 )
//	{
//		paso = random ( ) % 120 + 90;
//
//		if ( random() % 2 == 0 )
//		{
//			paso = -paso;
//		}
//	}
//
//	return paso;
//}
//
//
//
//
//void enemy_coco ( GameObject *go )
//{
//	if ( vtimer % 30 == 0 )
//	{
//		s16 jean_x = goGetCenterX ( player.go );
//		s16 jean_y = goGetCenterY ( player.go );
//		s16 coco_x = goGetCenterX ( go );
//		s16 coco_y = goGetCenterY ( go );
//
//		s16 pasos_x = jean_x - coco_x;
//		s16 pasos_y = jean_y - coco_y;
//
//		pasos_y = _safe_pos ( pasos_y );
//		pasos_x = _safe_pos ( pasos_x );
//
//		go->vel_x = +go->object->entity->vel_x;
//		go->vel_y = +go->object->entity->vel_y;
//
//
//		if ( ABS(pasos_x) > ABS(pasos_y) )
//		{
//			if ( pasos_x < 0 )
//			{
//				go->vel_x = -go->object->entity->vel_x;
//			}
//
//			go->vel_y = fix32Div ( ABS(go->vel_x), fix32Div ( intToFix32(ABS(pasos_x)), intToFix32(ABS(pasos_y)) ) );
//
//			if ( pasos_y < 0 )
//			{
//				go->vel_y = -go->vel_y;
//			}
//		}
//		else
//		{
//			if ( pasos_y < 0 )
//			{
//				go->vel_y = -go->object->entity->vel_y;
//			}
//
//			go->vel_x = fix32Div ( ABS(go->vel_y), fix32Div ( intToFix32(ABS(pasos_y)), intToFix32(ABS(pasos_x)) ) );
//
//			if ( pasos_x < 0 )
//			{
//				go->vel_x = -go->vel_x;
//			}
//		}
//	}
//}











//	if ( archer->counter == data->timer[0] )
//	{
//		archer->counter = 0;
//
//		SPR_setFrame ( archer->sprite, 0 ) ;
//
//		setActive ( arrow, 1 );
//
//		s16 x = goGetCenterX ( archer );
//
//		goSetXY ( arrow, x, archer->y + 10 );
//
//
//		if ( dir )
//		{
//			arrow->vel_x = -arrow->object->entity->vel_x;
//		}
//		else
//		{
//			arrow->vel_x = +arrow->object->entity->vel_x;
//		}
//
//		play_fx ( FX_SHOT );
//	}
//
//	if ( archer->counter == 30 )
//	{
//		SPR_setFrame ( archer->sprite, 1 ) ;
//	}
//
//	SPR_setTimer ( archer->sprite, 1000 ) ;
//
//
//	++archer->counter;
//
//	SPR_setHFlip ( archer->sprite, dir );
//}
