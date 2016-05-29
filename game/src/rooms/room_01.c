#include "../inc/include.h"



static GameObject *leaf [ 6 ];

static u8          nb_leaf;
static u16         i;


//u16 tile ;




static void _room_enter ( Room *room )
{
	if ( game.version == VERSION_MD )
	{
		nb_leaf = goManagerFindAllByEntityId ( &waObjects, leaf, 81 );   // Leaf (outside)

		enemy_leaf_init ( 96, 160 );

		for ( i = 0; i < nb_leaf;   i++ )
		{
			enemy_leaf_reset ( leaf[i], true );
		}
	}



//	tile = ( ( VDP_getTile ( APLAN, 0, 0 ) >> 11 ) << 11 );
//	tile =  VDP_getTile ( APLAN, 0, 0 );




//			#include "../../inc/versions/md.h"
//			#include "../../res/md/sprites.h"
//
//
//
//			//drawUInt ( enemies_2x2_md.animations[0]->frames[0]->frameSprites[0]->tileset->numTile, 0, 0, 3 );
//
//
//
//			SpriteDefinition *sd1 = &enemies_2x2_md;
//			drawUInt ( sd1->animations[0]->frames[0]->frameSprites[0]->tileset->numTile, 0, 0, 3 );
//
//
//
//			Entity *e = (Entity*) &entity_17_md;
//
//			if ( e == NULL )
//			{
//				drawText ( "NULL", 0, 1);
//			}
//			else
//			{
//				drawText ( e->name, 0, 1);
//			}
//
//			drawText ( currentRoom->objects->array [ 0 ].entity->name, 1, 2 );
//
//			SpriteDefinition *sd2;
//
//			//sd2 = *(&e->sd);
//
////			drawUInt ( sd2->animations[0]->frames[0]->frameSprites[0]->tileset->numTile, 0, 2, 3 );
//
//
//			FrameSprite* frameSprite = enemies_2x2_md.animations[0]->frames[0]->frameSprites[0];
//			TileSet* tileset = frameSprite->tileset;
//			TC_uploadAtVBlank ( tileset, 450 );
//
//
////			VDP_loadTileSet ( player_sprite.animations[0]->frames[0]->frameSprites[0]->tileset, 450, 0 );
////			VDP_loadTileSet ( (TileSet*) , 16, 0 );

}



static void _room_stay ( Room *room )
{
	if ( game.version == VERSION_MD )
	{
		for ( i=0; i<nb_leaf; i++ )
		{
			enemy_leaf ( leaf[i] );
		}


//			#include "../../res/md/sprites.h"
//	if ( random() % 193 == 0 )
//		VDP_loadTileData ( (u32*)tree_1x1_md.animations[0]->frames[0]->frameSprites[0]->tileset, tile, 1, 0 );

//	if ( random() % 143 == 0 )
//		VDP_loadTileData ( 0, tile, 0, 0 );



	}
}



void room_funct_01_all ( Room *room, u8 action )
{
	if ( action == ROOM_ACTION_ENTER ) // enter
	{
		_room_enter ( room );
	}

	else if ( action == ROOM_ACTION_STAY ) // stay
	{
		_room_stay ( room );
	}

	else if ( action == ROOM_ACTION_LEAVE ) // leave
	{
		//_room_leave ( room );
	}
}
