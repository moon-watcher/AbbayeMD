#include "../inc/include.h"



// "ocb" stands for Object Collision Behaviours




void ocb_collisions ( GameObject *go, Player *player )
{
	EntityType goType = goGetEntityType ( go );

	if ( goType == ENTITY_PLAYER  ||  goType == ENTITY_NULL  ||  !go->active  ||  goGetEntityType ( player->go ) != ENTITY_PLAYER )
	{
		return;
	}

	devu2++;

	s16 left  = MAX ( goGetLeft  ( go ), goGetLeft  ( player->go ) );
	s16 right = MIN ( goGetRight ( go ), goGetRight ( player->go ) );

	if ( left >= right )
	{
		return;
	}


	s16 top    = MAX ( goGetTop    ( go ), goGetTop    ( player->go ) );
	s16 bottom = MIN ( goGetBottom ( go ), goGetBottom ( player->go ) );

	if ( top >= bottom )
	{
		return;
	}



	switch ( goType )
	{
		case ENTITY_ENEMY:

			if ( DEVELOPEMENT && player->invulnerable )
			{
				break;
			}

			if ( enemy_exceptions ( go ) )
			{
				break;
			}

			play_fx ( FX_HIT );
			playerSetAction ( player, PLAYER_BURNS );

			break;


		case ENTITY_CHECKPOINT:

			play_fx ( FX_DOOR );
			//itemSetChecked ( go->item, 1 );
			checkpoint_save ( go );

			break;


		case ENTITY_HINT:

			play_fx ( FX_ITEM );
			//hint_show ( go );
			hint_show ( false );
			itemSetHidden ( go->item );
			setActive ( go, 0 );

			enemy_reset_satan = true;

			break;


		case ENTITY_CROSS:

			play_fx ( FX_ITEM );
			hudIncCrosses ( +1 );
			itemSetHidden ( go->item );
			setActive ( go, 0 );

			break;


		case ENTITY_HEART:

			play_fx ( FX_ITEM );
			hudIncHearts ( +1 );
			itemSetHidden ( go->item );
			setActive ( go, 0 );

			break;


		case ENTITY_DOOR:

			goRestoreX ( player->go );
			player->go->vel_x = zero;
			goIncX ( player->go, SPR_getHFlip ( player->go->sprite ) ? +1 : -1 );

			break;


		case ENTITY_SWITCH:

			switch_touched ( go );

			break;


		case ENTITY_PASSAGE:

			passage_touched ( );

			break;


		case ENTITY_GRIAL:

			itemSetHidden ( go->item );
			setActive ( go, 0 );

			musicStop();
			play_fx ( FX_SWITCH );
			waitHz ( getHz ( ) );

			player->grial = true;

			break;


		default: break;
	}

}





//
//#define OBJECTIS(t)   ( go->object->entity->type == (t) || next->object->entity->type == (t) )
//#define GOGET(t)      ( go->object->entity->type == (t) ? go : next )
//
//
//// Combination of all objects. Too slow for Genny :(
//
//void ocb_collisions ( GameObject *go, Player *player )
//{
//	s16 nx1, x1 = goGetLeft   ( go );
//	s16 nx2, x2 = goGetRight  ( go );
//	s16 ny1, y1 = goGetTop    ( go );
//	s16 ny2, y2 = goGetBottom ( go );
//
//
//	listptrNode *node = go->node->next;
//
//	while ( node )
//	{
//		GameObject *next = (GameObject *) node->pointer;
//
//		if ( next->active )
//		{
//			nx1 = goGetLeft   ( next );
//			nx2 = goGetRight  ( next );
//			ny1 = goGetTop    ( next );
//			ny2 = goGetBottom ( next );
//
//			if
//			(
//				(  x1 <= nx1  &&  nx1 <=  x2  &&   y1 <= ny1  &&  ny1 <=  y2 ) ||
//				( nx1 <=  x1  &&   x1 <= nx2  &&   y1 <= ny1  &&  ny1 <=  y2 ) ||
//				( nx1 <=  x1  &&   x1 <= nx2  &&  ny1 <=  y1  &&   y1 <= ny2 ) ||
//				(  x1 <= nx1  &&  nx1 <=  x2  &&  ny1 <=  y1  &&   y1 <= ny2 )
//			)
//			{
//				if ( OBJECTIS(ENTITY_PLAYER) )
//				{
//					u8 hide = 0;
//					GameObject *x = NULL;
//
//
//					if ( OBJECTIS(ENTITY_ENEMY) )
//					{
//						play_fx ( FX_HIT );
//
//						playerSetAction ( player, PLAYER_BURNS );
//						hudIncHearts ( -1 );
//					}
//
//					else if ( OBJECTIS(ENTITY_CHECKPOINT) )
//					{
//						play_fx ( FX_DOOR );
//
//						x = GOGET(ENTITY_CHECKPOINT);
//
//						itemSetChecked ( x->item, 1 );
//						checkpoint_save ( x );
//					}
//
//					else if ( OBJECTIS(ENTITY_HINT) )
//					{
//						play_fx ( FX_ITEM );
//
//						x = GOGET(ENTITY_HINT);
//						hide = 1;
//
//						hint_show ( x );
//					}
//
//					else if ( OBJECTIS(ENTITY_CROSS) )
//					{
//						play_fx ( FX_ITEM );
//
//						x = GOGET(ENTITY_CROSS);
//						hide = 1;
//
//						hudIncCrosses ( +1 );
//					}
//
//					else if ( OBJECTIS(ENTITY_HEART) )
//					{
//						play_fx ( FX_ITEM );
//
//						x = GOGET(ENTITY_HEART);
//						hide = 1;
//
//						hudIncHearts ( +1 );
//					}
//
//					else if ( OBJECTIS(ENTITY_INV_CROSS) )
//					{
//						// do nothing
//					}
//
//
//					if ( hide )
//					{
//						itemSetHidden ( x->item, 1 );
//						SPR_setNeverVisible ( x->sprite, 1 );
//						goSetActive ( x, 0 );
//						goDelete ( x );
//					}
//
//				}
//			}
//		}
//
//		node = node->next;
//	}
//}