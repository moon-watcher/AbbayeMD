#include "../../inc/include.h"

#include "../../res/msx/sprites.h"
#include "../../res/msx/texts.h"
#include "../../res/all/texts.h"
#include "../../res/msx/foreground.h"
#include "../../res/msx/background.h"
#include "../../inc/versions/all.h"


const Entity entity_01_msx = {  1, "Jean stays",            0, (SpriteDefinition*) &jean_2x3_msx,     PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_02_msx = {  2, "Jean walks",            1, (SpriteDefinition*) &jean_2x3_msx,     PAL3, ENTITY_PLAYER,     FIX32(0.65),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_03_msx = {  3, "Jean jumps",            2, (SpriteDefinition*) &jean_2x3_msx,     PAL3, ENTITY_PLAYER,     FIX32(0.65),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_04_msx = {  4, "Jean burns",            3, (SpriteDefinition*) &jean_2x3_msx,     PAL3, ENTITY_NULL,                 0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  1,  5 } };
const Entity entity_05_msx = {  5, "Jean lie down",         0, (SpriteDefinition*) &jean_3x2_msx,     PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  6,  0, 10 } };
const Entity entity_06_msx = {  6, "Jean sneaks",           1, (SpriteDefinition*) &jean_3x2_msx,     PAL3, ENTITY_PLAYER,      FIX32(0.2),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  6,  0, 10 } };
const Entity entity_07_msx = {  7, "Flying skull",          4, (SpriteDefinition*) &enemies_2x2_msx,  PAL2, ENTITY_ENEMY,       FIX32(0.8),           0,           0, 0, 0, 0, NULL, mcb_udlr,        0, {  4,  5,  3,  4 } };
const Entity entity_08_msx = {  8, "Checkpoint",            4, (SpriteDefinition*) &jean_2x3_msx,     PAL3, ENTITY_CHECKPOINT,           0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_09_msx = {  9, "Checkpoint active",     5, (SpriteDefinition*) &jean_2x3_msx,     PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_10_msx = { 10, "Yellow hint",          12, (SpriteDefinition*) &objects_2x2_msx,  PAL3, ENTITY_HINT,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_11_msx = { 11, "Heart",                11, (SpriteDefinition*) &objects_2x2_msx,  PAL3, ENTITY_HEART,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_12_msx = { 12, "Cross",                 0, (SpriteDefinition*) &objects_2x2_msx,  PAL3, ENTITY_CROSS,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_13_msx = { 13, "Inverted cross",        1, (SpriteDefinition*) &objects_2x2_msx,  PAL3, ENTITY_INV_CROSS,            0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_14_msx = { 14, "Cursader",              1, (SpriteDefinition*) &enemies_2x3_msx,  PAL2, ENTITY_ENEMY,      FIX32(0.60),           0, FIX32(0.20), 0, 1, 0, NULL, mcb_crusader,    0, {  7,  5,  0,  5 } };
const Entity entity_15_msx = { 15, "Water",                 6, (SpriteDefinition*) &enemies_2x1_msx,  PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_16_msx = { 16, "Fire",                 11, (SpriteDefinition*) &enemies_2x2_msx,  PAL2, ENTITY_NULL,              zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_17_msx = { 17, "Rat",                   1, (SpriteDefinition*) &enemies_2x2_msx,  PAL2, ENTITY_ENEMY,      FIX32(0.60),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  0,  0,  0 } };
const Entity entity_18_msx = { 18, "Green spider",          2, (SpriteDefinition*) &enemies_2x2_msx,  PAL2, ENTITY_ENEMY,             zero, FIX32(0.75),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
const Entity entity_19_msx = { 19, "Brown spider",          3, (SpriteDefinition*) &enemies_2x2_msx,  PAL2, ENTITY_ENEMY,             zero, FIX32(1.00),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
const Entity entity_20_msx = { 20, "Bell",                 14, (SpriteDefinition*) &objects_2x2_msx,  PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_21_msx = { 21, "Snail",                 4, (SpriteDefinition*) &enemies_2x1_msx,  PAL2, ENTITY_ENEMY,      FIX32(0.30),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  2,  0,  2 } };
const Entity entity_22_msx = { 22, "Switch (off)",          2, (SpriteDefinition*) &objects_2x2_msx,  PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_23_msx = { 23, "Swordsman's skeleton",  2, (SpriteDefinition*) &enemies_2x3_msx,  PAL2, ENTITY_ENEMY,      FIX32(0.60),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  6,  5,  0,  5 } };
const Entity entity_24_msx = { 24, "Skull wasp",            5, (SpriteDefinition*) &enemies_2x2_msx,  PAL2, ENTITY_ENEMY,      FIX32(0.50), FIX32(0.50),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
const Entity entity_25_msx = { 25, "Human wasp",           10, (SpriteDefinition*) &enemies_2x2_msx,  PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
const Entity entity_26_msx = { 26, "El Coco",               7, (SpriteDefinition*) &enemies_2x2_msx,  PAL2, ENTITY_ENEMY,      FIX32(0.45), FIX32(0.45),        zero, 0, 1, 0, NULL, mcb_coco,        0, {  2,  2,  2,  2 } };
const Entity entity_27_msx = { 27, "Spitting plant",        0, (SpriteDefinition*) &enemies_2x2_msx,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
const Entity entity_28_msx = { 28, "Spit",                  2, (SpriteDefinition*) &enemies_2x1_msx,  PAL2, ENTITY_ENEMY,      FIX32(0.75), FIX32(2.20), FIX32(0.10), 0, 0, 0, NULL, mcb_bullet,      0, {  1,  5,  1,  5 } };
const Entity entity_29_msx = { 29, "Fireball",              6, (SpriteDefinition*) &enemies_2x2_msx,  PAL2, ENTITY_ENEMY,                0, FIX32(1.50),           0, 0, 0, 0, NULL, mcb_fireball,    0, {  2,  2,  2,  2 } };
const Entity entity_30_msx = { 30, "Evil bird",             0, (SpriteDefinition*) &enemies_3x2_msx,  PAL2, ENTITY_ENEMY,       FIX32(1.0),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  2,  0,  1,  1 } };
const Entity entity_31_msx = { 31, "Spikes",                8, (SpriteDefinition*) &enemies_2x1_msx,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  2,  0,  0,  0 } };
const Entity entity_32_msx = { 32, "Demon",                 3, (SpriteDefinition*) &enemies_2x3_msx,  PAL2, ENTITY_ENEMY,      FIX32(0.75),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
const Entity entity_33_msx = { 33, "Archer skeleton",       0, (SpriteDefinition*) &enemies_3x3_msx,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  6,  6,  0,  6 } };
const Entity entity_34_msx = { 34, "Arrow",                 5, (SpriteDefinition*) &enemies_2x1_msx,  PAL2, ENTITY_ENEMY,      FIX32(2.50),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  2,  3,  2,  3 } };
const Entity entity_35_msx = { 35, "Door",                  0, (SpriteDefinition*) &objects_1x4_msx,  PAL3, ENTITY_DOOR,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_36_msx = { 36, "Stone hatch",           0, (SpriteDefinition*) &hatch_2x2_msx,    PAL1, ENTITY_HATCH,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_37_msx = { 37, "Hangman",               7, (SpriteDefinition*) &jean_2x3_msx,     PAL3, ENTITY_ENEMY,                0, FIX32(0.60),           0, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  1,  2,  0,  2 } };
const Entity entity_38_msx = { 38, "Rope",                  6, (SpriteDefinition*) &jean_2x3_msx,     PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_39_msx = { 39, "Death",                 0, (SpriteDefinition*) &death_4x4_msx,    PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  0,  2,  0 } };
const Entity entity_40_msx = { 40, "Death throw",           1, (SpriteDefinition*) &death_4x4_msx,    PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  0,  4,  0 } };
const Entity entity_41_msx = { 41, "Scythe",                0, (SpriteDefinition*) &death_2x2_msx,    PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),           0, 0, 0, 0, NULL, mcb_scythe,      0, {  1,  1,  1,  1 } };
const Entity entity_42_msx = { 42, "Wheel of faith",        5, (SpriteDefinition*) &objects_2x2_msx,  PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
const Entity entity_43_msx = { 43, "Wheel of faith",        6, (SpriteDefinition*) &objects_2x2_msx,  PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
const Entity entity_44_msx = { 44, "Bell (on)",            15, (SpriteDefinition*) &objects_2x2_msx,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_45_msx = { 45, "Switch (on)",           3, (SpriteDefinition*) &objects_2x2_msx,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_46_msx = { 46, "Passage",               8, (SpriteDefinition*) &jean_2x3_msx,     PAL3, ENTITY_PASSAGE,              0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, { 16,  7,  0,  7 } };
const Entity entity_47_msx = { 47, "Dragon head",           0, (SpriteDefinition*) &dragon_4x5_msx,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_48_msx = { 48, "Dragon body",           0, (SpriteDefinition*) &dragon_12x5_msx,  PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_49_msx = { 49, "Dragon fire",           0, (SpriteDefinition*) &dragon_3x6_msx,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  0,  2,  0,  2 } };
const Entity entity_50_msx = { 50, "Running fire",          0, (SpriteDefinition*) &dragon_2x2_msx,   PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  0,  0,  0 } };
const Entity entity_51_msx = { 51, "Gargoyle",              8, (SpriteDefinition*) &enemies_2x2_msx,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
const Entity entity_52_msx = { 52, "Gargoyle spit",         1, (SpriteDefinition*) &enemies_2x1_msx,  PAL2, ENTITY_ENEMY,      FIX32(3.00),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  1,  1,  2,  1 } };
const Entity entity_53_msx = { 53, "Evil cursader",         0, (SpriteDefinition*) &enemies_2x3_msx,  PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
const Entity entity_54_msx = { 54, "Toxic drop",            3, (SpriteDefinition*) &enemies_2x1_msx,  PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.09), 0, 0, 0, NULL, mcb_drop,        0, {  0,  3,  0,  3 } };
const Entity entity_55_msx = { 55, "Fish",                  9, (SpriteDefinition*) &enemies_2x2_msx,  PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.10), 0, 0, 1, NULL, mcb_null,        0, {  0,  1,  0,  1 } };
const Entity entity_56_msx = { 56, "Splash",                7, (SpriteDefinition*) &enemies_2x1_msx,  PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_57_msx = { 57, "Satan",                 0, (SpriteDefinition*) &satan_4x6_msx,    PAL2, ENTITY_ENEMY,                0, FIX32(0.75),           0, 0, 0, 0, NULL, mcb_udlr,        0, {  } };
const Entity entity_58_msx = { 58, "Satan bullet",          0, (SpriteDefinition*) &enemies_2x1_msx,  PAL2, ENTITY_ENEMY,      FIX32(1.00),           0,           0, 0, 0, 0, NULL, mcb_bullet,      0, {  1,  5,  1,  5 } };
const Entity entity_59_msx = { 59, "Grial",                 4, (SpriteDefinition*) &objects_2x2_msx,  PAL3, ENTITY_GRIAL,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_60_msx = { 60, "Red hint",             13, (SpriteDefinition*) &objects_2x2_msx,  PAL3, ENTITY_HINT,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_61_msx = { 61, "Catched cross",         0, (SpriteDefinition*) &objects_1x1_msx,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_62_msx = { 62, "Bonfire",               0, (SpriteDefinition*) &bonfire_6x8_msx,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_63_msx = { 63, "Bell ringing",          0, (SpriteDefinition*) &objects_4x2_msx,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };






////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #0 MSX
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_20_msx = // Tower of the Bell // OK // MSX: Hacer que la campana se mueva al tocarla
{
      {
            { (Entity*) &entity_20_msx,  40,   8,  0,  0 }, // Bell
            { (Entity*) &entity_17_msx,  64, 144, +1,  0 }, // Rat
            { (Entity*) &entity_17_msx, 216, 144, -1,  0 }, // Rat
            { (Entity*) &entity_11_msx,  96,  56,  0,  0 }, // Heart
	}
};


const Objects objects_30_msx = // Wine supplies // OK
{
      {
            { (Entity*) &entity_18_msx,  36, 121,  0, +1 }, // Green spider
            { (Entity*) &entity_19_msx,  60, 131,  0, -1 }, // Brown spider
            { (Entity*) &entity_18_msx,  76, 100,  0, +1 }, // Green spider
            { (Entity*) &entity_10_msx, 144, 128,  0,  0 }, // Brown spider
            { (Entity*) &entity_19_msx, 196, 130,  0, -1,  0, FIX32(0.5) }, // Brown spider
            { (Entity*) &entity_12_msx, 220, 140,  0,  0 }, // Cross
	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #1 MSX
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_01_msx = // Escape !!! // OK
{
      {
            { (Entity*) &entity_14_msx,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_msx,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_msx,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_msx, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_msx, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_msx, -150, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_msx, -170, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_msx, -190, 136, +1,  0 }, // Crusader
	}
};


const Objects objects_11_msx = // Death is close !!! // OK
{
      {
            { (Entity*) &entity_14_msx,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_msx,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_msx,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_msx, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_msx, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_msx, -150, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_msx, -170, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_msx, -190, 136, +1,  0 }, // Crusader
      }
};


const Objects objects_21_msx = // Abandone church // OK
{
      {
            { (Entity*) &entity_35_msx,   0, 112 }, // Door
      }
};


const Objects objects_31_msx = // The Altar // OK
{
      {
            { (Entity*) &entity_35_msx, 248, 112,  0,  0,  0,  0,  1 }, // Door
            { (Entity*) &entity_36_msx, 208, 160,  0,  0 }, // Stone hatch
            { (Entity*) &entity_07_msx, 144,  44, +1,  0 }, // Flying skull
            { (Entity*) &entity_07_msx,  88,  84, +1,  0 }, // Flying skull
            { (Entity*) &entity_10_msx, 212, 140,  0,  0 }, // Yellow hint
            { (Entity*) &entity_08_msx,  56, 136,  0,  0 }, // Checkpoint
	}
};


const Objects objects_41_msx = // Hangman Tree // OK
{
      {
            { (Entity*) &entity_37_msx, 152, 104,  0, +1 }, // Hangman
            { (Entity*) &entity_38_msx, 152,  88,  0,  0 }, // Rope
            { (Entity*) &entity_38_msx, 152, 112,  0,  0 }, // Rope

            { (Entity*) &entity_37_msx, 176,  76,  0, +1 }, // Hangman
            { (Entity*) &entity_38_msx, 176,  64,  0,  0 }, // Rope
            { (Entity*) &entity_38_msx, 176,  88,  0,  0 }, // Rope
            { (Entity*) &entity_38_msx, 176, 102,  0,  0 }, // Rope

            { (Entity*) &entity_37_msx,  72,  88,  0, +1 }, // Hangman
            { (Entity*) &entity_38_msx,  72,  72,  0,  0 }, // Pope
            { (Entity*) &entity_38_msx,  72,  96,  0,  0 }, // Pope
            { (Entity*) &entity_38_msx,  72, 116,  0,  0 }, // Pope

            { (Entity*) &entity_37_msx,  48,  72,  0, +1 }, // Hangman
            { (Entity*) &entity_38_msx,  48,  56,  0,  0 }, // Rope
            { (Entity*) &entity_38_msx,  48,  80,  0,  0 }, // Rope
            { (Entity*) &entity_38_msx,  48, 104,  0,  0 }, // Pope

            { (Entity*) &entity_21_msx, 152,  48, -1,  0 }, // Snail
            { (Entity*) &entity_21_msx, 136, 152, -1,  0 }, // Snail
            { (Entity*) &entity_22_msx, 216, 144,  0,  0 }, // Switch  // 17
            { (Entity*) &entity_13_msx,  48,  32,  0,  0 }, // Inverted cross


	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #2 MSX
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_02_msx = // Pestilent beast // OK
{
      {
            { (Entity*) &entity_47_msx, 120,  10,  0,  0 }, // Dragon head #0
            { (Entity*) &entity_48_msx, 112,   8,  0,  0 }, // Dragon body #1
            { (Entity*) &entity_49_msx, 125,  51,  0,  0 }, // Dragon fire #2

            { (Entity*) &entity_50_msx, -40, -40,  0, +1 }, // Runnig fire #3
            { (Entity*) &entity_50_msx, -40, -40,  0, -1 }, // Runnig fire #4
            { (Entity*) &entity_50_msx, -40, -40,  0, +1 }, // Runnig fire #5
            { (Entity*) &entity_50_msx, -40, -40,  0, -1 }, // Runnig fire #6
            { (Entity*) &entity_50_msx, -40, -40,  0, +1 }, // Runnig fire #7
            { (Entity*) &entity_50_msx, -40, -40,  0, -1 }, // Runnig fire #8

            { (Entity*) &entity_22_msx,  56,  32,  0,  0 }, // Switch      #9
            { (Entity*) &entity_11_msx,  80, 144,  0,  0 }, // Heart
            { (Entity*) &entity_12_msx, 204,  30,  0,  0 }, // Cross

            { (Entity*) &entity_46_msx, 184, 136,  0,  0 }, // Passage
      }
};


const Objects objects_12_msx = // Cave of illusions // OK // TODO: Mejorar el movimiento del coco
{
      {
            { (Entity*) &entity_11_msx,  16,  32,  0,  0 }, // Heart
            { (Entity*) &entity_26_msx, 128,  72,  0,  0 }, // El Coco
            { (Entity*) &entity_08_msx, 112, 136,  0,  0 }, // Checkpoint
      }
};


const Objects objects_22_msx = // Plagued ruins // OK
{
      {
            { (Entity*) &entity_10_msx,  80, 142,  0,  0 }, // Yellow hint
            { (Entity*) &entity_11_msx, 128,  48,  0,  0 }, // Heart
            { (Entity*) &entity_24_msx,  48,  24,  0, -1 }, // Skull wasp
            { (Entity*) &entity_24_msx, 128, 128,  0, -1 }, // Skull wasp

            { (Entity*) &entity_25_msx, 160,  40,  0, -1 }, // Human wasp
            { (Entity*) &entity_25_msx,  32, 112,  0, -1 }, // Human wasp
            { (Entity*) &entity_25_msx, 176, 128,  0, -1 }, // Human wasp
            { (Entity*) &entity_08_msx,  64,  56,  0,  0 }, // Checkpoint
	}
};


const Objects objects_32_msx = // Catacombs // OK
{
      {
            { (Entity*) &entity_23_msx,  80,  88, -1,  0 }, // Swordsman's skeleton
            { (Entity*) &entity_23_msx, 128, 136, -1,  0 }, // Swordsman's skeleton
            { (Entity*) &entity_12_msx, 144, 144,  0,  0 }, // Cross
	}
};


const Objects objects_42_msx = // Hidden garden // OK
{
      {
            { (Entity*) &entity_12_msx,  72,  32,   0,  0 }, // Cross          - #01
            { (Entity*) &entity_10_msx, 152,  78,   0,  0 }, // Yellow hint    - #02
            { (Entity*) &entity_21_msx, 168, 152,  -1,  0 }, // Snail          - #03
            { (Entity*) &entity_18_msx,  48,  24,   0, +1,  0, FIX32(0.60) }, // Green spider- #04

            { (Entity*) &entity_27_msx, 224,  48,   0,  0 }, // Spitting plant // 05
            { (Entity*) &entity_28_msx,   0, -60, -60,  0 }, // Spit           // 06
            { (Entity*) &entity_28_msx,   0, -60, -60,  0 }, // Spit           // 07

            { (Entity*) &entity_27_msx, 136,  32,   0,  0 }, // Spitting plant // 08
            { (Entity*) &entity_28_msx,   0, -60, -60,  0 }, // Spit           // 09
            { (Entity*) &entity_28_msx,   0, -60, -60,  0 }, // Spit           // 10

            { (Entity*) &entity_27_msx, 112, 112,   0,  0 }, // Spitting plant // 11
            { (Entity*) &entity_28_msx,   0, -60, -60,  0 }, // Spit           // 12
            { (Entity*) &entity_28_msx,   0, -60, -60,  0 }, // Spit           // 13

            { (Entity*) &entity_08_msx,  64, 136,   0,  0 }, // Checkpoint     - #00

	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #3 MSX
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_03_msx = // Gloomy tunnels // OK
{
      {
            { (Entity*) &entity_54_msx,  32,  88,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_msx,  88,  32,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_msx,  88,  88,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_msx, 208,  32,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_msx, 192,  32,  0,  0 }, // Toxic drop

            { (Entity*) &entity_11_msx,  24, 112,  0,  0 }, // Heart
            { (Entity*) &entity_53_msx,  80,  56, -1,  0 }, // Evil crusader
            { (Entity*) &entity_53_msx, 192, 136, -1,  0 }, // Evil crusader
            { (Entity*) &entity_13_msx, 224,  64,  0,  0 }, // Inverted cross

            { (Entity*) &entity_08_msx, 168,  56,  0,  0 }, // Checkpoint
      }
};


const Objects objects_13_msx = // Lake of despair // OK
{
      {
            { (Entity*) &entity_15_msx,  48, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_msx,  64, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_msx,  80, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_msx,  96, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_msx, 112, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_msx, 128, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_msx, 144, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_msx, 160, 168,  0,  0 }, // Water

            { (Entity*) &entity_56_msx,  56, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_msx, 116, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_msx, 156, 160,  0,  0 }, // Splash

            { (Entity*) &entity_55_msx,  56, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_msx, 116, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_msx, 156, 168,  0,  0 }, // Fish

            { (Entity*) &entity_12_msx,  16,  48,  0,  0 }, // Cross
            { (Entity*) &entity_10_msx, 176,  40,  0,  0 }, // Yellow hint
            { (Entity*) &entity_18_msx, 144,  24,  0, +1, 0, FIX32(0.60)}, // Green spider
	}
};


const Objects objects_23_msx = // The wheel of Faith // OK
{
      {
            { (Entity*) &entity_33_msx,  12,  24,  0,  0 }, // Archer skeleton
            { (Entity*) &entity_33_msx, 221,  72, -1,  0 }, // Archer skeleton
            { (Entity*) &entity_33_msx, 116, 104, -1,  0 }, // Archer skeleton
            { (Entity*) &entity_34_msx, -20, -20,  0,  0 }, // Arrow
            { (Entity*) &entity_34_msx, -20, -20,  0,  0 }, // Arrow
            { (Entity*) &entity_34_msx, -20, -20,  0,  0 }, // Arrow

            { (Entity*) &entity_42_msx, 120,  16,  0,  0 }, // Wheel of faith

            { (Entity*) &entity_13_msx,  24,  80,  0,  0 }, // Inverted cross
            { (Entity*) &entity_12_msx, 216, 144,  0,  0 }, // Cross
            { (Entity*) &entity_11_msx, 168,  80,  0,  0 }, // Heart
      }
};


const Objects objects_33_msx = // Banquet of Death // OK :)
{
      {
            { (Entity*) &entity_12_msx,  24,  40,  0,  0 }, // Cross
            { (Entity*) &entity_11_msx, 120,  88,  0,  0 }, // Heart
            { (Entity*) &entity_39_msx,  16,   8, -1,  0 }, // Death
            { (Entity*) &entity_41_msx, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_msx, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_msx, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_msx, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_msx, -16, -16,  0, +1 }, // Scythe
      }
};


const Objects objects_43_msx = // Underground river // OK
{
      {
            { (Entity*) &entity_35_msx,   0, 128,  0,  0 }, // Door

            { (Entity*) &entity_15_msx, 112, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_msx, 128, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_msx, 144, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_msx, 160, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_msx, 176, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_msx, 192, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_msx, 208, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_msx, 224, 168,  0,  0 }, // Water

            { (Entity*) &entity_46_msx, 168, 120,  0,  0 }, // Passage
            { (Entity*) &entity_18_msx,  88,  48,  0, +1 }, // Green spider
            { (Entity*) &entity_12_msx,  24,  16,  0,  0 }, // Cross
            { (Entity*) &entity_11_msx, 200,  64,  0,  0 }, // Heart

            { (Entity*) &entity_54_msx,  48,   8,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_msx, 128,   8,  0,  0 }, // Toxic drop

            { (Entity*) &entity_56_msx, 116, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_msx, 192, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_msx, 144, 160,  0,  0 }, // Splash

            { (Entity*) &entity_55_msx, 116, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_msx, 192, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_msx, 144, 168,  0,  0 }, // Fish

            { (Entity*) &entity_08_msx,  64,  88,  0,  0 }, // Checkpoint
      }

};





////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #4 MSX
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_04_msx = // Unexpected gate // OK
{
      {
            { (Entity*) &entity_51_msx, 216,  24,  0,  0,  0,  0, -1 }, // Gargoyle
            { (Entity*) &entity_52_msx, -40, -40,  0,  0             }, // Gargoyle spit

            { (Entity*) &entity_30_msx,  36,  88, +1,  0, FIX32(0.60) }, // Evil bird

            { (Entity*) &entity_35_msx, 248, 112,  0,  0,  0,  0, -1 }, // Door // 03

            { (Entity*) &entity_22_msx, 192,  48,  0,  0 }, // Switch
            { (Entity*) &entity_53_msx, 136, 136, -1,  0 }  // Evil crusader
	}
};


const Objects objects_14_msx = // Evil church // OK
{
      {
            { (Entity*) &entity_10_msx,  24,  46,  0,  0 }, // Yellow hint

            { (Entity*) &entity_16_msx, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_32_msx,  16, 136, -1,  0, FIX32(0.60) }, // Demon
            { (Entity*) &entity_32_msx,  88,  40, -1,  0, FIX32(0.60) }, // Demon
            { (Entity*) &entity_32_msx, 128, 136, -1,  0, FIX32(0.60) }, // Demon

            { (Entity*) &entity_33_msx, 190, 120,  0,  0 }, // Archer skeleton
            { (Entity*) &entity_34_msx, -60, -60, -1,  0 }, // Arrow

            { (Entity*) &entity_08_msx, 152,  40,  0,  0 }, // Checkpoint
	}
};


const Objects objects_24_msx = // Tortured souls // OK
{
      {
            { (Entity*) &entity_51_msx, 224, 104,  0,  0,  0,  0, -1 }, // Gargoyle
            { (Entity*) &entity_52_msx, -40, -40,  0,  0             }, // Gargoyle spit

            { (Entity*) &entity_13_msx, 220, 142,  0,  0 }, // Inverted cross

            { (Entity*) &entity_31_msx, 192, 152 }, // Spikes

            { (Entity*) &entity_23_msx,  60,   8, -1,  0, FIX32(0.70),  0, 0, 1 }, // Swordsman's skeleton
            { (Entity*) &entity_23_msx, 140,  64, -1,  0, FIX32(0.60),  0, 0, 0 }, // Swordsman's skeleton
            { (Entity*) &entity_32_msx, 208,  64, -1,  0,           0,  0, 0, 0 }, // Demon

            { (Entity*) &entity_16_msx,  80, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_msx,  96, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_msx, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_msx, 160, 160,  0,  0 }, // Fire

            { (Entity*) &entity_29_msx,  80, 136,  0, +1,  0, FIX32(1.75) }, // Fireball
            { (Entity*) &entity_29_msx,  96, 152,  0, +1,  0, FIX32(1.25) }, // Fireball
            { (Entity*) &entity_29_msx, 152,  96,  0, +1,  0, FIX32(1.25) }, // Fireball
	}
};


const Objects objects_34_msx = // Ashes to ashes // OK
{
      {
            { (Entity*) &entity_16_msx,  16, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_msx,  32, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_msx,  48, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_msx,  80, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_msx,  96, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_msx, 112, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_msx, 160, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_msx, 176, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_msx, 192, 160,  0,  0 }, // Fire

            { (Entity*) &entity_29_msx,  48,  24,  0, +1 }, // Fireball
            { (Entity*) &entity_29_msx,  80,  88,  0, +1 }, // Fireball
            { (Entity*) &entity_29_msx, 160,  72,  0, +1 }, // Fireball

            { (Entity*) &entity_11_msx,  64, 144,  0,  0 }, // Heart
            { (Entity*) &entity_11_msx, 184,  56,  0,  0 }, // Heart
            { (Entity*) &entity_30_msx, 100,  32, +1,  0              }, // Evil bird
            { (Entity*) &entity_30_msx, 212, 104, +1,  0, FIX32(0.75) }, // Evil bird
            { (Entity*) &entity_23_msx, 160,   8, -1,  0, FIX32(0.75),  0, 0, 1 }, // Swordsman's skeleton

            { (Entity*) &entity_08_msx, 136, 136,  0,  0 }, // Checkpoint
	}
};



const Objects objects_44_msx = // Satan!!! // TODO
{
      {
            { (Entity*) &entity_35_msx,   0, 128 }, // Door

            { (Entity*) &entity_14_msx,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_msx,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_msx,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_msx, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_msx, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_msx, -150, 136, +1,  0 }, // Crusader

            { (Entity*) &entity_59_msx, 120,  16,  0,  0 }, // Grial
            { (Entity*) &entity_60_msx, 222, 111,  0,  0 }, // Red hint

            { (Entity*) &entity_58_msx, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_msx, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_msx, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_msx, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_msx, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_msx, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_msx, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_msx, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_msx, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_msx, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_msx, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_msx, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_57_msx, 196,  80,  0, +1 }, // Satan

            { (Entity*) &entity_61_msx, 128, 190,  0,  0 }, // Catched cross // puts out of the screen
	}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Other MSX
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////




const Objects objects_prologue_msx =
{
      {
            { (Entity*) &entity_02_msx,  -16, 118, +1,  0  }, // Jean walks

            { (Entity*) &entity_14_msx,  -70, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_msx,  -95, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_msx, -120, 116, +1,  0, FIX32(0.50) }, // Crusader
      }
};

const Objects objects_burnhim_msx =
{
      {
            { (Entity*) &entity_14_msx,   48, 136 }, // Crusader
            { (Entity*) &entity_14_msx,   72, 136 }, // Crusader
            { (Entity*) &entity_14_msx,  152, 136 }, // Crusader
            { (Entity*) &entity_14_msx,  176, 136 }, // Crusader

            { (Entity*) &entity_50_msx,   96, 128 }, // Fire
            { (Entity*) &entity_50_msx,  112, 128 }, // Fire
            { (Entity*) &entity_50_msx,  128, 128 }, // Fire

            { (Entity*) &entity_03_msx,  112, 118 }, // Jean stays
            { (Entity*) &entity_62_msx,   96,  96 }, // Bonfire
	}
};

const Objects objects_info_msx =
{
      {
            { (Entity*) &entity_02_msx,  12,  20,  0,  0,  0,  0, -1, 0 }, // Jean walks
            { (Entity*) &entity_22_msx,  12, 192,  0,  0,  0,  0, -1, 0 }, // Switch
            { (Entity*) &entity_20_msx, 208, 188 }, // Bell
            { (Entity*) &entity_59_msx, 192, 164 }, // Grial
            { (Entity*) &entity_42_msx, 208,  28 }, // Wheel of faith
            { (Entity*) &entity_10_msx, 110,  52 }, // Yellow hint
            { (Entity*) &entity_11_msx,  32,  76 }, // Heart
            { (Entity*) &entity_12_msx,   8, 100 }, // Cross
            { (Entity*) &entity_08_msx, 150,  84 }, // Checkpoint
            { (Entity*) &entity_46_msx,  36, 144 }, // Passage
            { (Entity*) &entity_39_msx,  98, 128,  0,  0,  0,  0, -1, 0 }, // Death

      }
}
;




const Mask mask_42_msx =
{
   {
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  1,  1 },
      {  1,  1,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  1,  1 },
      {  1,  1,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  1,  1 },
      {  1,  1,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  1,  1 },
      {  1,  1,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  1,  1 },
      {  1,  1,  0, 64,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  0, 64,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0, 32, 32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0, 32, 32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0, 64, 32, 32, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0, 16,  0,  0,  0, 64,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  0,  0,  0,  1,  1,  1,  1 }
   }
};


const Room room_00_msx = { (Image*) &room_00_f_msx, NULL, (Objects*) &objects_null,   (Mask*) &mask_00_all, (Image*) &text_00_all, (Music*) &music_00_all,         room_null };
const Room room_01_msx = { (Image*) &room_01_f_msx, NULL, (Objects*) &objects_01_msx, (Mask*) &mask_01_all, (Image*) &text_01_all, (Music*) &music_08_all,         room_null };
const Room room_02_msx = { (Image*) &room_02_f_msx, NULL, (Objects*) &objects_02_msx, (Mask*) &mask_02_all, (Image*) &text_02_all, (Music*) &music_02_all, room_funct_02_all };
const Room room_03_msx = { (Image*) &room_03_f_msx, NULL, (Objects*) &objects_03_msx, (Mask*) &mask_03_all, (Image*) &text_03_all, (Music*) &music_02_all, room_funct_03_all };
const Room room_04_msx = { (Image*) &room_04_f_msx, NULL, (Objects*) &objects_04_msx, (Mask*) &mask_04_all, (Image*) &text_04_all, (Music*) &music_02_all, room_funct_04_all };

const Room room_10_msx = { (Image*) &room_10_f_msx, NULL, (Objects*) &objects_null,   (Mask*) &mask_10_all, (Image*) &text_10_all, (Music*) &music_10_all,         room_null };
const Room room_11_msx = { (Image*) &room_11_f_msx, NULL, (Objects*) &objects_11_msx, (Mask*) &mask_11_all, (Image*) &text_11_all, (Music*) &music_08_all,         room_null };
const Room room_12_msx = { (Image*) &room_12_f_msx, NULL, (Objects*) &objects_12_msx, (Mask*) &mask_12_all, (Image*) &text_12_all, (Music*) &music_02_all, room_funct_12_all };
const Room room_13_msx = { (Image*) &room_13_f_msx, NULL, (Objects*) &objects_13_msx, (Mask*) &mask_13_all, (Image*) &text_13_all, (Music*) &music_02_all, room_funct_13_all };
const Room room_14_msx = { (Image*) &room_14_f_msx, NULL, (Objects*) &objects_14_msx, (Mask*) &mask_14_all, (Image*) &text_14_all, (Music*) &music_03_all, room_funct_14_all };

const Room room_20_msx = { (Image*) &room_20_f_msx, NULL, (Objects*) &objects_20_msx, (Mask*) &mask_20_all, (Image*) &text_20_all, (Music*) &music_01_all,         room_null };
const Room room_21_msx = { (Image*) &room_21_f_msx, NULL, (Objects*) &objects_21_msx, (Mask*) &mask_21_all, (Image*) &text_21_all, (Music*) &music_01_all, room_funct_21_all };
const Room room_22_msx = { (Image*) &room_22_f_msx, NULL, (Objects*) &objects_22_msx, (Mask*) &mask_22_all, (Image*) &text_22_all, (Music*) &music_01_all,         room_null };
const Room room_23_msx = { (Image*) &room_23_f_msx, NULL, (Objects*) &objects_23_msx, (Mask*) &mask_23_all, (Image*) &text_23_all, (Music*) &music_01_all, room_funct_23_all };
const Room room_24_msx = { (Image*) &room_24_f_msx, NULL, (Objects*) &objects_24_msx, (Mask*) &mask_24_all, (Image*) &text_24_all, (Music*) &music_03_all, room_funct_24_all };

const Room room_30_msx = { (Image*) &room_30_f_msx, NULL, (Objects*) &objects_30_msx, (Mask*) &mask_30_all, (Image*) &text_30_all, (Music*) &music_01_all,         room_null };
const Room room_31_msx = { (Image*) &room_31_f_msx, NULL, (Objects*) &objects_31_msx, (Mask*) &mask_31_all, (Image*) &text_31_all, (Music*) &music_01_all, room_funct_31_all };
const Room room_32_msx = { (Image*) &room_32_f_msx, NULL, (Objects*) &objects_32_msx, (Mask*) &mask_32_all, (Image*) &text_32_all, (Music*) &music_01_all,         room_null };
const Room room_33_msx = { (Image*) &room_33_f_msx, NULL, (Objects*) &objects_33_msx, (Mask*) &mask_33_all, (Image*) &text_33_all, (Music*) &music_04_all, room_funct_33_all };
const Room room_34_msx = { (Image*) &room_34_f_msx, NULL, (Objects*) &objects_34_msx, (Mask*) &mask_34_all, (Image*) &text_34_all, (Music*) &music_03_all, room_funct_34_all };

const Room room_40_msx = { (Image*) &room_40_f_msx, NULL, (Objects*) &objects_null,   (Mask*) &mask_40_all, (Image*) &text_40_all, (Music*) &music_00_all,         room_null };
const Room room_41_msx = { (Image*) &room_41_f_msx, NULL, (Objects*) &objects_41_msx, (Mask*) &mask_41_all, (Image*) &text_41_all, (Music*) &music_00_all, room_funct_41_all };
const Room room_42_msx = { (Image*) &room_42_f_msx, NULL, (Objects*) &objects_42_msx, (Mask*) &mask_42_msx, (Image*) &text_42_all, (Music*) &music_02_all, room_funct_42_all };
const Room room_43_msx = { (Image*) &room_43_f_msx, NULL, (Objects*) &objects_43_msx, (Mask*) &mask_43_all, (Image*) &text_43_all, (Music*) &music_02_all, room_funct_43_all };
const Room room_44_msx = { (Image*) &room_44_f_msx, NULL, (Objects*) &objects_44_msx, (Mask*) &mask_44_all, (Image*) &text_44_all, (Music*) &music_04_all, room_funct_44_all };


