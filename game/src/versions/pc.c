#include "../../inc/include.h"

#include "../../res/pc/sprites.h"
#include "../../res/pc/texts.h"
#include "../../res/all/texts.h"
#include "../../res/pc/foreground.h"
#include "../../res/pc/background.h"
#include "../../inc/versions/all.h"



const Entity entity_01_pc  = {  1, "Jean stays",               0, (SpriteDefinition*) &jean_2x3_pc,      PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  4,  0,  4 } };
const Entity entity_02_pc  = {  2, "Jean walks",               1, (SpriteDefinition*) &jean_2x3_pc,      PAL3, ENTITY_PLAYER,     FIX32(0.90),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  4,  0,  4 } };
const Entity entity_03_pc  = {  3, "Jean jumps",               2, (SpriteDefinition*) &jean_2x3_pc,      PAL3, ENTITY_PLAYER,     FIX32(0.90),           0, FIX32(0.13), 0, 1, 0, NULL, mcb_player,      0, {  5,  4,  0,  4 } };
const Entity entity_04_pc  = {  4, "Jean burns",               3, (SpriteDefinition*) &jean_2x3_pc,      PAL3, ENTITY_NULL,                 0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  4,  1,  4 } };
const Entity entity_05_pc  = {  5, "Jean lie down",            0, (SpriteDefinition*) &jean_3x2_pc,      PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  8,  0,  8 } }; // {  8,  6,  0, 10 } };
const Entity entity_06_pc  = {  6, "Jean sneaks",              1, (SpriteDefinition*) &jean_3x2_pc,      PAL3, ENTITY_PLAYER,      FIX32(0.2),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  8,  0,  8 } }; // {  8,  6,  0, 10 } };
const Entity entity_07_pc  = {  7, "Flying skull",             4, (SpriteDefinition*) &enemies_2x2_pc,   PAL2, ENTITY_ENEMY,       FIX32(0.8),           0,        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  4,  5,  3,  4 } };
const Entity entity_08_pc  = {  8, "Checkpoint",               4, (SpriteDefinition*) &jean_2x3_pc,      PAL3, ENTITY_CHECKPOINT,           0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_09_pc  = {  9, "Checkpoint active",        5, (SpriteDefinition*) &jean_2x3_pc,      PAL3, ENTITY_NULL,                 0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_10_pc  = { 10, "Yellow hint",             12, (SpriteDefinition*) &objects_2x2_pc,   PAL3, ENTITY_HINT,                 0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_11_pc  = { 11, "Heart",                   11, (SpriteDefinition*) &objects_2x2_pc,   PAL3, ENTITY_HEART,                0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_12_pc  = { 12, "Cross",                    0, (SpriteDefinition*) &objects_2x2_pc,   PAL3, ENTITY_CROSS,                0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_13_pc  = { 13, "Inverted cross",           1, (SpriteDefinition*) &objects_2x2_pc,   PAL3, ENTITY_INV_CROSS,            0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_14_pc  = { 14, "Crusader",                 1, (SpriteDefinition*) &enemies_2x3_pc,   PAL2, ENTITY_ENEMY,      FIX32(0.60),           0, FIX32(0.20), 0, 1, 0, NULL, mcb_crusader,    0, {  7,  5,  0,-25 } }; // {  7,  5,  0,  5 } };
const Entity entity_15_pc  = { 15, "Water",                    6, (SpriteDefinition*) &enemies_2x1_pc,   PAL2, ENTITY_NULL,                 0,           0,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_16_pc  = { 16, "Fire",                    11, (SpriteDefinition*) &enemies_2x2_pc,   PAL2, ENTITY_NULL,              zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_17_pc  = { 17, "Rat",                      1, (SpriteDefinition*) &enemies_2x2_pc,   PAL2, ENTITY_ENEMY,      FIX32(0.80),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  0,  0,  0 } };
const Entity entity_18_pc  = { 18, "Green spider",             2, (SpriteDefinition*) &enemies_2x2_pc,   PAL2, ENTITY_ENEMY,             zero, FIX32(0.75),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
const Entity entity_19_pc  = { 19, "Brown spider",             3, (SpriteDefinition*) &enemies_2x2_pc,   PAL2, ENTITY_ENEMY,             zero, FIX32(1.00),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
const Entity entity_20_pc  = { 20, "Bell",                    14, (SpriteDefinition*) &objects_2x2_pc,   PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_21_pc  = { 21, "Snail",                    4, (SpriteDefinition*) &enemies_2x1_pc,   PAL2, ENTITY_ENEMY,      FIX32(0.30),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  2,  0,  2 } };
const Entity entity_22_pc  = { 22, "Switch (off)",             2, (SpriteDefinition*) &objects_2x2_pc,   PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_23_pc  = { 23, "Swordsman's skeleton",     2, (SpriteDefinition*) &enemies_2x3_pc,   PAL2, ENTITY_ENEMY,      FIX32(0.60),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  6,  5,  0,  5 } };
const Entity entity_24_pc  = { 24, "Skull wasp",               5, (SpriteDefinition*) &enemies_2x2_pc,   PAL2, ENTITY_ENEMY,      FIX32(0.50), FIX32(0.50),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
const Entity entity_25_pc  = { 25, "Human wasp",              10, (SpriteDefinition*) &enemies_2x2_pc,   PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
const Entity entity_26_pc  = { 26, "El Coco",                  7, (SpriteDefinition*) &enemies_2x2_pc,   PAL2, ENTITY_ENEMY,      FIX32(0.45), FIX32(0.45),        zero, 0, 1, 0, NULL, mcb_coco,        0, {  2,  2,  2,  2 } };
const Entity entity_27_pc  = { 27, "Spitting plant",           0, (SpriteDefinition*) &enemies_2x2_pc,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
const Entity entity_28_pc  = { 28, "Spit",                     2, (SpriteDefinition*) &enemies_2x1_pc,   PAL2, ENTITY_ENEMY,      FIX32(0.75), FIX32(2.20), FIX32(0.10), 0, 0, 0, NULL, mcb_bullet,      0, {  1,  5,  1,  5 } };
const Entity entity_29_pc  = { 29, "Fireball",                 6, (SpriteDefinition*) &enemies_2x2_pc,   PAL2, ENTITY_ENEMY,                0, FIX32(1.50),           0, 0, 0, 0, NULL, mcb_fireball,    0, {  4,  4,  4,  4 } };
const Entity entity_30_pc  = { 30, "Evil bird",                0, (SpriteDefinition*) &enemies_3x2_pc,   PAL2, ENTITY_ENEMY,       FIX32(1.0),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  2,  0,  1,  1 } };
const Entity entity_31_pc  = { 31, "Spikes",                   8, (SpriteDefinition*) &enemies_2x1_pc,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  2,  0,  0,  0 } };
const Entity entity_32_pc  = { 32, "Demon",                    3, (SpriteDefinition*) &enemies_2x3_pc,   PAL2, ENTITY_ENEMY,      FIX32(0.75),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
const Entity entity_33_pc  = { 33, "Archer skeleton",          0, (SpriteDefinition*) &enemies_3x3_pc,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  6,  6,  0,  6 } };
const Entity entity_34_pc  = { 34, "Arrow",                    5, (SpriteDefinition*) &enemies_2x1_pc,   PAL2, ENTITY_ENEMY,      FIX32(2.50),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  2,  3,  2,  3 } };
const Entity entity_35_pc  = { 35, "Door",                     0, (SpriteDefinition*) &objects_1x4_pc,   PAL3, ENTITY_DOOR,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_36_pc  = { 36, "Stone hatch",              0, (SpriteDefinition*) &hatch_2x2_pc,     PAL1, ENTITY_HATCH,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_37_pc  = { 37, "Hangman",                  7, (SpriteDefinition*) &jean_2x3_pc,      PAL3, ENTITY_ENEMY,                0, FIX32(0.60),           0, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  1,  2,  0,  2 } };
const Entity entity_38_pc  = { 38, "Rope",                     6, (SpriteDefinition*) &jean_2x3_pc,      PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_39_pc  = { 39, "Death",                    0, (SpriteDefinition*) &death_4x4_pc,     PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  8,  5,  4 } };//{  0,  0,  2,  0 } };
const Entity entity_40_pc  = { 40, "Death throw",              1, (SpriteDefinition*) &death_4x4_pc,     PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  8,  5,  4 } };//{  0,  0,  4,  0 } };
const Entity entity_41_pc  = { 41, "Scythe",                   0, (SpriteDefinition*) &death_2x2_pc,     PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),           0, 0, 0, 0, NULL, mcb_scythe,      0, {  2,  2,  2,  2 } };//{  1,  1,  1,  1 } };
const Entity entity_42_pc  = { 42, "Wheel of faith",           5, (SpriteDefinition*) &objects_2x2_pc,   PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
const Entity entity_43_pc  = { 43, "Wheel of faith",           6, (SpriteDefinition*) &objects_2x2_pc,   PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
const Entity entity_44_pc  = { 44, "Bell (on)",               15, (SpriteDefinition*) &objects_2x2_pc,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_45_pc  = { 45, "Switch (on)",              3, (SpriteDefinition*) &objects_2x2_pc,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_46_pc  = { 46, "Passage",                  8, (SpriteDefinition*) &jean_2x3_pc,      PAL3, ENTITY_PASSAGE,              0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, { 16,  7,  0,  7 } };
const Entity entity_47_pc  = { 47, "Dragon head",              0, (SpriteDefinition*) &dragon_4x5_pc,    PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_48_pc  = { 48, "Dragon body",              0, (SpriteDefinition*) &dragon_12x5_pc,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_49_pc  = { 49, "Dragon fire",              0, (SpriteDefinition*) &dragon_3x6_pc,    PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  0,  2,  0,  2 } };
const Entity entity_50_pc  = { 50, "Running fire",             0, (SpriteDefinition*) &dragon_2x2_pc,    PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  0,  0,  0 } };
const Entity entity_51_pc  = { 51, "Gargoyle",                 8, (SpriteDefinition*) &enemies_2x2_pc,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
const Entity entity_52_pc  = { 52, "Gargoyle spit",            1, (SpriteDefinition*) &enemies_2x1_pc,   PAL2, ENTITY_ENEMY,      FIX32(3.00),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  1,  1,  2,  1 } };
const Entity entity_53_pc  = { 53, "Evil cursader",            0, (SpriteDefinition*) &enemies_2x3_pc,   PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
const Entity entity_54_pc  = { 54, "Toxic drop",               3, (SpriteDefinition*) &enemies_2x1_pc,   PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.09), 0, 0, 0, NULL, mcb_drop,        0, {  0,  3,  0,  3 } };
const Entity entity_55_pc  = { 55, "Fish",                     9, (SpriteDefinition*) &enemies_2x2_pc,   PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.10), 0, 0, 1, NULL, mcb_null,        0, {  0,  1,  0,  1 } };
const Entity entity_56_pc  = { 56, "Splash",                   7, (SpriteDefinition*) &enemies_2x1_pc,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_57_pc  = { 57, "Satan",                    0, (SpriteDefinition*) &satan_4x6_pc,     PAL2, ENTITY_ENEMY,                0, FIX32(0.75),           0, 0, 0, 0, NULL, mcb_udlr,        0, {  } };
const Entity entity_58_pc  = { 58, "Satan bullet",             0, (SpriteDefinition*) &enemies_2x1_pc,   PAL2, ENTITY_ENEMY,      FIX32(1.00),           0,           0, 0, 0, 0, NULL, mcb_bullet,      0, {  1,  5,  1,  5 } };
const Entity entity_59_pc  = { 59, "Grial",                    4, (SpriteDefinition*) &objects_2x2_pc,   PAL3, ENTITY_GRIAL,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_60_pc  = { 60, "Red hint",                13, (SpriteDefinition*) &objects_2x2_pc,   PAL3, ENTITY_HINT,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_61_pc  = { 61, "Catched cross",            0, (SpriteDefinition*) &objects_1x1_pc,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_62_pc  = { 62, "Bonfire",                  0, (SpriteDefinition*) &bonfire_6x8_pc,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_63_pc  = { 63, "Bell ringing",             0, (SpriteDefinition*) &objects_4x2_pc,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_64_pc  = { 64, "Satan bullet explosion",   9, (SpriteDefinition*) &enemies_2x1_pc,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_65_pc  = { 65, "Arrow explosion",         11, (SpriteDefinition*) &enemies_2x1_pc,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_66_pc  = { 66, "Gargoyle spit explosion", 10, (SpriteDefinition*) &enemies_2x1_pc,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };

const Entity entity_81_pc  = { 81, "Evil Jean",                0, (SpriteDefinition*) &evil_jean_2x3_pc, PAL3, ENTITY_NULL,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };



////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #0 PC
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_20_pc = // Tower of the Bell // OK // PC: Hacer que la campana se mueva al tocarla
{
      {
            { (Entity*) &entity_20_pc,  70,   8,  0,  0 }, // Bell
            { (Entity*) &entity_17_pc,  64, 144, +1,  0 }, // Rat
            { (Entity*) &entity_17_pc, 216, 144, -1,  0 }, // Rat
            { (Entity*) &entity_11_pc,  96,  56,  0,  0 }, // Heart
	}
};


const Objects objects_30_pc = // Wine supplies // OK
{
      {
            { (Entity*) &entity_18_pc,  36, 121,  0, +1 }, // Green spider
            { (Entity*) &entity_19_pc,  60, 131,  0, -1 }, // Brown spider
            { (Entity*) &entity_18_pc,  76, 100,  0, +1 }, // Green spider
            { (Entity*) &entity_10_pc, 144, 128,  0,  0 }, // Brown spider
            { (Entity*) &entity_19_pc, 196, 130,  0, -1,  0, FIX32(0.5) }, // Brown spider
            { (Entity*) &entity_12_pc, 220, 140,  0,  0 }, // Cross
	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #1 PC
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_01_pc = // Escape !!! // OK
{
      {
            { (Entity*) &entity_14_pc,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pc,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pc,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pc, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pc, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pc, -150, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_pc, -170, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_pc, -190, 136, +1,  0 }, // Crusader
	}
};


const Objects objects_11_pc = // Death is close !!! // OK
{
      {
            { (Entity*) &entity_14_pc,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pc,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pc,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pc, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pc, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pc, -150, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_pc, -170, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_pc, -190, 136, +1,  0 }, // Crusader
      }
};


const Objects objects_21_pc = // Abandone church // OK
{
      {
            { (Entity*) &entity_35_pc,   0, 112 }, // Door
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
const Objects objects_31_pc = // The Altar // OK
{
      {
            { (Entity*) &entity_35_pc, 248, 112,  0,  0,  0,  0,  1 }, // Door
            { (Entity*) &entity_36_pc, 208, 160,  0,  0 }, // Stone hatch
            { (Entity*) &entity_07_pc, 152,  56, -1,  0, FIX32(0.60) }, // Flying skull
            { (Entity*) &entity_07_pc, 136,  86, +1,  0, FIX32(0.30) }, // Flying skull
            { (Entity*) &entity_10_pc, 212, 140,  0,  0 }, // Yellow hint
            { (Entity*) &entity_08_pc,  56, 136,  0,  0 }, // Checkpoint
	}
};


const Objects objects_41_pc = // Hangman Tree // OK
{
      {
            { (Entity*) &entity_37_pc, 152, 104,  0, +1 }, // Hangman
            { (Entity*) &entity_38_pc, 152,  88,  0,  0 }, // Rope
            { (Entity*) &entity_38_pc, 152, 112,  0,  0 }, // Rope

            { (Entity*) &entity_37_pc, 176,  76,  0, +1 }, // Hangman
            { (Entity*) &entity_38_pc, 176,  64,  0,  0 }, // Rope
            { (Entity*) &entity_38_pc, 176,  88,  0,  0 }, // Rope
            { (Entity*) &entity_38_pc, 176, 102,  0,  0 }, // Rope

            { (Entity*) &entity_37_pc,  72,  88,  0, +1 }, // Hangman
            { (Entity*) &entity_38_pc,  72,  72,  0,  0 }, // Pope
            { (Entity*) &entity_38_pc,  72,  96,  0,  0 }, // Pope
            { (Entity*) &entity_38_pc,  72, 116,  0,  0 }, // Pope

            { (Entity*) &entity_37_pc,  48,  72,  0, +1 }, // Hangman
            { (Entity*) &entity_38_pc,  48,  56,  0,  0 }, // Rope
            { (Entity*) &entity_38_pc,  48,  80,  0,  0 }, // Rope
            { (Entity*) &entity_38_pc,  48, 104,  0,  0 }, // Pope

            { (Entity*) &entity_21_pc, 152,  48, -1,  0 }, // Snail
            { (Entity*) &entity_21_pc, 136, 152, -1,  0 }, // Snail
            { (Entity*) &entity_22_pc, 216, 144,  0,  0 }, // Switch  // 17
            { (Entity*) &entity_13_pc,  48,  32,  0,  0 }, // Inverted cross


	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #2 PC
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_02_pc = // Pestilent beast // OK
{
      {
            { (Entity*) &entity_47_pc, 120,  10,  0,  0 }, // Dragon head #0
            { (Entity*) &entity_48_pc, 112,   8,  0,  0 }, // Dragon body #1
            { (Entity*) &entity_49_pc, 125,  51,  0,  0 }, // Dragon fire #2

            { (Entity*) &entity_50_pc, -40, -40,  0, +1 }, // Running fire #3
            { (Entity*) &entity_50_pc, -40, -40,  0, -1 }, // Running fire #4
            { (Entity*) &entity_50_pc, -40, -40,  0, +1 }, // Running fire #5
            { (Entity*) &entity_50_pc, -40, -40,  0, -1 }, // Running fire #6
            { (Entity*) &entity_50_pc, -40, -40,  0, +1 }, // Running fire #7
            { (Entity*) &entity_50_pc, -40, -40,  0, -1 }, // Running fire #8

            { (Entity*) &entity_22_pc,  56,  32,  0,  0 }, // Switch      #9
            { (Entity*) &entity_11_pc,  80, 144,  0,  0 }, // Heart
            { (Entity*) &entity_12_pc, 204,  30,  0,  0 }, // Cross

            { (Entity*) &entity_46_pc, 184, 136,  0,  0 }, // Passage
      }
};


const Objects objects_12_pc = // Cave of illusions // OK // TODO: Mejorar el movimiento del coco
{
      {
            { (Entity*) &entity_11_pc,  16,  32,  0,  0 }, // Heart
            { (Entity*) &entity_26_pc, 128,  72,  0,  0 }, // El Coco
            { (Entity*) &entity_08_pc, 112, 136,  0,  0 }, // Checkpoint
      }
};


const Objects objects_22_pc = // Plagued ruins // OK
{
      {
            { (Entity*) &entity_10_pc,  80, 142,  0,  0 }, // Yellow hint
            { (Entity*) &entity_11_pc, 128,  48,  0,  0 }, // Heart
            { (Entity*) &entity_24_pc,  48,  24,  0, -1 }, // Skull wasp
            { (Entity*) &entity_24_pc, 128, 128,  0, -1 }, // Skull wasp

            { (Entity*) &entity_25_pc, 160,  32,  0, -1 }, // Human wasp
            { (Entity*) &entity_25_pc,  32, 112,  0, -1 }, // Human wasp
            { (Entity*) &entity_25_pc, 176, 128,  0, -1 }, // Human wasp
            { (Entity*) &entity_08_pc,  64,  56,  0,  0 }, // Checkpoint
	}
};


const Objects objects_32_pc = // Catacombs // OK
{
      {
            { (Entity*) &entity_23_pc,  80,  88, -1,  0 }, // Swordsman's skeleton
            { (Entity*) &entity_23_pc, 128, 136, -1,  0 }, // Swordsman's skeleton
            { (Entity*) &entity_12_pc, 144, 144,  0,  0 }, // Cross
	}
};


const Objects objects_42_pc = // Hidden garden // OK
{
      {
            { (Entity*) &entity_12_pc,  72,  32,   0,  0 }, // Cross          - #01
            { (Entity*) &entity_10_pc, 152,  78,   0,  0 }, // Yellow hint    - #02
            { (Entity*) &entity_21_pc, 168, 152,  -1,  0 }, // Snail          - #03
            { (Entity*) &entity_18_pc,  48,  24,   0, +1,  0, FIX32(0.60) }, // Green spider- #04

            { (Entity*) &entity_27_pc, 224,  48,   0,  0 }, // Spitting plant // 05
            { (Entity*) &entity_28_pc,   0, -60, -60,  0 }, // Spit           // 06
            { (Entity*) &entity_28_pc,   0, -60, -60,  0 }, // Spit           // 07

            { (Entity*) &entity_27_pc, 136,  32,   0,  0 }, // Spitting plant // 08
            { (Entity*) &entity_28_pc,   0, -60, -60,  0 }, // Spit           // 09
            { (Entity*) &entity_28_pc,   0, -60, -60,  0 }, // Spit           // 10

            { (Entity*) &entity_27_pc, 112, 112,   0,  0 }, // Spitting plant // 11
            { (Entity*) &entity_28_pc,   0, -60, -60,  0 }, // Spit           // 12
            { (Entity*) &entity_28_pc,   0, -60, -60,  0 }, // Spit           // 13

            { (Entity*) &entity_08_pc,  64, 136,   0,  0 }, // Checkpoint     - #00

	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #3 PC
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_03_pc = // Gloomy tunnels // OK
{
      {
            { (Entity*) &entity_54_pc,  32,  88,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_pc, 104,  32,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_pc,  88,  88,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_pc, 208,  32,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_pc, 192,  32,  0,  0 }, // Toxic drop

            { (Entity*) &entity_11_pc,  24, 112,  0,  0 }, // Heart
            { (Entity*) &entity_53_pc,  80,  56, -1,  0 }, // Evil crusader
            { (Entity*) &entity_53_pc, 192, 136, -1,  0 }, // Evil crusader
            { (Entity*) &entity_13_pc, 224,  64,  0,  0 }, // Inverted cross

            { (Entity*) &entity_08_pc, 168,  56,  0,  0 }, // Checkpoint
      }
};


const Objects objects_13_pc = // Lake of despair // OK
{
      {
            { (Entity*) &entity_15_pc,  48, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pc,  64, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pc,  80, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pc,  96, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pc, 112, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pc, 128, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pc, 144, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pc, 160, 168,  0,  0 }, // Water

            { (Entity*) &entity_56_pc,  56, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_pc, 116, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_pc, 156, 160,  0,  0 }, // Splash

            { (Entity*) &entity_55_pc,  56, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_pc, 116, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_pc, 156, 168,  0,  0 }, // Fish

            { (Entity*) &entity_12_pc,  16,  48,  0,  0 }, // Cross
            { (Entity*) &entity_10_pc, 176,  40,  0,  0 }, // Yellow hint
            { (Entity*) &entity_18_pc, 144,  24,  0, +1, 0, FIX32(0.70)}, // Green spider
	}
};


const Objects objects_23_pc = // The wheel of Faith // OK
{
      {
            { (Entity*) &entity_33_pc,  12,  24,  0,  0 }, // Archer skeleton
            { (Entity*) &entity_33_pc, 221,  72, -1,  0 }, // Archer skeleton
            { (Entity*) &entity_33_pc, 116, 104, -1,  0 }, // Archer skeleton
            { (Entity*) &entity_34_pc, -20, -20,  0,  0 }, // Arrow
            { (Entity*) &entity_34_pc, -20, -20,  0,  0 }, // Arrow
            { (Entity*) &entity_34_pc, -20, -20,  0,  0 }, // Arrow

            { (Entity*) &entity_42_pc, 120,  16,  0,  0 }, // Wheel of faith

            { (Entity*) &entity_13_pc,  24,  80,  0,  0 }, // Inverted cross
            { (Entity*) &entity_12_pc, 216, 144,  0,  0 }, // Cross
            { (Entity*) &entity_11_pc, 168,  80,  0,  0 }, // Heart

            //{ (Entity*) &entity_65_pc, -80, -80,  0,  0 }, // Arrow explosion
      }
};


const Objects objects_33_pc = // Banquet of Death // OK :)
{
      {
            { (Entity*) &entity_12_pc,  24,  40,  0,  0 }, // Cross
            { (Entity*) &entity_11_pc, 120,  88,  0,  0 }, // Heart
            { (Entity*) &entity_39_pc,  16,   8, -1,  0 }, // Death
            { (Entity*) &entity_41_pc, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_pc, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_pc, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_pc, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_pc, -16, -16,  0, +1 }, // Scythe
      }
};


const Objects objects_43_pc = // Underground river // OK
{
      {
            { (Entity*) &entity_35_pc,   0, 128,  0,  0 }, // Door

            { (Entity*) &entity_15_pc, 112, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pc, 128, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pc, 144, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pc, 160, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pc, 176, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pc, 192, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pc, 208, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pc, 224, 168,  0,  0 }, // Water

            { (Entity*) &entity_46_pc, 168, 120,  0,  0 }, // Passage
            { (Entity*) &entity_18_pc,  88,  48,  0, -1 }, // Green spider
            { (Entity*) &entity_12_pc,  24,  16,  0,  0 }, // Cross
            { (Entity*) &entity_11_pc, 200,  64,  0,  0 }, // Heart

            { (Entity*) &entity_54_pc,  48,   8,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_pc, 128,   8,  0,  0 }, // Toxic drop

            { (Entity*) &entity_56_pc, 144, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_pc, 192, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_pc, 112, 160,  0,  0 }, // Splash

            { (Entity*) &entity_55_pc, 144, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_pc, 192, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_pc, 112, 168,  0,  0 }, // Fish

            { (Entity*) &entity_08_pc,  64,  88,  0,  0 }, // Checkpoint
      }

};





////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #4 PC
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_04_pc = // Unexpected gate // OK
{
      {
            { (Entity*) &entity_51_pc, 216,  24,  0,  0,  0,  0, -1 }, // Gargoyle
            { (Entity*) &entity_52_pc, -40, -40,  0,  0             }, // Gargoyle spit
            //{ (Entity*) &entity_66_pc, -40, -40,  0,  0             }, // Gargoyle spit explosion

            { (Entity*) &entity_30_pc,  16,  80, +1,  0, FIX32(0.65) }, // Evil bird
            { (Entity*) &entity_30_pc, 209, 104, -1,  0, FIX32(0.65) }, // Evil bird

            { (Entity*) &entity_35_pc, 248, 112,  0,  0,  0,  0, -1 }, // Door // 03

            { (Entity*) &entity_22_pc, 192,  48,  0,  0 }, // Switch
            { (Entity*) &entity_53_pc, 136, 136, -1,  0 }  // Evil crusader
	}
};


const Objects objects_14_pc = // Evil church // OK
{
      {
            { (Entity*) &entity_10_pc,  24,  46,  0,  0 }, // Yellow hint

            { (Entity*) &entity_16_pc, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_32_pc,  16, 136, -1,  0, FIX32(0.60) }, // Demon
            { (Entity*) &entity_32_pc,  88,  40, -1,  0, FIX32(0.60) }, // Demon
            { (Entity*) &entity_32_pc, 128, 136, -1,  0, FIX32(0.60) }, // Demon

            { (Entity*) &entity_33_pc, 190, 120,  0,  0 }, // Archer skeleton
            { (Entity*) &entity_34_pc, -60, -60, -1,  0 }, // Arrow

            { (Entity*) &entity_08_pc, 152,  40,  0,  0 }, // Checkpoint

            //{ (Entity*) &entity_65_pc, -80, -80,  0,  0 }, // Arrow explosion
	}
};


const Objects objects_24_pc = // Tortured souls // OK
{
      {
            { (Entity*) &entity_51_pc, 224, 104,  0,  0,  0,  0, -1 }, // Gargoyle
            { (Entity*) &entity_52_pc, -40, -40,  0,  0             }, // Gargoyle spit
            //{ (Entity*) &entity_66_pc, -40, -40,  0,  0             }, // Gargoyle spit explosion

            { (Entity*) &entity_13_pc, 220, 142,  0,  0 }, // Inverted cross

            { (Entity*) &entity_16_pc, 192, 144,  0,  0 }, // Fire

            { (Entity*) &entity_32_pc,  68,   8, -1,  0, FIX32(0.90),  0, 0, 1 }, // Demon //            { (Entity*) &entity_23_pc,  60,   8, -1,  0, FIX32(0.70),  0, 0, 1 }, // Swordsman's skeleton
            { (Entity*) &entity_32_pc, 148,  64, -1,  0, FIX32(0.90),  0, 0, 0 }, // Demon //            { (Entity*) &entity_23_pc, 140,  64, -1,  0, FIX32(0.60),  0, 0, 0 }, // Swordsman's skeleton
            { (Entity*) &entity_32_pc, 208,  64, -1,  0,           0,  0, 0, 0 }, // Demon

            { (Entity*) &entity_16_pc,  80, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pc,  96, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pc, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pc, 160, 160,  0,  0 }, // Fire

            { (Entity*) &entity_29_pc,  80, 136,  0, -1,  0, FIX32(1.90) }, // Fireball
            { (Entity*) &entity_29_pc,  96, 152,  0, -1,  0, FIX32(1.25) }, // Fireball
            { (Entity*) &entity_29_pc, 152, 160,  0, -1,  0, FIX32(1.50) }, // Fireball
	}
};


const Objects objects_34_pc = // Ashes to ashes // OK
{
      {
            { (Entity*) &entity_16_pc,  16, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pc,  32, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pc, 112, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pc, 128, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pc, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pc, 160, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pc, 176, 160,  0,  0 }, // Fire

            { (Entity*) &entity_29_pc,  48,  44,  0, -1 }, // Fireball
            { (Entity*) &entity_29_pc,  80, 144,  0, -1 }, // Fireball
            { (Entity*) &entity_29_pc, 112,  88,  0, -1 }, // Fireball
            { (Entity*) &entity_29_pc, 150,   8,  0, +1 }, // Fireball
            { (Entity*) &entity_29_pc, 168, 152,  0, +1 }, // Fireball
            { (Entity*) &entity_29_pc, 200,  44,  0, +1 }, // Fireball

            { (Entity*) &entity_11_pc,  96, 144,  0,  0 }, // Heart
            { (Entity*) &entity_11_pc, 224,  24,  0,  0 }, // Heart

            { (Entity*) &entity_07_pc,  72,  14, +1,  0, FIX32(0.4) }, // Flying skull
            { (Entity*) &entity_07_pc, 184,  96, -1,  0, FIX32(0.4) }, // Flying skull

            { (Entity*) &entity_08_pc, 64, 136,  0,  0 }, // Checkpoint
	}
};



const Objects objects_44_pc = // Satan!!! // TODO
{
      {
            { (Entity*) &entity_35_pc,   0, 128 }, // Door

            { (Entity*) &entity_14_pc,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pc,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pc,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pc, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pc, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pc, -150, 136, +1,  0 }, // Crusader

            { (Entity*) &entity_59_pc, 120,  16,  0,  0 }, // Grial
            { (Entity*) &entity_60_pc, 222, 111,  0,  0 }, // Red hint

            { (Entity*) &entity_58_pc, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pc, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pc, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pc, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pc, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pc, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pc, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pc, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pc, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pc, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pc, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pc, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_57_pc, 196,  80,  0, +1 }, // Satan

            { (Entity*) &entity_61_pc, 128, 190,  0,  0 }, // Catched cross // puts out of the screen
            //{ (Entity*) &entity_64_pc, 128, 190,  0,  0 }, // Satan bullet explosion // Used to be saved in VRAM
	}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Other PC
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////




const Objects objects_prologue_pc =
{
      {
            { (Entity*) &entity_02_pc,  -16, 118, +1,  0  }, // Jean walks

            { (Entity*) &entity_14_pc,  -70, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_pc,  -95, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_pc, -120, 116, +1,  0, FIX32(0.50) }, // Crusader
      }
};

const Objects objects_burnhim_pc =
{
      {
            { (Entity*) &entity_14_pc,   56, 136 }, // Crusader
            { (Entity*) &entity_14_pc,   80, 136 }, // Crusader
            { (Entity*) &entity_14_pc,  160, 136 }, // Crusader
            { (Entity*) &entity_14_pc,  184, 136 }, // Crusader

            { (Entity*) &entity_50_pc,  104, 128 }, // Running fire
            { (Entity*) &entity_50_pc,  120, 128 }, // Running fire
            { (Entity*) &entity_50_pc,  136, 128 }, // Running fire

            { (Entity*) &entity_03_pc,  120, 118 }, // Jean stays
            { (Entity*) &entity_62_pc,  104,  96 }, // Bonfire
	}
};

const Objects objects_info_pc =
{
      {
            { (Entity*) &entity_02_pc,  12,  20,  0,  0,  0,  0, -1, 0 }, // Jean walks
            { (Entity*) &entity_22_pc,  12, 192,  0,  0,  0,  0, -1, 0 }, // Switch
            { (Entity*) &entity_20_pc, 208, 188 }, // Bell
            { (Entity*) &entity_59_pc, 192, 164 }, // Grial
            { (Entity*) &entity_42_pc, 208,  28 }, // Wheel of faith
            { (Entity*) &entity_10_pc, 110,  52 }, // Yellow hint
            { (Entity*) &entity_11_pc,  32,  76 }, // Heart
            { (Entity*) &entity_12_pc,   8, 100 }, // Cross
            { (Entity*) &entity_08_pc, 150,  84 }, // Checkpoint
            { (Entity*) &entity_46_pc,  36, 144 }, // Passage
            { (Entity*) &entity_39_pc,  98, 128,  0,  0,  0,  0, -1, 0 }, // Death

      }
}
;




const Mask mask_20_pc =
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



const Mask mask_21_pc =
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




const Mask mask_31_pc =
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

const Mask mask_41_pc =
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

const Mask mask_02_pc =
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


const Mask mask_22_pc =
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

const Mask mask_03_pc =
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

const Mask mask_13_pc =
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

const Mask mask_23_pc =
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



const Mask mask_33_pc =
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

const Mask mask_43_pc =
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

const Mask mask_04_pc =
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



const Mask mask_24_pc =
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



const Mask mask_34_pc =
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

const Mask mask_44_pc =
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

const Room room_00_pc = { (Image*) &room_00_f_pc, NULL, (Objects*) &objects_null,  (Mask*) &mask_00_all, (Image*) &text_00_all, (Music*) &music_00_all,         room_null };
const Room room_01_pc = { (Image*) &room_01_f_pc, NULL, (Objects*) &objects_01_pc, (Mask*) &mask_01_all, (Image*) &text_01_all, (Music*) &music_08_all,         room_null };
const Room room_02_pc = { (Image*) &room_02_f_pc, NULL, (Objects*) &objects_02_pc, (Mask*) &mask_02_pc,  (Image*) &text_02_all, (Music*) &music_02_all, room_funct_02_all };
const Room room_03_pc = { (Image*) &room_03_f_pc, NULL, (Objects*) &objects_03_pc, (Mask*) &mask_03_pc,  (Image*) &text_03_all, (Music*) &music_02_all, room_funct_03_all };
const Room room_04_pc = { (Image*) &room_04_f_pc, NULL, (Objects*) &objects_04_pc, (Mask*) &mask_04_pc,  (Image*) &text_04_all, (Music*) &music_02_all, room_funct_04_all };

const Room room_10_pc = { (Image*) &room_10_f_pc, NULL, (Objects*) &objects_null,  (Mask*) &mask_10_all, (Image*) &text_10_all, (Music*) &music_10_all,         room_null };
const Room room_11_pc = { (Image*) &room_11_f_pc, NULL, (Objects*) &objects_11_pc, (Mask*) &mask_11_all, (Image*) &text_11_all, (Music*) &music_08_all,         room_null };
const Room room_12_pc = { (Image*) &room_12_f_pc, NULL, (Objects*) &objects_12_pc, (Mask*) &mask_12_all, (Image*) &text_12_all, (Music*) &music_02_all, room_funct_12_all };
const Room room_13_pc = { (Image*) &room_13_f_pc, NULL, (Objects*) &objects_13_pc, (Mask*) &mask_13_pc,  (Image*) &text_13_all, (Music*) &music_02_all, room_funct_13_all };
const Room room_14_pc = { (Image*) &room_14_f_pc, NULL, (Objects*) &objects_14_pc, (Mask*) &mask_14_all, (Image*) &text_14_all, (Music*) &music_03_all, room_funct_14_all };

const Room room_20_pc = { (Image*) &room_20_f_pc, NULL, (Objects*) &objects_20_pc, (Mask*) &mask_20_pc,  (Image*) &text_20_all, (Music*) &music_01_all,         room_null };
const Room room_21_pc = { (Image*) &room_21_f_pc, NULL, (Objects*) &objects_21_pc, (Mask*) &mask_21_pc,  (Image*) &text_21_all, (Music*) &music_01_all, room_funct_21_all };
const Room room_22_pc = { (Image*) &room_22_f_pc, NULL, (Objects*) &objects_22_pc, (Mask*) &mask_22_pc,  (Image*) &text_22_all, (Music*) &music_01_all,         room_null };
const Room room_23_pc = { (Image*) &room_23_f_pc, NULL, (Objects*) &objects_23_pc, (Mask*) &mask_23_pc,  (Image*) &text_23_all, (Music*) &music_01_all, room_funct_23_all };
const Room room_24_pc = { (Image*) &room_24_f_pc, NULL, (Objects*) &objects_24_pc, (Mask*) &mask_24_pc,  (Image*) &text_24_all, (Music*) &music_03_all, room_funct_24_all };

const Room room_30_pc = { (Image*) &room_30_f_pc, NULL, (Objects*) &objects_30_pc, (Mask*) &mask_30_all, (Image*) &text_30_all, (Music*) &music_01_all,         room_null };
const Room room_31_pc = { (Image*) &room_31_f_pc, NULL, (Objects*) &objects_31_pc, (Mask*) &mask_31_pc,  (Image*) &text_31_all, (Music*) &music_01_all, room_funct_31_all };
const Room room_32_pc = { (Image*) &room_32_f_pc, NULL, (Objects*) &objects_32_pc, (Mask*) &mask_32_all, (Image*) &text_32_all, (Music*) &music_01_all,         room_null };
const Room room_33_pc = { (Image*) &room_33_f_pc, NULL, (Objects*) &objects_33_pc, (Mask*) &mask_33_pc,  (Image*) &text_33_all, (Music*) &music_04_all, room_funct_33_all };
const Room room_34_pc = { (Image*) &room_34_f_pc, NULL, (Objects*) &objects_34_pc, (Mask*) &mask_34_pc,  (Image*) &text_34_all, (Music*) &music_03_all, room_funct_34_all };

const Room room_40_pc = { (Image*) &room_40_f_pc, NULL, (Objects*) &objects_null,  (Mask*) &mask_40_all, (Image*) &text_40_all, (Music*) &music_00_all,         room_null };
const Room room_41_pc = { (Image*) &room_41_f_pc, NULL, (Objects*) &objects_41_pc, (Mask*) &mask_41_pc,  (Image*) &text_41_all, (Music*) &music_11_all, room_funct_41_all };
const Room room_42_pc = { (Image*) &room_42_f_pc, NULL, (Objects*) &objects_42_pc, (Mask*) &mask_42_all, (Image*) &text_42_all, (Music*) &music_02_all, room_funct_42_all };
const Room room_43_pc = { (Image*) &room_43_f_pc, NULL, (Objects*) &objects_43_pc, (Mask*) &mask_43_pc,  (Image*) &text_43_all, (Music*) &music_02_all, room_funct_43_all };
const Room room_44_pc = { (Image*) &room_44_f_pc, NULL, (Objects*) &objects_44_pc, (Mask*) &mask_44_pc,  (Image*) &text_44_all, (Music*) &music_04_all, room_funct_44_all };
