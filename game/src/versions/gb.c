#include "../../inc/include.h"

#include "../../res/gb/sprites.h"
#include "../../res/gb/texts.h"
#include "../../res/all/texts.h"
#include "../../res/gb/foreground.h"
#include "../../res/gb/background.h"
#include "../../inc/versions/all.h"


const Entity entity_01_gb  = {  1, "Jean stays",               0, (SpriteDefinition*) &jean_2x3_gb,      PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_02_gb  = {  2, "Jean walks",               1, (SpriteDefinition*) &jean_2x3_gb,      PAL3, ENTITY_PLAYER,     FIX32(0.65),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_03_gb  = {  3, "Jean jumps",               2, (SpriteDefinition*) &jean_2x3_gb,      PAL3, ENTITY_PLAYER,     FIX32(0.65),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_04_gb  = {  4, "Jean burns",               3, (SpriteDefinition*) &jean_2x3_gb,      PAL3, ENTITY_NULL,                 0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  1,  5 } };
const Entity entity_05_gb  = {  5, "Jean lie down",            0, (SpriteDefinition*) &jean_3x2_gb,      PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  6,  0, 10 } };
const Entity entity_06_gb  = {  6, "Jean sneaks",              1, (SpriteDefinition*) &jean_3x2_gb,      PAL3, ENTITY_PLAYER,      FIX32(0.2),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  6,  0, 10 } };
const Entity entity_07_gb  = {  7, "Flying skull",             4, (SpriteDefinition*) &enemies_2x2_gb,   PAL2, ENTITY_ENEMY,       FIX32(0.8),           0,        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  4,  5,  3,  4 } };
const Entity entity_08_gb  = {  8, "Checkpoint",               4, (SpriteDefinition*) &jean_2x3_gb,      PAL3, ENTITY_CHECKPOINT,           0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_09_gb  = {  9, "Checkpoint active",        5, (SpriteDefinition*) &jean_2x3_gb,      PAL3, ENTITY_NULL,                 0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_10_gb  = { 10, "Yellow hint",             12, (SpriteDefinition*) &objects_2x2_gb,   PAL3, ENTITY_HINT,                 0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_11_gb  = { 11, "Heart",                   11, (SpriteDefinition*) &objects_2x2_gb,   PAL3, ENTITY_HEART,                0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_12_gb  = { 12, "Cross",                    0, (SpriteDefinition*) &objects_2x2_gb,   PAL3, ENTITY_CROSS,                0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_13_gb  = { 13, "Inverted cross",           1, (SpriteDefinition*) &objects_2x2_gb,   PAL3, ENTITY_INV_CROSS,            0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_14_gb  = { 14, "Crusader",                 1, (SpriteDefinition*) &enemies_2x3_gb,   PAL2, ENTITY_ENEMY,      FIX32(0.60),           0, FIX32(0.20), 0, 1, 0, NULL, mcb_crusader,    0, {  7,  5,  0,  5 } };
const Entity entity_15_gb  = { 15, "Water",                    6, (SpriteDefinition*) &enemies_2x1_gb,   PAL2, ENTITY_NULL,                 0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_16_gb  = { 16, "Fire",                    11, (SpriteDefinition*) &enemies_2x2_gb,   PAL2, ENTITY_NULL,              zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_17_gb  = { 17, "Rat",                      1, (SpriteDefinition*) &enemies_2x2_gb,   PAL2, ENTITY_ENEMY,      FIX32(0.80),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  0,  0,  0 } };
const Entity entity_18_gb  = { 18, "Green spider",             2, (SpriteDefinition*) &enemies_2x2_gb,   PAL2, ENTITY_ENEMY,             zero, FIX32(0.75),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
const Entity entity_19_gb  = { 19, "Brown spider",             3, (SpriteDefinition*) &enemies_2x2_gb,   PAL2, ENTITY_ENEMY,             zero, FIX32(1.00),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
const Entity entity_20_gb  = { 20, "Bell",                    14, (SpriteDefinition*) &objects_2x2_gb,   PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_21_gb  = { 21, "Snail",                    4, (SpriteDefinition*) &enemies_2x1_gb,   PAL2, ENTITY_ENEMY,      FIX32(0.30),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  2,  0,  2 } };
const Entity entity_22_gb  = { 22, "Switch (off)",             2, (SpriteDefinition*) &objects_2x2_gb,   PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_23_gb  = { 23, "Swordsman's skeleton",     2, (SpriteDefinition*) &enemies_2x3_gb,   PAL2, ENTITY_ENEMY,      FIX32(0.60),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  6,  5,  0,  5 } };
const Entity entity_24_gb  = { 24, "Skull wasp",               5, (SpriteDefinition*) &enemies_2x2_gb,   PAL2, ENTITY_ENEMY,      FIX32(0.50), FIX32(0.50),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
const Entity entity_25_gb  = { 25, "Human wasp",              10, (SpriteDefinition*) &enemies_2x2_gb,   PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
const Entity entity_26_gb  = { 26, "El Coco",                  7, (SpriteDefinition*) &enemies_2x2_gb,   PAL2, ENTITY_ENEMY,      FIX32(0.45), FIX32(0.45),        zero, 0, 1, 0, NULL, mcb_coco,        0, {  2,  2,  2,  2 } };
const Entity entity_27_gb  = { 27, "Spitting plant",           0, (SpriteDefinition*) &enemies_2x2_gb,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
const Entity entity_28_gb  = { 28, "Spit",                     2, (SpriteDefinition*) &enemies_2x1_gb,   PAL2, ENTITY_ENEMY,      FIX32(0.75), FIX32(2.20), FIX32(0.10), 0, 0, 0, NULL, mcb_bullet,      0, {  1,  5,  1,  5 } };
const Entity entity_29_gb  = { 29, "Fireball",                 6, (SpriteDefinition*) &enemies_2x2_gb,   PAL2, ENTITY_ENEMY,                0, FIX32(1.50),           0, 0, 0, 0, NULL, mcb_fireball,    0, {  4,  4,  4,  4 } };
const Entity entity_30_gb  = { 30, "Evil bird",                0, (SpriteDefinition*) &enemies_3x2_gb,   PAL2, ENTITY_ENEMY,       FIX32(1.0),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  2,  0,  1,  1 } };
const Entity entity_31_gb  = { 31, "Spikes",                   8, (SpriteDefinition*) &enemies_2x1_gb,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  2,  0,  0,  0 } };
const Entity entity_32_gb  = { 32, "Demon",                    3, (SpriteDefinition*) &enemies_2x3_gb,   PAL2, ENTITY_ENEMY,      FIX32(0.75),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
const Entity entity_33_gb  = { 33, "Archer skeleton",          0, (SpriteDefinition*) &enemies_3x3_gb,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  6,  6,  0,  6 } };
const Entity entity_34_gb  = { 34, "Arrow",                    5, (SpriteDefinition*) &enemies_2x1_gb,   PAL2, ENTITY_ENEMY,      FIX32(2.50),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  2,  3,  2,  3 } };
const Entity entity_35_gb  = { 35, "Door",                     0, (SpriteDefinition*) &objects_1x4_gb,   PAL3, ENTITY_DOOR,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_36_gb  = { 36, "Stone hatch",              0, (SpriteDefinition*) &hatch_2x2_gb,     PAL1, ENTITY_HATCH,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_37_gb  = { 37, "Hangman",                  7, (SpriteDefinition*) &jean_2x3_gb,      PAL3, ENTITY_ENEMY,                0, FIX32(0.60),           0, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  1,  2,  0,  2 } };
const Entity entity_38_gb  = { 38, "Rope",                     6, (SpriteDefinition*) &jean_2x3_gb,      PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_39_gb  = { 39, "Death",                    0, (SpriteDefinition*) &death_4x4_gb,     PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  0,  2,  0 } };
const Entity entity_40_gb  = { 40, "Death throw",              1, (SpriteDefinition*) &death_4x4_gb,     PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  0,  4,  0 } };
const Entity entity_41_gb  = { 41, "Scythe",                   0, (SpriteDefinition*) &death_2x2_gb,     PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),           0, 0, 0, 0, NULL, mcb_scythe,      0, {  1,  1,  1,  1 } };
const Entity entity_42_gb  = { 42, "Wheel of faith",           5, (SpriteDefinition*) &objects_2x2_gb,   PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
const Entity entity_43_gb  = { 43, "Wheel of faith",           6, (SpriteDefinition*) &objects_2x2_gb,   PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
const Entity entity_44_gb  = { 44, "Bell (on)",               15, (SpriteDefinition*) &objects_2x2_gb,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_45_gb  = { 45, "Switch (on)",              3, (SpriteDefinition*) &objects_2x2_gb,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_46_gb  = { 46, "Passage",                  8, (SpriteDefinition*) &jean_2x3_gb,      PAL3, ENTITY_PASSAGE,              0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, { 16,  7,  0,  7 } };
const Entity entity_47_gb  = { 47, "Dragon head",              0, (SpriteDefinition*) &dragon_4x5_gb,    PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_48_gb  = { 48, "Dragon body",              0, (SpriteDefinition*) &dragon_12x5_gb,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_49_gb  = { 49, "Dragon fire",              0, (SpriteDefinition*) &dragon_3x6_gb,    PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  0,  2,  0,  2 } };
const Entity entity_50_gb  = { 50, "Running fire",             0, (SpriteDefinition*) &dragon_2x2_gb,    PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  0,  0,  0 } };
const Entity entity_51_gb  = { 51, "Gargoyle",                 8, (SpriteDefinition*) &enemies_2x2_gb,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
const Entity entity_52_gb  = { 52, "Gargoyle spit",            1, (SpriteDefinition*) &enemies_2x1_gb,   PAL2, ENTITY_ENEMY,      FIX32(3.00),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  1,  1,  2,  1 } };
const Entity entity_53_gb  = { 53, "Evil cursader",            0, (SpriteDefinition*) &enemies_2x3_gb,   PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
const Entity entity_54_gb  = { 54, "Toxic drop",               3, (SpriteDefinition*) &enemies_2x1_gb,   PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.09), 0, 0, 0, NULL, mcb_drop,        0, {  0,  3,  0,  3 } };
const Entity entity_55_gb  = { 55, "Fish",                     9, (SpriteDefinition*) &enemies_2x2_gb,   PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.10), 0, 0, 1, NULL, mcb_null,        0, {  0,  1,  0,  1 } };
const Entity entity_56_gb  = { 56, "Splash",                   7, (SpriteDefinition*) &enemies_2x1_gb,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_57_gb  = { 57, "Satan",                    0, (SpriteDefinition*) &satan_4x6_gb,     PAL2, ENTITY_ENEMY,                0, FIX32(0.75),           0, 0, 0, 0, NULL, mcb_udlr,        0, {  } };
const Entity entity_58_gb  = { 58, "Satan bullet",             0, (SpriteDefinition*) &enemies_2x1_gb,   PAL2, ENTITY_ENEMY,      FIX32(1.00),           0,           0, 0, 0, 0, NULL, mcb_bullet,      0, {  1,  5,  1,  5 } };
const Entity entity_59_gb  = { 59, "Grial",                    4, (SpriteDefinition*) &objects_2x2_gb,   PAL3, ENTITY_GRIAL,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_60_gb  = { 60, "Red hint",                13, (SpriteDefinition*) &objects_2x2_gb,   PAL3, ENTITY_HINT,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_61_gb  = { 61, "Catched cross",            0, (SpriteDefinition*) &objects_1x1_gb,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_62_gb  = { 62, "Bonfire",                  0, (SpriteDefinition*) &bonfire_6x8_gb,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_63_gb  = { 63, "Bell ringing",             0, (SpriteDefinition*) &objects_4x2_gb,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_64_gb  = { 64, "Satan bullet explosion",   9, (SpriteDefinition*) &enemies_2x1_gb,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_65_gb  = { 65, "Arrow explosion",         11, (SpriteDefinition*) &enemies_2x1_gb,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_66_gb  = { 66, "Gargoyle spit explosion", 10, (SpriteDefinition*) &enemies_2x1_gb,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };






////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #0 gb
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_20_gb = // Tower of the Bell // OK // gb: Hacer que la campana se mueva al tocarla
{
      {
            { (Entity*) &entity_20_gb,  70,   8,  0,  0 }, // Bell
            { (Entity*) &entity_17_gb,  64, 144, +1,  0 }, // Rat
            { (Entity*) &entity_17_gb, 216, 144, -1,  0 }, // Rat
            { (Entity*) &entity_11_gb,  96,  56,  0,  0 }, // Heart
	}
};


const Objects objects_30_gb = // Wine supplies // OK
{
      {
            { (Entity*) &entity_18_gb,  36, 121,  0, +1 }, // Green spider
            { (Entity*) &entity_19_gb,  60, 131,  0, -1 }, // Brown spider
            { (Entity*) &entity_18_gb,  76, 100,  0, +1 }, // Green spider
            { (Entity*) &entity_10_gb, 144, 128,  0,  0 }, // Brown spider
            { (Entity*) &entity_19_gb, 196, 130,  0, -1,  0, FIX32(0.5) }, // Brown spider
            { (Entity*) &entity_12_gb, 220, 140,  0,  0 }, // Cross
	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #1 gb
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_01_gb = // Escape !!! // OK
{
      {
            { (Entity*) &entity_14_gb,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_gb,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_gb,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_gb, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_gb, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_gb, -150, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_gb, -170, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_gb, -190, 136, +1,  0 }, // Crusader
	}
};


const Objects objects_11_gb = // Death is close !!! // OK
{
      {
            { (Entity*) &entity_14_gb,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_gb,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_gb,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_gb, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_gb, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_gb, -150, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_gb, -170, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_gb, -190, 136, +1,  0 }, // Crusader
      }
};


const Objects objects_21_gb = // Abandone church // OK
{
      {
            { (Entity*) &entity_35_gb,   0, 112 }, // Door
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
const Objects objects_31_gb = // The Altar // OK
{
      {
            { (Entity*) &entity_35_gb, 248, 112,  0,  0,  0,  0,  1 }, // Door
            { (Entity*) &entity_36_gb, 208, 160,  0,  0 }, // Stone hatch
            { (Entity*) &entity_07_gb, 152,  56, -1,  0, FIX32(0.60) }, // Flying skull
            { (Entity*) &entity_07_gb, 136,  86, +1,  0, FIX32(0.30) }, // Flying skull
            { (Entity*) &entity_10_gb, 212, 140,  0,  0 }, // Yellow hint
            { (Entity*) &entity_08_gb,  56, 136,  0,  0 }, // Checkpoint
	}
};


const Objects objects_41_gb = // Hangman Tree // OK
{
      {
            { (Entity*) &entity_37_gb, 152, 104,  0, +1 }, // Hangman
            { (Entity*) &entity_38_gb, 152,  88,  0,  0 }, // Rope
            { (Entity*) &entity_38_gb, 152, 112,  0,  0 }, // Rope

            { (Entity*) &entity_37_gb, 176,  76,  0, +1 }, // Hangman
            { (Entity*) &entity_38_gb, 176,  64,  0,  0 }, // Rope
            { (Entity*) &entity_38_gb, 176,  88,  0,  0 }, // Rope
            { (Entity*) &entity_38_gb, 176, 102,  0,  0 }, // Rope

            { (Entity*) &entity_37_gb,  72,  88,  0, +1 }, // Hangman
            { (Entity*) &entity_38_gb,  72,  72,  0,  0 }, // Pope
            { (Entity*) &entity_38_gb,  72,  96,  0,  0 }, // Pope
            { (Entity*) &entity_38_gb,  72, 116,  0,  0 }, // Pope

            { (Entity*) &entity_37_gb,  48,  72,  0, +1 }, // Hangman
            { (Entity*) &entity_38_gb,  48,  56,  0,  0 }, // Rope
            { (Entity*) &entity_38_gb,  48,  80,  0,  0 }, // Rope
            { (Entity*) &entity_38_gb,  48, 104,  0,  0 }, // Pope

            { (Entity*) &entity_21_gb, 152,  48, -1,  0 }, // Snail
            { (Entity*) &entity_21_gb, 136, 152, -1,  0 }, // Snail
            { (Entity*) &entity_22_gb, 216, 144,  0,  0 }, // Switch  // 17
            { (Entity*) &entity_13_gb,  48,  32,  0,  0 }, // Inverted cross


	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #2 gb
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_02_gb = // Pestilent beast // OK
{
      {
            { (Entity*) &entity_47_gb, 120,  10,  0,  0 }, // Dragon head #0
            { (Entity*) &entity_48_gb, 112,   8,  0,  0 }, // Dragon body #1
            { (Entity*) &entity_49_gb, 125,  51,  0,  0 }, // Dragon fire #2

            { (Entity*) &entity_50_gb, -40, -40,  0, +1 }, // Running fire #3
            { (Entity*) &entity_50_gb, -40, -40,  0, -1 }, // Running fire #4
            { (Entity*) &entity_50_gb, -40, -40,  0, +1 }, // Running fire #5
            { (Entity*) &entity_50_gb, -40, -40,  0, -1 }, // Running fire #6
            { (Entity*) &entity_50_gb, -40, -40,  0, +1 }, // Running fire #7
            { (Entity*) &entity_50_gb, -40, -40,  0, -1 }, // Running fire #8

            { (Entity*) &entity_22_gb,  56,  32,  0,  0 }, // Switch      #9
            { (Entity*) &entity_11_gb,  80, 144,  0,  0 }, // Heart
            { (Entity*) &entity_12_gb, 204,  30,  0,  0 }, // Cross

            { (Entity*) &entity_46_gb, 184, 136,  0,  0 }, // Passage
      }
};


const Objects objects_12_gb = // Cave of illusions // OK // TODO: Mejorar el movimiento del coco
{
      {
            { (Entity*) &entity_11_gb,  16,  32,  0,  0 }, // Heart
            { (Entity*) &entity_26_gb, 128,  72,  0,  0 }, // El Coco
            { (Entity*) &entity_08_gb, 112, 136,  0,  0 }, // Checkpoint
      }
};


const Objects objects_22_gb = // Plagued ruins // OK
{
      {
            { (Entity*) &entity_10_gb,  80, 142,  0,  0 }, // Yellow hint
            { (Entity*) &entity_11_gb, 128,  48,  0,  0 }, // Heart
            { (Entity*) &entity_24_gb,  48,  24,  0, -1 }, // Skull wasp
            { (Entity*) &entity_24_gb, 128, 128,  0, -1 }, // Skull wasp

            { (Entity*) &entity_25_gb, 160,  32,  0, -1 }, // Human wasp
            { (Entity*) &entity_25_gb,  32, 112,  0, -1 }, // Human wasp
            { (Entity*) &entity_25_gb, 176, 128,  0, -1 }, // Human wasp
            { (Entity*) &entity_08_gb,  64,  56,  0,  0 }, // Checkpoint
	}
};


const Objects objects_32_gb = // Catacombs // OK
{
      {
            { (Entity*) &entity_23_gb,  80,  88, -1,  0 }, // Swordsman's skeleton
            { (Entity*) &entity_23_gb, 128, 136, -1,  0 }, // Swordsman's skeleton
            { (Entity*) &entity_12_gb, 144, 144,  0,  0 }, // Cross
	}
};


const Objects objects_42_gb = // Hidden garden // OK
{
      {
            { (Entity*) &entity_12_gb,  72,  32,   0,  0 }, // Cross          - #01
            { (Entity*) &entity_10_gb, 152,  78,   0,  0 }, // Yellow hint    - #02
            { (Entity*) &entity_21_gb, 168, 152,  -1,  0 }, // Snail          - #03
            { (Entity*) &entity_18_gb,  48,  24,   0, +1,  0, FIX32(0.60) }, // Green spider- #04

            { (Entity*) &entity_27_gb, 224,  48,   0,  0 }, // Spitting plant // 05
            { (Entity*) &entity_28_gb,   0, -60, -60,  0 }, // Spit           // 06
            { (Entity*) &entity_28_gb,   0, -60, -60,  0 }, // Spit           // 07

            { (Entity*) &entity_27_gb, 136,  32,   0,  0 }, // Spitting plant // 08
            { (Entity*) &entity_28_gb,   0, -60, -60,  0 }, // Spit           // 09
            { (Entity*) &entity_28_gb,   0, -60, -60,  0 }, // Spit           // 10

            { (Entity*) &entity_27_gb, 112, 112,   0,  0 }, // Spitting plant // 11
            { (Entity*) &entity_28_gb,   0, -60, -60,  0 }, // Spit           // 12
            { (Entity*) &entity_28_gb,   0, -60, -60,  0 }, // Spit           // 13

            { (Entity*) &entity_08_gb,  64, 136,   0,  0 }, // Checkpoint     - #00

	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #3 gb
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_03_gb = // Gloomy tunnels // OK
{
      {
            { (Entity*) &entity_54_gb,  32,  88,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_gb, 104,  32,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_gb,  88,  88,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_gb, 208,  32,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_gb, 192,  32,  0,  0 }, // Toxic drop

            { (Entity*) &entity_11_gb,  24, 112,  0,  0 }, // Heart
            { (Entity*) &entity_53_gb,  80,  56, -1,  0 }, // Evil crusader
            { (Entity*) &entity_53_gb, 192, 136, -1,  0 }, // Evil crusader
            { (Entity*) &entity_13_gb, 224,  64,  0,  0 }, // Inverted cross

            { (Entity*) &entity_08_gb, 168,  56,  0,  0 }, // Checkpoint
      }
};


const Objects objects_13_gb = // Lake of despair // OK
{
      {
            { (Entity*) &entity_15_gb,  48, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_gb,  64, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_gb,  80, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_gb,  96, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_gb, 112, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_gb, 128, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_gb, 144, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_gb, 160, 168,  0,  0 }, // Water

            { (Entity*) &entity_56_gb,  56, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_gb, 116, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_gb, 156, 160,  0,  0 }, // Splash

            { (Entity*) &entity_55_gb,  56, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_gb, 116, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_gb, 156, 168,  0,  0 }, // Fish

            { (Entity*) &entity_12_gb,  16,  48,  0,  0 }, // Cross
            { (Entity*) &entity_10_gb, 176,  40,  0,  0 }, // Yellow hint
            { (Entity*) &entity_18_gb, 144,  24,  0, +1, 0, FIX32(0.70)}, // Green spider
	}
};


const Objects objects_23_gb = // The wheel of Faith // OK
{
      {
            { (Entity*) &entity_33_gb,  12,  24,  0,  0 }, // Archer skeleton
            { (Entity*) &entity_33_gb, 221,  72, -1,  0 }, // Archer skeleton
            { (Entity*) &entity_33_gb, 116, 104, -1,  0 }, // Archer skeleton
            { (Entity*) &entity_34_gb, -20, -20,  0,  0 }, // Arrow
            { (Entity*) &entity_34_gb, -20, -20,  0,  0 }, // Arrow
            { (Entity*) &entity_34_gb, -20, -20,  0,  0 }, // Arrow

            { (Entity*) &entity_42_gb, 120,  16,  0,  0 }, // Wheel of faith

            { (Entity*) &entity_13_gb,  24,  80,  0,  0 }, // Inverted cross
            { (Entity*) &entity_12_gb, 216, 144,  0,  0 }, // Cross
            { (Entity*) &entity_11_gb, 168,  80,  0,  0 }, // Heart

            { (Entity*) &entity_65_gb, -80, -80,  0,  0 }, // Arrow explosion
      }
};


const Objects objects_33_gb = // Banquet of Death // OK :)
{
      {
            { (Entity*) &entity_12_gb,  24,  40,  0,  0 }, // Cross
            { (Entity*) &entity_11_gb, 120,  88,  0,  0 }, // Heart
            { (Entity*) &entity_39_gb,  16,   8, -1,  0 }, // Death
            { (Entity*) &entity_41_gb, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_gb, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_gb, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_gb, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_gb, -16, -16,  0, +1 }, // Scythe
      }
};


const Objects objects_43_gb = // Underground river // OK
{
      {
            { (Entity*) &entity_35_gb,   0, 128,  0,  0 }, // Door

            { (Entity*) &entity_15_gb, 112, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_gb, 128, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_gb, 144, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_gb, 160, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_gb, 176, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_gb, 192, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_gb, 208, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_gb, 224, 168,  0,  0 }, // Water

            { (Entity*) &entity_46_gb, 168, 120,  0,  0 }, // Passage
            { (Entity*) &entity_18_gb,  88,  48,  0, -1 }, // Green spider
            { (Entity*) &entity_12_gb,  24,  16,  0,  0 }, // Cross
            { (Entity*) &entity_11_gb, 200,  64,  0,  0 }, // Heart

            { (Entity*) &entity_54_gb,  48,   8,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_gb, 128,   8,  0,  0 }, // Toxic drop

            { (Entity*) &entity_56_gb, 144, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_gb, 192, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_gb, 112, 160,  0,  0 }, // Splash

            { (Entity*) &entity_55_gb, 144, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_gb, 192, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_gb, 112, 168,  0,  0 }, // Fish

            { (Entity*) &entity_08_gb,  64,  88,  0,  0 }, // Checkpoint
      }

};





////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #4 gb
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_04_gb = // Unexpected gate // OK
{
      {
            { (Entity*) &entity_51_gb, 216,  24,  0,  0,  0,  0, -1 }, // Gargoyle
            { (Entity*) &entity_52_gb, -40, -40,  0,  0             }, // Gargoyle spit
            { (Entity*) &entity_66_gb, -40, -40,  0,  0             }, // Gargoyle spit explosion

            { (Entity*) &entity_30_gb,  16,  80, +1,  0, FIX32(0.65) }, // Evil bird
            { (Entity*) &entity_30_gb, 209, 104, -1,  0, FIX32(0.65) }, // Evil bird

            { (Entity*) &entity_35_gb, 248, 112,  0,  0,  0,  0, -1 }, // Door // 03

            { (Entity*) &entity_22_gb, 192,  48,  0,  0 }, // Switch
            { (Entity*) &entity_53_gb, 136, 136, -1,  0 }  // Evil crusader
	}
};


const Objects objects_14_gb = // Evil church // OK
{
      {
            { (Entity*) &entity_10_gb,  24,  46,  0,  0 }, // Yellow hint

            { (Entity*) &entity_16_gb, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_32_gb,  16, 136, -1,  0, FIX32(0.60) }, // Demon
            { (Entity*) &entity_32_gb,  88,  40, -1,  0, FIX32(0.60) }, // Demon
            { (Entity*) &entity_32_gb, 128, 136, -1,  0, FIX32(0.60) }, // Demon

            { (Entity*) &entity_33_gb, 190, 120,  0,  0 }, // Archer skeleton
            { (Entity*) &entity_34_gb, -60, -60, -1,  0 }, // Arrow

            { (Entity*) &entity_08_gb, 152,  40,  0,  0 }, // Checkpoint

            { (Entity*) &entity_65_gb, -80, -80,  0,  0 }, // Arrow explosion
	}
};


const Objects objects_24_gb = // Tortured souls // OK
{
      {
            { (Entity*) &entity_51_gb, 224, 104,  0,  0,  0,  0, -1 }, // Gargoyle
            { (Entity*) &entity_52_gb, -40, -40,  0,  0             }, // Gargoyle spit
            { (Entity*) &entity_66_gb, -40, -40,  0,  0             }, // Gargoyle spit explosion

            { (Entity*) &entity_13_gb, 220, 142,  0,  0 }, // Inverted cross

            { (Entity*) &entity_16_gb, 192, 144,  0,  0 }, // Fire

            { (Entity*) &entity_32_gb,  68,   8, -1,  0, FIX32(0.90),  0, 0, 1 }, // Demon //            { (Entity*) &entity_23_gb,  60,   8, -1,  0, FIX32(0.70),  0, 0, 1 }, // Swordsman's skeleton
            { (Entity*) &entity_32_gb, 148,  64, -1,  0, FIX32(0.90),  0, 0, 0 }, // Demon //            { (Entity*) &entity_23_gb, 140,  64, -1,  0, FIX32(0.60),  0, 0, 0 }, // Swordsman's skeleton
            { (Entity*) &entity_32_gb, 208,  64, -1,  0,           0,  0, 0, 0 }, // Demon

            { (Entity*) &entity_16_gb,  80, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_gb,  96, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_gb, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_gb, 160, 160,  0,  0 }, // Fire

            { (Entity*) &entity_29_gb,  80, 136,  0, -1,  0, FIX32(1.90) }, // Fireball
            { (Entity*) &entity_29_gb,  96, 152,  0, -1,  0, FIX32(1.25) }, // Fireball
            { (Entity*) &entity_29_gb, 152, 160,  0, -1,  0, FIX32(1.50) }, // Fireball
	}
};


const Objects objects_34_gb = // Ashes to ashes // OK
{
      {
            { (Entity*) &entity_16_gb,  16, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_gb,  32, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_gb, 112, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_gb, 128, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_gb, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_gb, 160, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_gb, 176, 160,  0,  0 }, // Fire

            { (Entity*) &entity_29_gb,  48,  44,  0, -1 }, // Fireball
            { (Entity*) &entity_29_gb,  80, 144,  0, -1 }, // Fireball
            { (Entity*) &entity_29_gb, 112,  88,  0, -1 }, // Fireball
            { (Entity*) &entity_29_gb, 150,   8,  0, +1 }, // Fireball
            { (Entity*) &entity_29_gb, 168, 152,  0, +1 }, // Fireball
            { (Entity*) &entity_29_gb, 200,  44,  0, +1 }, // Fireball

            { (Entity*) &entity_11_gb,  96, 144,  0,  0 }, // Heart
            { (Entity*) &entity_11_gb, 224,  24,  0,  0 }, // Heart

            { (Entity*) &entity_07_gb,  72,  14, +1,  0, FIX32(0.4) }, // Flying skull
            { (Entity*) &entity_07_gb, 184,  96, -1,  0, FIX32(0.4) }, // Flying skull

            { (Entity*) &entity_08_gb, 64, 136,  0,  0 }, // Checkpoint
	}
};



const Objects objects_44_gb = // Satan!!! // TODO
{
      {
            { (Entity*) &entity_35_gb,   0, 128 }, // Door

            { (Entity*) &entity_14_gb,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_gb,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_gb,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_gb, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_gb, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_gb, -150, 136, +1,  0 }, // Crusader

            { (Entity*) &entity_59_gb, 120,  16,  0,  0 }, // Grial
            { (Entity*) &entity_60_gb, 222, 111,  0,  0 }, // Red hint

            { (Entity*) &entity_58_gb, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_gb, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_gb, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_gb, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_gb, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_gb, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_gb, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_gb, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_gb, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_gb, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_gb, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_gb, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_57_gb, 196,  80,  0, +1 }, // Satan

            { (Entity*) &entity_61_gb, 128, 190,  0,  0 }, // Catched cross // puts out of the screen
            { (Entity*) &entity_64_gb, 128, 190,  0,  0 }, // Satan bullet explosion // Used to be saved in VRAM
	}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Other gb
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////




const Objects objects_prologue_gb =
{
      {
            { (Entity*) &entity_02_gb,  -16, 118, +1,  0  }, // Jean walks

            { (Entity*) &entity_14_gb,  -70, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_gb,  -95, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_gb, -120, 116, +1,  0, FIX32(0.50) }, // Crusader
      }
};

const Objects objects_burnhim_gb =
{
      {
            { (Entity*) &entity_14_gb,   48, 136 }, // Crusader
            { (Entity*) &entity_14_gb,   72, 136 }, // Crusader
            { (Entity*) &entity_14_gb,  152, 136 }, // Crusader
            { (Entity*) &entity_14_gb,  176, 136 }, // Crusader

            { (Entity*) &entity_50_gb,   96, 128 }, // Running fire
            { (Entity*) &entity_50_gb,  112, 128 }, // Running fire
            { (Entity*) &entity_50_gb,  128, 128 }, // Running fire

            { (Entity*) &entity_03_gb,  112, 118 }, // Jean stays
            { (Entity*) &entity_62_gb,   96,  96 }, // Bonfire
	}
};

const Objects objects_info_gb =
{
      {
            { (Entity*) &entity_02_gb,  12,  20,  0,  0,  0,  0, -1, 0 }, // Jean walks
            { (Entity*) &entity_22_gb,  12, 192,  0,  0,  0,  0, -1, 0 }, // Switch
            { (Entity*) &entity_20_gb, 208, 188 }, // Bell
            { (Entity*) &entity_59_gb, 192, 164 }, // Grial
            { (Entity*) &entity_42_gb, 208,  28 }, // Wheel of faith
            { (Entity*) &entity_10_gb, 110,  52 }, // Yellow hint
            { (Entity*) &entity_11_gb,  32,  76 }, // Heart
            { (Entity*) &entity_12_gb,   8, 100 }, // Cross
            { (Entity*) &entity_08_gb, 150,  84 }, // Checkpoint
            { (Entity*) &entity_46_gb,  36, 144 }, // Passage
            { (Entity*) &entity_39_gb,  98, 128,  0,  0,  0,  0, -1, 0 }, // Death

      }
}
;




const Mask mask_20_gb =
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
      {  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  0,  0,  0,  2,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  2,  0,  2 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  2,  2,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};



const Mask mask_30_gb =
{
   {
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};


const Mask mask_21_gb =
{
   {
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  2,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
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




const Mask mask_31_gb =
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

const Mask mask_41_gb =
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

const Mask mask_02_gb =
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


const Mask mask_22_gb =
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
      {  1,  1,  2,  2,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1 },
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

const Mask mask_03_gb =
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

const Mask mask_13_gb =
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

const Mask mask_23_gb =
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



const Mask mask_33_gb =
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

const Mask mask_43_gb =
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

const Mask mask_04_gb =
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
      {  1,  1,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  1,  1,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  0,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};



const Mask mask_24_gb =
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



const Mask mask_34_gb =
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

const Mask mask_44_gb =
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

const Room room_00_gb = { (Image*) &room_00_f_gb, NULL, (Objects*) &objects_null,  (Mask*) &mask_00_all, (Image*) &text_00_gb, (Music*) &music_00_all,         room_null };
const Room room_01_gb = { (Image*) &room_01_f_gb, NULL, (Objects*) &objects_01_gb, (Mask*) &mask_01_all, (Image*) &text_01_gb, (Music*) &music_08_all,         room_null };
const Room room_02_gb = { (Image*) &room_02_f_gb, NULL, (Objects*) &objects_02_gb, (Mask*) &mask_02_gb,  (Image*) &text_02_gb, (Music*) &music_02_all, room_funct_02_all };
const Room room_03_gb = { (Image*) &room_03_f_gb, NULL, (Objects*) &objects_03_gb, (Mask*) &mask_03_gb,  (Image*) &text_03_gb, (Music*) &music_02_all, room_funct_03_all };
const Room room_04_gb = { (Image*) &room_04_f_gb, NULL, (Objects*) &objects_04_gb, (Mask*) &mask_04_gb,  (Image*) &text_04_gb, (Music*) &music_02_all, room_funct_04_all };

const Room room_10_gb = { (Image*) &room_10_f_gb, (Image*) &room_10_b_gb, (Objects*) &objects_null,  (Mask*) &mask_10_all, (Image*) &text_10_gb, (Music*) &music_10_all, room_funct_10_all };
const Room room_11_gb = { (Image*) &room_11_f_gb, (Image*) &room_11_b_gb, (Objects*) &objects_11_gb, (Mask*) &mask_11_all, (Image*) &text_11_gb, (Music*) &music_08_all, room_funct_11_all };
const Room room_12_gb = { (Image*) &room_12_f_gb, NULL, (Objects*) &objects_12_gb, (Mask*) &mask_12_all, (Image*) &text_12_gb, (Music*) &music_02_all, room_funct_12_all };
const Room room_13_gb = { (Image*) &room_13_f_gb, NULL, (Objects*) &objects_13_gb, (Mask*) &mask_13_gb,  (Image*) &text_13_gb, (Music*) &music_02_all, room_funct_13_all };
const Room room_14_gb = { (Image*) &room_14_f_gb, NULL, (Objects*) &objects_14_gb, (Mask*) &mask_14_all, (Image*) &text_14_gb, (Music*) &music_03_all, room_funct_14_all };

const Room room_20_gb = { (Image*) &room_20_f_gb, (Image*) &room_20_b_gb, (Objects*) &objects_20_gb, (Mask*) &mask_20_gb,  (Image*) &text_20_gb, (Music*) &music_01_all, room_funct_20_all };
const Room room_21_gb = { (Image*) &room_21_f_gb, NULL, (Objects*) &objects_21_gb, (Mask*) &mask_21_gb,  (Image*) &text_21_gb, (Music*) &music_01_all, room_funct_21_all };
const Room room_22_gb = { (Image*) &room_22_f_gb, NULL, (Objects*) &objects_22_gb, (Mask*) &mask_22_gb,  (Image*) &text_22_gb, (Music*) &music_01_all,         room_null };
const Room room_23_gb = { (Image*) &room_23_f_gb, NULL, (Objects*) &objects_23_gb, (Mask*) &mask_23_gb,  (Image*) &text_23_gb, (Music*) &music_01_all, room_funct_23_all };
const Room room_24_gb = { (Image*) &room_24_f_gb, NULL, (Objects*) &objects_24_gb, (Mask*) &mask_24_gb,  (Image*) &text_24_gb, (Music*) &music_03_all, room_funct_24_all };

const Room room_30_gb = { (Image*) &room_30_f_gb, (Image*) &room_30_b_gb, (Objects*) &objects_30_gb, (Mask*) &mask_30_gb,  (Image*) &text_30_gb, (Music*) &music_01_all, room_funct_30_all };
const Room room_31_gb = { (Image*) &room_31_f_gb, NULL, (Objects*) &objects_31_gb, (Mask*) &mask_31_gb,  (Image*) &text_31_gb, (Music*) &music_01_all, room_funct_31_all };
const Room room_32_gb = { (Image*) &room_32_f_gb, NULL, (Objects*) &objects_32_gb, (Mask*) &mask_32_all, (Image*) &text_32_gb, (Music*) &music_01_all,         room_null };
const Room room_33_gb = { (Image*) &room_33_f_gb, NULL, (Objects*) &objects_33_gb, (Mask*) &mask_33_gb,  (Image*) &text_33_gb, (Music*) &music_04_all, room_funct_33_all };
const Room room_34_gb = { (Image*) &room_34_f_gb, NULL, (Objects*) &objects_34_gb, (Mask*) &mask_34_gb,  (Image*) &text_34_gb, (Music*) &music_03_all, room_funct_34_all };

const Room room_40_gb = { (Image*) &room_40_f_gb, NULL, (Objects*) &objects_null,  (Mask*) &mask_40_all, (Image*) &text_40_gb, (Music*) &music_00_all,         room_null };
const Room room_41_gb = { (Image*) &room_41_f_gb, NULL, (Objects*) &objects_41_gb, (Mask*) &mask_41_gb,  (Image*) &text_41_gb, (Music*) &music_00_all, room_funct_41_all };
const Room room_42_gb = { (Image*) &room_42_f_gb, NULL, (Objects*) &objects_42_gb, (Mask*) &mask_42_all, (Image*) &text_42_gb, (Music*) &music_02_all, room_funct_42_all };
const Room room_43_gb = { (Image*) &room_43_f_gb, NULL, (Objects*) &objects_43_gb, (Mask*) &mask_43_gb,  (Image*) &text_43_gb, (Music*) &music_02_all, room_funct_43_all };
const Room room_44_gb = { (Image*) &room_44_f_gb, NULL, (Objects*) &objects_44_gb, (Mask*) &mask_44_gb,  (Image*) &text_44_gb, (Music*) &music_04_all, room_funct_44_all };


