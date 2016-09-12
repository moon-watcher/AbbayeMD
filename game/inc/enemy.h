#ifndef _ENEMIES_H_
#define _ENEMIES_H_


typedef struct
{
	Entity *entity;

	u8  room_x;
	u8  room_y;

	u16 delay;
	u16 timer [ 4 ];
}
EnemyData;



const EnemyData enemy_data [ VERSION_MAX ] [ 30 ];



u8 enemy_reset_death;
u8 enemy_reset_dragon;
u8 enemy_reset_satan;




EnemyData *enemy_find        ( u16 entity, u16 pos );
void       enemy_reset       ( );
bool       enemy_exceptions  ( GameObject *go );



void enemy_drop              ( GameObject *drop[],      u16 pos );
void enemy_runningfire       ( GameObject *fire[],      u16 pos );
void enemy_fish              ( GameObject *fish[],      GameObject *splash[], u16 pos );
void enemy_archer            ( GameObject *archer[],    GameObject *arrow[],  u16 pos );
void enemy_plant             ( GameObject *plant[],     GameObject *spit[],   u16 pos );
void enemy_death             ( GameObject *death,       GameObject *scythe[]          );
void enemy_gargoyle          ( GameObject *gargoyle[],  GameObject *spit[],   u16 pos );
void enemy_hangman           ( GameObject *hangman,     GameObject *rope,     u16 init );
void enemy_dragon            ( GameObject *head,        GameObject *body,     GameObject *fire, GameObject *goRunningFire[] );
void enemy_satan             ( GameObject *satan,       GameObject *bullet[] );
void enemy_coco              ( GameObject *coco );
void enemy_crusaders         ( );

//void enemy_bullet_init       ( GameObject *bullet, GameObject *explosion );
void enemy_bullet_init       ( GameObject *bullet );
void enemy_bullet_delete     ( );
void enemy_bullet            ( GameObject *bullet );
void enemy_bullet_deactivate ( GameObject *bullet );

void enemy_leaf_reset        ( GameObject *leaf, bool first );
void enemy_leaf_init         ( s16 y1, s16 y2 );
void enemy_leaf              ( GameObject *leaf );

void enemy_star_init         (  );
void enemy_star              ( Vect2D_u16 exception[], u8 stars, u8 x, u8 y, u8 width, u8 height, VDPPlan plan );

void enemy_lighting_init     ( );
void enemy_lighting          ( );

void philippe_init           ( );
void philippe_add            ( s16 x1, s16 x2 );
void philippe_update         ( );



#endif // _ENEMIES_H_
