#include "../../inc/include.h"

#include "../../res/cga/sprites.h"
#include "../../res/cga/texts.h"
#include "../../res/all/texts.h"
#include "../../res/cga/foreground.h"
#include "../../res/cga/background.h"
#include "../../inc/versions/all.h"



const Entity entity_01_cga  = {  1, "Jean stays",               0, (SpriteDefinition*) &jean_2x3_cga,      PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_02_cga  = {  2, "Jean walks",               1, (SpriteDefinition*) &jean_2x3_cga,      PAL3, ENTITY_PLAYER,     FIX32(0.65),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_03_cga  = {  3, "Jean jumps",               2, (SpriteDefinition*) &jean_2x3_cga,      PAL3, ENTITY_PLAYER,     FIX32(0.65),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_04_cga  = {  4, "Jean burns",               3, (SpriteDefinition*) &jean_2x3_cga,      PAL3, ENTITY_NULL,                 0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  1,  5 } };
const Entity entity_05_cga  = {  5, "Jean lie down",            0, (SpriteDefinition*) &jean_3x2_cga,      PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  9,  0,  9 } }; // {  8,  6,  0, 10 } };
const Entity entity_06_cga  = {  6, "Jean sneaks",              1, (SpriteDefinition*) &jean_3x2_cga,      PAL3, ENTITY_PLAYER,      FIX32(0.2),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  9,  0,  9 } }; // {  8,  6,  0, 10 } };
const Entity entity_07_cga  = {  7, "Flying skull",             4, (SpriteDefinition*) &enemies_2x2_cga,   PAL2, ENTITY_ENEMY,       FIX32(0.8),           0,        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  4,  5,  3,  4 } };
const Entity entity_08_cga  = {  8, "Checkpoint",               4, (SpriteDefinition*) &jean_2x3_cga,      PAL3, ENTITY_CHECKPOINT,           0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_09_cga  = {  9, "Checkpoint active",        5, (SpriteDefinition*) &jean_2x3_cga,      PAL3, ENTITY_NULL,                 0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_10_cga  = { 10, "Yellow hint",             12, (SpriteDefinition*) &objects_2x2_cga,   PAL3, ENTITY_HINT,                 0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_11_cga  = { 11, "Heart",                   11, (SpriteDefinition*) &objects_2x2_cga,   PAL3, ENTITY_HEART,                0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_12_cga  = { 12, "Cross",                    0, (SpriteDefinition*) &objects_2x2_cga,   PAL3, ENTITY_CROSS,                0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_13_cga  = { 13, "Inverted cross",           1, (SpriteDefinition*) &objects_2x2_cga,   PAL3, ENTITY_INV_CROSS,            0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_14_cga  = { 14, "Crusader",                 1, (SpriteDefinition*) &enemies_2x3_cga,   PAL2, ENTITY_ENEMY,      FIX32(0.60),           0, FIX32(0.20), 0, 1, 0, NULL, mcb_crusader,    0, { -8,  5,  0, -7 } }; // {  7,  5,  0,  5 } };
const Entity entity_15_cga  = { 15, "Water",                    6, (SpriteDefinition*) &enemies_2x1_cga,   PAL2, ENTITY_NULL,                 0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_16_cga  = { 16, "Fire",                    11, (SpriteDefinition*) &enemies_2x2_cga,   PAL2, ENTITY_NULL,              zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_17_cga  = { 17, "Rat",                      1, (SpriteDefinition*) &enemies_2x2_cga,   PAL2, ENTITY_ENEMY,      FIX32(0.80),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  0,  0,  0 } };
const Entity entity_18_cga  = { 18, "Green spider",             2, (SpriteDefinition*) &enemies_2x2_cga,   PAL2, ENTITY_ENEMY,             zero, FIX32(0.75),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
const Entity entity_19_cga  = { 19, "Brown spider",             3, (SpriteDefinition*) &enemies_2x2_cga,   PAL2, ENTITY_ENEMY,             zero, FIX32(1.00),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
const Entity entity_20_cga  = { 20, "Bell",                    14, (SpriteDefinition*) &objects_2x2_cga,   PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_21_cga  = { 21, "Snail",                    4, (SpriteDefinition*) &enemies_2x1_cga,   PAL2, ENTITY_ENEMY,      FIX32(0.30),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  2,  0,  2 } };
const Entity entity_22_cga  = { 22, "Switch (off)",             2, (SpriteDefinition*) &objects_2x2_cga,   PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_23_cga  = { 23, "Swordsman's skeleton",     2, (SpriteDefinition*) &enemies_2x3_cga,   PAL2, ENTITY_ENEMY,      FIX32(0.60),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  6,  5,  0,  5 } };
const Entity entity_24_cga  = { 24, "Skull wasp",               5, (SpriteDefinition*) &enemies_2x2_cga,   PAL2, ENTITY_ENEMY,      FIX32(0.50), FIX32(0.50),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
const Entity entity_25_cga  = { 25, "Human wasp",              10, (SpriteDefinition*) &enemies_2x2_cga,   PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
const Entity entity_26_cga  = { 26, "El Coco",                  7, (SpriteDefinition*) &enemies_2x2_cga,   PAL2, ENTITY_ENEMY,      FIX32(0.45), FIX32(0.45),        zero, 0, 1, 0, NULL, mcb_coco,        0, {  2,  2,  2,  2 } };
const Entity entity_27_cga  = { 27, "Spitting plant",           0, (SpriteDefinition*) &enemies_2x2_cga,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
const Entity entity_28_cga  = { 28, "Spit",                     2, (SpriteDefinition*) &enemies_2x1_cga,   PAL2, ENTITY_ENEMY,      FIX32(0.75), FIX32(2.20), FIX32(0.10), 0, 0, 0, NULL, mcb_bullet,      0, {  1,  5,  1,  5 } };
const Entity entity_29_cga  = { 29, "Fireball",                 6, (SpriteDefinition*) &enemies_2x2_cga,   PAL2, ENTITY_ENEMY,                0, FIX32(1.50),           0, 0, 0, 0, NULL, mcb_fireball,    0, {  4,  4,  4,  4 } };
const Entity entity_30_cga  = { 30, "Evil bird",                0, (SpriteDefinition*) &enemies_3x2_cga,   PAL2, ENTITY_ENEMY,       FIX32(1.0),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  2,  0,  1,  1 } };
const Entity entity_31_cga  = { 31, "Spikes",                   8, (SpriteDefinition*) &enemies_2x1_cga,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  2,  0,  0,  0 } };
const Entity entity_32_cga  = { 32, "Demon",                    3, (SpriteDefinition*) &enemies_2x3_cga,   PAL2, ENTITY_ENEMY,      FIX32(0.75),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
const Entity entity_33_cga  = { 33, "Archer skeleton",          0, (SpriteDefinition*) &enemies_3x3_cga,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  6,  6,  0,  6 } };
const Entity entity_34_cga  = { 34, "Arrow",                    5, (SpriteDefinition*) &enemies_2x1_cga,   PAL2, ENTITY_ENEMY,      FIX32(2.50),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  2,  3,  2,  3 } };
const Entity entity_35_cga  = { 35, "Door",                     0, (SpriteDefinition*) &objects_1x4_cga,   PAL3, ENTITY_DOOR,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_36_cga  = { 36, "Stone hatch",              0, (SpriteDefinition*) &hatch_2x2_cga,     PAL1, ENTITY_HATCH,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_37_cga  = { 37, "Hangman",                  7, (SpriteDefinition*) &jean_2x3_cga,      PAL3, ENTITY_ENEMY,                0, FIX32(0.60),           0, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  1,  2,  0,  2 } };
const Entity entity_38_cga  = { 38, "Rope",                     6, (SpriteDefinition*) &jean_2x3_cga,      PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_39_cga  = { 39, "Death",                    0, (SpriteDefinition*) &death_4x4_cga,     PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  8,  5,  4 } };//{  0,  0,  2,  0 } };
const Entity entity_40_cga  = { 40, "Death throw",              1, (SpriteDefinition*) &death_4x4_cga,     PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  8,  5,  4 } };//{  0,  0,  4,  0 } };
const Entity entity_41_cga  = { 41, "Scythe",                   0, (SpriteDefinition*) &death_2x2_cga,     PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),           0, 0, 0, 0, NULL, mcb_scythe,      0, {  2,  2,  2,  2 } };//{  1,  1,  1,  1 } };
const Entity entity_42_cga  = { 42, "Wheel of faith",           5, (SpriteDefinition*) &objects_2x2_cga,   PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
const Entity entity_43_cga  = { 43, "Wheel of faith",           6, (SpriteDefinition*) &objects_2x2_cga,   PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
const Entity entity_44_cga  = { 44, "Bell (on)",               15, (SpriteDefinition*) &objects_2x2_cga,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_45_cga  = { 45, "Switch (on)",              3, (SpriteDefinition*) &objects_2x2_cga,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_46_cga  = { 46, "Passage",                  8, (SpriteDefinition*) &jean_2x3_cga,      PAL3, ENTITY_PASSAGE,              0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, { 16,  7,  0,  7 } };
const Entity entity_47_cga  = { 47, "Dragon head",              0, (SpriteDefinition*) &dragon_4x5_cga,    PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_48_cga  = { 48, "Dragon body",              0, (SpriteDefinition*) &dragon_12x5_cga,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_49_cga  = { 49, "Dragon fire",              0, (SpriteDefinition*) &dragon_3x6_cga,    PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  0,  2,  0,  2 } };
const Entity entity_50_cga  = { 50, "Running fire",             0, (SpriteDefinition*) &dragon_2x2_cga,    PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  0,  0,  0 } };
const Entity entity_51_cga  = { 51, "Gargoyle",                 8, (SpriteDefinition*) &enemies_2x2_cga,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
const Entity entity_52_cga  = { 52, "Gargoyle spit",            1, (SpriteDefinition*) &enemies_2x1_cga,   PAL2, ENTITY_ENEMY,      FIX32(3.00),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  1,  1,  2,  1 } };
const Entity entity_53_cga  = { 53, "Evil cursader",            0, (SpriteDefinition*) &enemies_2x3_cga,   PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
const Entity entity_54_cga  = { 54, "Toxic drop",               3, (SpriteDefinition*) &enemies_2x1_cga,   PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.09), 0, 0, 0, NULL, mcb_drop,        0, {  0,  3,  0,  3 } };
const Entity entity_55_cga  = { 55, "Fish",                     9, (SpriteDefinition*) &enemies_2x2_cga,   PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.10), 0, 0, 1, NULL, mcb_null,        0, {  0,  1,  0,  1 } };
const Entity entity_56_cga  = { 56, "Splash",                   7, (SpriteDefinition*) &enemies_2x1_cga,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_57_cga  = { 57, "Satan",                    0, (SpriteDefinition*) &satan_4x6_cga,     PAL2, ENTITY_ENEMY,                0, FIX32(0.75),           0, 0, 0, 0, NULL, mcb_udlr,        0, {  } };
const Entity entity_58_cga  = { 58, "Satan bullet",             0, (SpriteDefinition*) &enemies_2x1_cga,   PAL2, ENTITY_ENEMY,      FIX32(1.00),           0,           0, 0, 0, 0, NULL, mcb_bullet,      0, {  1,  5,  1,  5 } };
const Entity entity_59_cga  = { 59, "Grial",                    4, (SpriteDefinition*) &objects_2x2_cga,   PAL3, ENTITY_GRIAL,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_60_cga  = { 60, "Red hint",                13, (SpriteDefinition*) &objects_2x2_cga,   PAL3, ENTITY_HINT,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_61_cga  = { 61, "Catched cross",            0, (SpriteDefinition*) &objects_1x1_cga,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_62_cga  = { 62, "Bonfire",                  0, (SpriteDefinition*) &bonfire_6x8_cga,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_63_cga  = { 63, "Bell ringing",             0, (SpriteDefinition*) &objects_4x2_cga,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_64_cga  = { 64, "Satan bullet explosion",   9, (SpriteDefinition*) &enemies_2x1_cga,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_65_cga  = { 65, "Arrow explosion",         11, (SpriteDefinition*) &enemies_2x1_cga,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_66_cga  = { 66, "Gargoyle spit explosion", 10, (SpriteDefinition*) &enemies_2x1_cga,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };






////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #0 cga
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_20_cga = // Tower of the Bell // OK // cga: Hacer que la campana se mueva al tocarla
{
      {
            { (Entity*) &entity_20_cga,  70,   8,  0,  0 }, // Bell
            { (Entity*) &entity_17_cga,  64, 144, +1,  0 }, // Rat
            { (Entity*) &entity_17_cga, 216, 144, -1,  0 }, // Rat
            { (Entity*) &entity_11_cga,  96,  56,  0,  0 }, // Heart
	}
};


const Objects objects_30_cga = // Wine supplies // OK
{
      {
            { (Entity*) &entity_18_cga,  36, 121,  0, +1 }, // Green spider
            { (Entity*) &entity_19_cga,  60, 131,  0, -1 }, // Brown spider
            { (Entity*) &entity_18_cga,  76, 100,  0, +1 }, // Green spider
            { (Entity*) &entity_10_cga, 144, 128,  0,  0 }, // Brown spider
            { (Entity*) &entity_19_cga, 196, 130,  0, -1,  0, FIX32(0.5) }, // Brown spider
            { (Entity*) &entity_12_cga, 220, 140,  0,  0 }, // Cross
	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #1 cga
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_01_cga = // Escape !!! // OK
{
      {
            { (Entity*) &entity_14_cga,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_cga,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_cga,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_cga, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_cga, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_cga, -150, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_cga, -170, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_cga, -190, 136, +1,  0 }, // Crusader
	}
};


const Objects objects_11_cga = // Death is close !!! // OK
{
      {
            { (Entity*) &entity_14_cga,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_cga,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_cga,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_cga, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_cga, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_cga, -150, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_cga, -170, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_cga, -190, 136, +1,  0 }, // Crusader
      }
};


const Objects objects_21_cga = // Abandone church // OK
{
      {
            { (Entity*) &entity_35_cga,   0, 112 }, // Door
      }
};

//typedef struct
//{
//	Entity *entity;
//
//	s16     x;
//	s16     y;
//
//	s8      dir_x;
//	s8      dir_y;
//
//	fix32   vel_x;
//	fix32   vel_y;
//
//	u8      flipH;
//	u8      flipV;
//}
//Object;
const Objects objects_31_cga = // The Altar // OK
{
      {
            { (Entity*) &entity_35_cga, 248, 112,  0,  0,  0,  0,  1 }, // Door
            { (Entity*) &entity_36_cga, 208, 160,  0,  0 }, // Stone hatch
            { (Entity*) &entity_07_cga, 152,  56, -1,  0, FIX32(0.60) }, // Flying skull
            { (Entity*) &entity_07_cga, 136,  86, +1,  0, FIX32(0.30) }, // Flying skull
            { (Entity*) &entity_10_cga, 212, 140,  0,  0 }, // Yellow hint
            { (Entity*) &entity_08_cga,  56, 136,  0,  0 }, // Checkpoint
	}
};


const Objects objects_41_cga = // Hangman Tree // OK
{
      {
            { (Entity*) &entity_37_cga, 152, 104,  0, +1 }, // Hangman
            { (Entity*) &entity_38_cga, 152,  88,  0,  0 }, // Rope
            { (Entity*) &entity_38_cga, 152, 112,  0,  0 }, // Rope

            { (Entity*) &entity_37_cga, 176,  76,  0, +1 }, // Hangman
            { (Entity*) &entity_38_cga, 176,  64,  0,  0 }, // Rope
            { (Entity*) &entity_38_cga, 176,  88,  0,  0 }, // Rope
            { (Entity*) &entity_38_cga, 176, 102,  0,  0 }, // Rope

            { (Entity*) &entity_37_cga,  72,  88,  0, +1 }, // Hangman
            { (Entity*) &entity_38_cga,  72,  72,  0,  0 }, // Pope
            { (Entity*) &entity_38_cga,  72,  96,  0,  0 }, // Pope
            { (Entity*) &entity_38_cga,  72, 116,  0,  0 }, // Pope

            { (Entity*) &entity_37_cga,  48,  72,  0, +1 }, // Hangman
            { (Entity*) &entity_38_cga,  48,  56,  0,  0 }, // Rope
            { (Entity*) &entity_38_cga,  48,  80,  0,  0 }, // Rope
            { (Entity*) &entity_38_cga,  48, 104,  0,  0 }, // Pope

            { (Entity*) &entity_21_cga, 152,  48, -1,  0 }, // Snail
            { (Entity*) &entity_21_cga, 136, 152, -1,  0 }, // Snail
            { (Entity*) &entity_22_cga, 216, 144,  0,  0 }, // Switch  // 17
            { (Entity*) &entity_13_cga,  48,  32,  0,  0 }, // Inverted cross


	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #2 cga
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_02_cga = // Pestilent beast // OK
{
      {
            { (Entity*) &entity_47_cga, 120,  10,  0,  0 }, // Dragon head #0
            { (Entity*) &entity_48_cga, 112,   8,  0,  0 }, // Dragon body #1
            { (Entity*) &entity_49_cga, 125,  51,  0,  0 }, // Dragon fire #2

            { (Entity*) &entity_50_cga, -40, -40,  0, +1 }, // Running fire #3
            { (Entity*) &entity_50_cga, -40, -40,  0, -1 }, // Running fire #4
            { (Entity*) &entity_50_cga, -40, -40,  0, +1 }, // Running fire #5
            { (Entity*) &entity_50_cga, -40, -40,  0, -1 }, // Running fire #6
            { (Entity*) &entity_50_cga, -40, -40,  0, +1 }, // Running fire #7
            { (Entity*) &entity_50_cga, -40, -40,  0, -1 }, // Running fire #8

            { (Entity*) &entity_22_cga,  56,  32,  0,  0 }, // Switch      #9
            { (Entity*) &entity_11_cga,  80, 144,  0,  0 }, // Heart
            { (Entity*) &entity_12_cga, 204,  30,  0,  0 }, // Cross

            { (Entity*) &entity_46_cga, 184, 136,  0,  0 }, // Passage
      }
};


const Objects objects_12_cga = // Cave of illusions // OK // TODO: Mejorar el movimiento del coco
{
      {
            { (Entity*) &entity_11_cga,  16,  32,  0,  0 }, // Heart
            { (Entity*) &entity_26_cga, 128,  72,  0,  0 }, // El Coco
            { (Entity*) &entity_08_cga, 112, 136,  0,  0 }, // Checkpoint
      }
};


const Objects objects_22_cga = // Plagued ruins // OK
{
      {
            { (Entity*) &entity_10_cga,  80, 142,  0,  0 }, // Yellow hint
            { (Entity*) &entity_11_cga, 128,  48,  0,  0 }, // Heart
            { (Entity*) &entity_24_cga,  48,  24,  0, -1 }, // Skull wasp
            { (Entity*) &entity_24_cga, 128, 128,  0, -1 }, // Skull wasp

            { (Entity*) &entity_25_cga, 160,  32,  0, -1 }, // Human wasp
            { (Entity*) &entity_25_cga,  32, 112,  0, -1 }, // Human wasp
            { (Entity*) &entity_25_cga, 176, 128,  0, -1 }, // Human wasp
            { (Entity*) &entity_08_cga,  64,  56,  0,  0 }, // Checkpoint
	}
};


const Objects objects_32_cga = // Catacombs // OK
{
      {
            { (Entity*) &entity_23_cga,  80,  88, -1,  0 }, // Swordsman's skeleton
            { (Entity*) &entity_23_cga, 128, 136, -1,  0 }, // Swordsman's skeleton
            { (Entity*) &entity_12_cga, 144, 144,  0,  0 }, // Cross
	}
};


const Objects objects_42_cga = // Hidden garden // OK
{
      {
            { (Entity*) &entity_12_cga,  72,  32,   0,  0 }, // Cross          - #01
            { (Entity*) &entity_10_cga, 152,  78,   0,  0 }, // Yellow hint    - #02
            { (Entity*) &entity_21_cga, 168, 152,  -1,  0 }, // Snail          - #03
            { (Entity*) &entity_18_cga,  48,  24,   0, +1,  0, FIX32(0.60) }, // Green spider- #04

            { (Entity*) &entity_27_cga, 224,  48,   0,  0 }, // Spitting plant // 05
            { (Entity*) &entity_28_cga,   0, -60, -60,  0 }, // Spit           // 06
            { (Entity*) &entity_28_cga,   0, -60, -60,  0 }, // Spit           // 07

            { (Entity*) &entity_27_cga, 136,  32,   0,  0 }, // Spitting plant // 08
            { (Entity*) &entity_28_cga,   0, -60, -60,  0 }, // Spit           // 09
            { (Entity*) &entity_28_cga,   0, -60, -60,  0 }, // Spit           // 10

            { (Entity*) &entity_27_cga, 112, 112,   0,  0 }, // Spitting plant // 11
            { (Entity*) &entity_28_cga,   0, -60, -60,  0 }, // Spit           // 12
            { (Entity*) &entity_28_cga,   0, -60, -60,  0 }, // Spit           // 13

            { (Entity*) &entity_08_cga,  64, 136,   0,  0 }, // Checkpoint     - #00

	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #3 cga
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_03_cga = // Gloomy tunnels // OK
{
      {
            { (Entity*) &entity_54_cga,  32,  88,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_cga, 104,  32,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_cga,  88,  88,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_cga, 208,  32,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_cga, 192,  32,  0,  0 }, // Toxic drop

            { (Entity*) &entity_11_cga,  24, 112,  0,  0 }, // Heart
            { (Entity*) &entity_53_cga,  80,  56, -1,  0 }, // Evil crusader
            { (Entity*) &entity_53_cga, 192, 136, -1,  0 }, // Evil crusader
            { (Entity*) &entity_13_cga, 224,  64,  0,  0 }, // Inverted cross

            { (Entity*) &entity_08_cga, 168,  56,  0,  0 }, // Checkpoint
      }
};


const Objects objects_13_cga = // Lake of despair // OK
{
      {
            { (Entity*) &entity_15_cga,  48, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_cga,  64, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_cga,  80, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_cga,  96, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_cga, 112, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_cga, 128, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_cga, 144, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_cga, 160, 168,  0,  0 }, // Water

            { (Entity*) &entity_56_cga,  56, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_cga, 116, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_cga, 156, 160,  0,  0 }, // Splash

            { (Entity*) &entity_55_cga,  56, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_cga, 116, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_cga, 156, 168,  0,  0 }, // Fish

            { (Entity*) &entity_12_cga,  16,  48,  0,  0 }, // Cross
            { (Entity*) &entity_10_cga, 176,  40,  0,  0 }, // Yellow hint
            { (Entity*) &entity_18_cga, 144,  24,  0, +1, 0, FIX32(0.70)}, // Green spider
	}
};


const Objects objects_23_cga = // The wheel of Faith // OK
{
      {
            { (Entity*) &entity_33_cga,  12,  24,  0,  0 }, // Archer skeleton
            { (Entity*) &entity_33_cga, 221,  72, -1,  0 }, // Archer skeleton
            { (Entity*) &entity_33_cga, 116, 104, -1,  0 }, // Archer skeleton
            { (Entity*) &entity_34_cga, -20, -20,  0,  0 }, // Arrow
            { (Entity*) &entity_34_cga, -20, -20,  0,  0 }, // Arrow
            { (Entity*) &entity_34_cga, -20, -20,  0,  0 }, // Arrow

            { (Entity*) &entity_42_cga, 120,  16,  0,  0 }, // Wheel of faith

            { (Entity*) &entity_13_cga,  24,  80,  0,  0 }, // Inverted cross
            { (Entity*) &entity_12_cga, 216, 144,  0,  0 }, // Cross
            { (Entity*) &entity_11_cga, 168,  80,  0,  0 }, // Heart

            { (Entity*) &entity_65_cga, -80, -80,  0,  0 }, // Arrow explosion
      }
};


const Objects objects_33_cga = // Banquet of Death // OK :)
{
      {
            { (Entity*) &entity_12_cga,  24,  40,  0,  0 }, // Cross
            { (Entity*) &entity_11_cga, 120,  88,  0,  0 }, // Heart
            { (Entity*) &entity_39_cga,  16,   8, -1,  0 }, // Death
            { (Entity*) &entity_41_cga, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_cga, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_cga, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_cga, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_cga, -16, -16,  0, +1 }, // Scythe
      }
};


const Objects objects_43_cga = // Underground river // OK
{
      {
            { (Entity*) &entity_35_cga,   0, 128,  0,  0 }, // Door

            { (Entity*) &entity_15_cga, 112, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_cga, 128, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_cga, 144, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_cga, 160, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_cga, 176, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_cga, 192, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_cga, 208, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_cga, 224, 168,  0,  0 }, // Water

            { (Entity*) &entity_46_cga, 168, 120,  0,  0 }, // Passage
            { (Entity*) &entity_18_cga,  88,  48,  0, -1 }, // Green spider
            { (Entity*) &entity_12_cga,  24,  16,  0,  0 }, // Cross
            { (Entity*) &entity_11_cga, 200,  64,  0,  0 }, // Heart

            { (Entity*) &entity_54_cga,  48,   8,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_cga, 128,   8,  0,  0 }, // Toxic drop

            { (Entity*) &entity_56_cga, 144, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_cga, 192, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_cga, 112, 160,  0,  0 }, // Splash

            { (Entity*) &entity_55_cga, 144, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_cga, 192, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_cga, 112, 168,  0,  0 }, // Fish

            { (Entity*) &entity_08_cga,  64,  88,  0,  0 }, // Checkpoint
      }

};





////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #4 cga
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_04_cga = // Unexpected gate // OK
{
      {
            { (Entity*) &entity_51_cga, 216,  24,  0,  0,  0,  0, -1 }, // Gargoyle
            { (Entity*) &entity_52_cga, -40, -40,  0,  0             }, // Gargoyle spit
            { (Entity*) &entity_66_cga, -40, -40,  0,  0             }, // Gargoyle spit explosion

            { (Entity*) &entity_30_cga,  16,  80, +1,  0, FIX32(0.65) }, // Evil bird
            { (Entity*) &entity_30_cga, 209, 104, -1,  0, FIX32(0.65) }, // Evil bird

            { (Entity*) &entity_35_cga, 248, 112,  0,  0,  0,  0, -1 }, // Door // 03

            { (Entity*) &entity_22_cga, 192,  48,  0,  0 }, // Switch
            { (Entity*) &entity_53_cga, 136, 136, -1,  0 }  // Evil crusader
	}
};


const Objects objects_14_cga = // Evil church // OK
{
      {
            { (Entity*) &entity_10_cga,  24,  46,  0,  0 }, // Yellow hint

            { (Entity*) &entity_16_cga, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_32_cga,  16, 136, -1,  0, FIX32(0.60) }, // Demon
            { (Entity*) &entity_32_cga,  88,  40, -1,  0, FIX32(0.60) }, // Demon
            { (Entity*) &entity_32_cga, 128, 136, -1,  0, FIX32(0.60) }, // Demon

            { (Entity*) &entity_33_cga, 190, 120,  0,  0 }, // Archer skeleton
            { (Entity*) &entity_34_cga, -60, -60, -1,  0 }, // Arrow

            { (Entity*) &entity_08_cga, 152,  40,  0,  0 }, // Checkpoint

            { (Entity*) &entity_65_cga, -80, -80,  0,  0 }, // Arrow explosion
	}
};


const Objects objects_24_cga = // Tortured souls // OK
{
      {
            { (Entity*) &entity_51_cga, 224, 104,  0,  0,  0,  0, -1 }, // Gargoyle
            { (Entity*) &entity_52_cga, -40, -40,  0,  0             }, // Gargoyle spit
            { (Entity*) &entity_66_cga, -40, -40,  0,  0             }, // Gargoyle spit explosion

            { (Entity*) &entity_13_cga, 220, 142,  0,  0 }, // Inverted cross

            { (Entity*) &entity_16_cga, 192, 144,  0,  0 }, // Fire

            { (Entity*) &entity_32_cga,  68,   8, -1,  0, FIX32(0.90),  0, 0, 1 }, // Demon //            { (Entity*) &entity_23_cga,  60,   8, -1,  0, FIX32(0.70),  0, 0, 1 }, // Swordsman's skeleton
            { (Entity*) &entity_32_cga, 148,  64, -1,  0, FIX32(0.90),  0, 0, 0 }, // Demon //            { (Entity*) &entity_23_cga, 140,  64, -1,  0, FIX32(0.60),  0, 0, 0 }, // Swordsman's skeleton
            { (Entity*) &entity_32_cga, 208,  64, -1,  0,           0,  0, 0, 0 }, // Demon

            { (Entity*) &entity_16_cga,  80, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_cga,  96, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_cga, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_cga, 160, 160,  0,  0 }, // Fire

            { (Entity*) &entity_29_cga,  80, 136,  0, -1,  0, FIX32(1.90) }, // Fireball
            { (Entity*) &entity_29_cga,  96, 152,  0, -1,  0, FIX32(1.25) }, // Fireball
            { (Entity*) &entity_29_cga, 152, 160,  0, -1,  0, FIX32(1.50) }, // Fireball
	}
};


const Objects objects_34_cga = // Ashes to ashes // OK
{
      {
            { (Entity*) &entity_16_cga,  16, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_cga,  32, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_cga, 112, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_cga, 128, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_cga, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_cga, 160, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_cga, 176, 160,  0,  0 }, // Fire

            { (Entity*) &entity_29_cga,  48,  44,  0, -1 }, // Fireball
            { (Entity*) &entity_29_cga,  80, 144,  0, -1 }, // Fireball
            { (Entity*) &entity_29_cga, 112,  88,  0, -1 }, // Fireball
            { (Entity*) &entity_29_cga, 150,   8,  0, +1 }, // Fireball
            { (Entity*) &entity_29_cga, 168, 152,  0, +1 }, // Fireball
            { (Entity*) &entity_29_cga, 200,  44,  0, +1 }, // Fireball

            { (Entity*) &entity_11_cga,  96, 144,  0,  0 }, // Heart
            { (Entity*) &entity_11_cga, 224,  24,  0,  0 }, // Heart

            { (Entity*) &entity_07_cga,  72,  14, +1,  0, FIX32(0.4) }, // Flying skull
            { (Entity*) &entity_07_cga, 184,  96, -1,  0, FIX32(0.4) }, // Flying skull

            { (Entity*) &entity_08_cga, 64, 136,  0,  0 }, // Checkpoint
	}
};



const Objects objects_44_cga = // Satan!!! // TODO
{
      {
            { (Entity*) &entity_35_cga,   0, 128 }, // Door

            { (Entity*) &entity_14_cga,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_cga,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_cga,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_cga, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_cga, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_cga, -150, 136, +1,  0 }, // Crusader

            { (Entity*) &entity_59_cga, 120,  16,  0,  0 }, // Grial
            { (Entity*) &entity_60_cga, 222, 111,  0,  0 }, // Red hint

            { (Entity*) &entity_58_cga, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_cga, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_cga, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_cga, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_cga, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_cga, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_cga, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_cga, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_cga, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_cga, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_cga, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_cga, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_57_cga, 196,  80,  0, +1 }, // Satan

            { (Entity*) &entity_61_cga, 128, 190,  0,  0 }, // Catched cross // puts out of the screen
            { (Entity*) &entity_64_cga, 128, 190,  0,  0 }, // Satan bullet explosion // Used to be saved in VRAM
	}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Other cga
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////




const Objects objects_prologue_cga =
{
      {
            { (Entity*) &entity_02_cga,  -16, 118, +1,  0  }, // Jean walks

            { (Entity*) &entity_14_cga,  -70, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_cga,  -95, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_cga, -120, 116, +1,  0, FIX32(0.50) }, // Crusader
      }
};

const Objects objects_burnhim_cga =
{
      {
            { (Entity*) &entity_14_cga,   56, 136 }, // Crusader
            { (Entity*) &entity_14_cga,   80, 136 }, // Crusader
            { (Entity*) &entity_14_cga,  160, 136 }, // Crusader
            { (Entity*) &entity_14_cga,  184, 136 }, // Crusader

            { (Entity*) &entity_50_cga,  104, 128 }, // Running fire
            { (Entity*) &entity_50_cga,  120, 128 }, // Running fire
            { (Entity*) &entity_50_cga,  136, 128 }, // Running fire

            { (Entity*) &entity_03_cga,  120, 118 }, // Jean stays
            { (Entity*) &entity_62_cga,  104,  96 }, // Bonfire
	}
};

const Objects objects_info_cga =
{
      {
            { (Entity*) &entity_02_cga,  12,  20,  0,  0,  0,  0, -1, 0 }, // Jean walks
            { (Entity*) &entity_22_cga,  12, 192,  0,  0,  0,  0, -1, 0 }, // Switch
            { (Entity*) &entity_20_cga, 208, 188 }, // Bell
            { (Entity*) &entity_59_cga, 192, 164 }, // Grial
            { (Entity*) &entity_42_cga, 208,  28 }, // Wheel of faith
            { (Entity*) &entity_10_cga, 110,  52 }, // Yellow hint
            { (Entity*) &entity_11_cga,  32,  76 }, // Heart
            { (Entity*) &entity_12_cga,   8, 100 }, // Cross
            { (Entity*) &entity_08_cga, 150,  84 }, // Checkpoint
            { (Entity*) &entity_46_cga,  36, 144 }, // Passage
            { (Entity*) &entity_39_cga,  98, 128,  0,  0,  0,  0, -1, 0 }, // Death

      }
}
;




const Mask mask_20_cga =
{
   {
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  2,  2,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};



const Mask mask_21_cga =
{
   {
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  2,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0, 64,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0, 64, 64,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};




const Mask mask_31_cga =
{
   {
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0, 32, 32,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0, 32, 32,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0, 32, 32,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1 }
   }
};

const Mask mask_41_cga =
{
   {
      {  1,  1,  1, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0,  0,  1,  1 },
      {  1,  1,  1, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0, 64, 64, 64, 64, 64, 64, 64,  0,  0,  0, 64, 64, 64, 64, 64, 64,  0, 64, 64, 64,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0, 64,  0, 64, 64,  0,  0,  0,  0,  0, 64, 64,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  2,  2,  2,  2,  2,  2,  2,  2,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  2,  2,  2,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  2,  2,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  0, 64,  0,  0,  0, 64, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,64+16, 64,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};

const Mask mask_02_cga =
{
   {
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0, 64, 64,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0, 64, 64,  0,  0,  0,  1,  1,  1,  1,  0,  1,  0,  0,  1,  0,  0,  0,  0,  0,  0,  4,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0, 64,  0,  0,  0,  1,  1,  1,  1,  0,  1,  0,  0,  1,  0,  0,  0,  0,  0,  0,  4,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  1,  0,  0,  1,  0,  0,  0,  0,  0,  0,  4,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  1,  0,  0,  1,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0 },
      {  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0 },
      {  1,  1,  0,  0,  0, 16,  0,  0, 64,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0, 64, 64,  0,  0, 64, 16 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  2,  2,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0, 64,  0,  0,  0,  0,  0,  8,  8,  0,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0, 64,  0,  0,  0,  0,  0,  8,  8,  0,  1,  1,  1,  1,  1,  1 },
      {  1,  1, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  8,  8,  0,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};


const Mask mask_22_cga =
{
   {
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0, 32, 32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0, 32, 32,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0, 32, 32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  2,  2,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1 }
   }
};

const Mask mask_03_cga =
{
   {
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  2,  2,  1,  1,  1,  1,  1,  1,  2,  2,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  2,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 32, 32,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 32, 32,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0, 32, 32,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  2,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};

const Mask mask_13_cga =
{
   {
      {  1,  1,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  1,  1,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  1,  1,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  1,  1,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,  1 },
      { 64,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};

const Mask mask_23_cga =
{
   {
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};



const Mask mask_33_cga =
{
   {
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  1,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  1,  1,  0,  0,  0,  1,  0,  0,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  4,  4,  1,  1,  4,  4,  4,  4,  4,  4,  1,  1,  4,  4,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};

const Mask mask_43_cga =
{
   {
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  1,  1,  1,  1,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0, 32, 32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0, 32, 32,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0, 32, 32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  8,  8,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  8,  8,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  8,  8,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  1,  1,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,4+1,  1,  1 }
   }
};

const Mask mask_04_cga =
{
   {
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  0,  0,  0,  1,  1,  1,  1,  0,  0,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  0,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};



const Mask mask_24_cga =
{
   {
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0, 64,  0,  0,  1,  1,  1,  1,  0,  0,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0, 16, 64, 16,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0, 64,  0,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,4+2,4+2,4+2,4+2,  1,  1,  1,  1,4+2,4+2,4+2,4+2,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};



const Mask mask_34_cga =
{
   {
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1 },
      {  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,4+2,4+2,4+2,4+2,  1,  1,  1,  1,  1,  1,  1,  1,4+2,4+2,4+2,4+2,4+2,4+2,4+2,4+2,4+2,4+2,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};

const Mask mask_44_cga =
{
   {
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  1,  1 },
      {  1,  1,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  1,  1 },
      {  1,  1,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,128,128,  0,  0,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,128,128,  0,  0,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};

const Room room_00_cga = { (Image*) &room_00_f_cga, NULL,                    (Objects*) &objects_null,   (Mask*) &mask_00_all, (Image*) &text_00_cga, (Music*) &music_00_all,         room_null };
const Room room_01_cga = { (Image*) &room_01_f_cga, NULL,                    (Objects*) &objects_01_cga, (Mask*) &mask_01_all, (Image*) &text_01_cga, (Music*) &music_08_all,         room_null };
const Room room_02_cga = { (Image*) &room_02_f_cga, NULL,                    (Objects*) &objects_02_cga, (Mask*) &mask_02_cga, (Image*) &text_02_cga, (Music*) &music_02_all, room_funct_02_all };
const Room room_03_cga = { (Image*) &room_03_f_cga, NULL,                    (Objects*) &objects_03_cga, (Mask*) &mask_03_cga, (Image*) &text_03_cga, (Music*) &music_02_all, room_funct_03_all };
const Room room_04_cga = { (Image*) &room_04_f_cga, NULL,                    (Objects*) &objects_04_cga, (Mask*) &mask_04_cga, (Image*) &text_04_cga, (Music*) &music_02_all, room_funct_04_all };

const Room room_10_cga = { (Image*) &room_10_f_cga, (Image*) &room_10_b_cga, (Objects*) &objects_null,   (Mask*) &mask_10_all, (Image*) &text_10_cga, (Music*) &music_10_all, room_funct_10_all };
const Room room_11_cga = { (Image*) &room_11_f_cga, (Image*) &room_11_b_cga, (Objects*) &objects_11_cga, (Mask*) &mask_11_all, (Image*) &text_11_cga, (Music*) &music_08_all, room_funct_11_all };
const Room room_12_cga = { (Image*) &room_12_f_cga, NULL,                    (Objects*) &objects_12_cga, (Mask*) &mask_12_all, (Image*) &text_12_cga, (Music*) &music_02_all, room_funct_12_all };
const Room room_13_cga = { (Image*) &room_13_f_cga, NULL,                    (Objects*) &objects_13_cga, (Mask*) &mask_13_cga, (Image*) &text_13_cga, (Music*) &music_02_all, room_funct_13_all };
const Room room_14_cga = { (Image*) &room_14_f_cga, NULL,                    (Objects*) &objects_14_cga, (Mask*) &mask_14_all, (Image*) &text_14_cga, (Music*) &music_03_all, room_funct_14_all };

const Room room_20_cga = { (Image*) &room_20_f_cga, (Image*) &room_20_b_cga, (Objects*) &objects_20_cga, (Mask*) &mask_20_cga, (Image*) &text_20_cga, (Music*) &music_01_all, room_funct_20_all };
const Room room_21_cga = { (Image*) &room_21_f_cga, NULL,                    (Objects*) &objects_21_cga, (Mask*) &mask_21_cga, (Image*) &text_21_cga, (Music*) &music_01_all, room_funct_21_all };
const Room room_22_cga = { (Image*) &room_22_f_cga, NULL,                    (Objects*) &objects_22_cga, (Mask*) &mask_22_cga, (Image*) &text_22_cga, (Music*) &music_01_all,         room_null };
const Room room_23_cga = { (Image*) &room_23_f_cga, NULL,                    (Objects*) &objects_23_cga, (Mask*) &mask_23_cga, (Image*) &text_23_cga, (Music*) &music_01_all, room_funct_23_all };
const Room room_24_cga = { (Image*) &room_24_f_cga, NULL,                    (Objects*) &objects_24_cga, (Mask*) &mask_24_cga, (Image*) &text_24_cga, (Music*) &music_03_all, room_funct_24_all };

const Room room_30_cga = { (Image*) &room_30_f_cga, (Image*) &room_30_b_cga, (Objects*) &objects_30_cga, (Mask*) &mask_30_all, (Image*) &text_30_cga, (Music*) &music_01_all, room_funct_30_all };
const Room room_31_cga = { (Image*) &room_31_f_cga, NULL,                    (Objects*) &objects_31_cga, (Mask*) &mask_31_cga, (Image*) &text_31_cga, (Music*) &music_01_all, room_funct_31_all };
const Room room_32_cga = { (Image*) &room_32_f_cga, NULL,                    (Objects*) &objects_32_cga, (Mask*) &mask_32_all, (Image*) &text_32_cga, (Music*) &music_01_all,         room_null };
const Room room_33_cga = { (Image*) &room_33_f_cga, NULL,                    (Objects*) &objects_33_cga, (Mask*) &mask_33_cga, (Image*) &text_33_cga, (Music*) &music_04_all, room_funct_33_all };
const Room room_34_cga = { (Image*) &room_34_f_cga, NULL,                    (Objects*) &objects_34_cga, (Mask*) &mask_34_cga, (Image*) &text_34_cga, (Music*) &music_03_all, room_funct_34_all };

const Room room_40_cga = { (Image*) &room_40_f_cga, NULL,                    (Objects*) &objects_null,   (Mask*) &mask_40_all, (Image*) &text_40_cga, (Music*) &music_00_all,         room_null };
const Room room_41_cga = { (Image*) &room_41_f_cga, NULL,                    (Objects*) &objects_41_cga, (Mask*) &mask_41_cga, (Image*) &text_41_cga, (Music*) &music_11_all, room_funct_41_all };
const Room room_42_cga = { (Image*) &room_42_f_cga, NULL,                    (Objects*) &objects_42_cga, (Mask*) &mask_42_all, (Image*) &text_42_cga, (Music*) &music_02_all, room_funct_42_all };
const Room room_43_cga = { (Image*) &room_43_f_cga, NULL,                    (Objects*) &objects_43_cga, (Mask*) &mask_43_cga, (Image*) &text_43_cga, (Music*) &music_02_all, room_funct_43_all };
const Room room_44_cga = { (Image*) &room_44_f_cga, NULL,                    (Objects*) &objects_44_cga, (Mask*) &mask_44_cga, (Image*) &text_44_cga, (Music*) &music_04_all, room_funct_44_all };
