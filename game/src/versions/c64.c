#include "../../inc/include.h"

#include "../../res/c64/music.h"
#include "../../res/c64/sprites.h"
#include "../../res/c64/texts.h"
#include "../../res/all/texts.h"
#include "../../res/c64/foreground.h"
#include "../../res/c64/background.h"
#include "../../inc/versions/all.h"

#include "../../res/all/sfx.h"


const Entity entity_01_c64 = {  1, "Jean stays",            0, (SpriteDefinition*) &jean_2x3_c64,     PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_02_c64 = {  2, "Jean walks",            1, (SpriteDefinition*) &jean_2x3_c64,     PAL3, ENTITY_PLAYER,     FIX32(0.65),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_03_c64 = {  3, "Jean jumps",            2, (SpriteDefinition*) &jean_2x3_c64,     PAL3, ENTITY_PLAYER,     FIX32(0.65),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_04_c64 = {  4, "Jean burns",            3, (SpriteDefinition*) &jean_2x3_c64,     PAL3, ENTITY_NULL,                 0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  1,  5 } };
const Entity entity_05_c64 = {  5, "Jean lie down",         0, (SpriteDefinition*) &jean_3x2_c64,     PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  9,  0,  9 } }; // {  8,  6,  0, 10 } };
const Entity entity_06_c64 = {  6, "Jean sneaks",           1, (SpriteDefinition*) &jean_3x2_c64,     PAL3, ENTITY_PLAYER,      FIX32(0.2),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  9,  0,  9 } }; // {  8,  6,  0, 10 } };
const Entity entity_07_c64 = {  7, "Flying skull",          4, (SpriteDefinition*) &enemies_2x2_c64,  PAL2, ENTITY_ENEMY,       FIX32(0.8),           0,           0, 0, 0, 0, NULL, mcb_udlr,        0, {  4,  5,  3,  4 } };
const Entity entity_08_c64 = {  8, "Checkpoint",            4, (SpriteDefinition*) &jean_2x3_c64,     PAL3, ENTITY_CHECKPOINT,           0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_09_c64 = {  9, "Checkpoint active",     5, (SpriteDefinition*) &jean_2x3_c64,     PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_10_c64 = { 10, "Yellow hint",          12, (SpriteDefinition*) &objects_2x2_c64,  PAL3, ENTITY_HINT,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_11_c64 = { 11, "Heart",                11, (SpriteDefinition*) &objects_2x2_c64,  PAL3, ENTITY_HEART,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_12_c64 = { 12, "Cross",                 0, (SpriteDefinition*) &objects_2x2_c64,  PAL3, ENTITY_CROSS,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_13_c64 = { 13, "Inverted cross",        1, (SpriteDefinition*) &objects_2x2_c64,  PAL3, ENTITY_INV_CROSS,            0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_14_c64 = { 14, "Crusader",              1, (SpriteDefinition*) &enemies_2x3_c64,  PAL2, ENTITY_ENEMY,      FIX32(0.60),           0, FIX32(0.20), 0, 1, 0, NULL, mcb_crusader,    0, { -8,  5,  0, -7 } }; // {  7,  5,  0,  5 } };
const Entity entity_15_c64 = { 15, "Water",                 6, (SpriteDefinition*) &enemies_2x1_c64,  PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_16_c64 = { 16, "Fire",                 11, (SpriteDefinition*) &enemies_2x2_c64,  PAL2, ENTITY_NULL,              zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_17_c64 = { 17, "Rat",                   1, (SpriteDefinition*) &enemies_2x2_c64,  PAL2, ENTITY_ENEMY,      FIX32(0.60),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  0,  0,  0 } };
const Entity entity_18_c64 = { 18, "Green spider",          2, (SpriteDefinition*) &enemies_2x2_c64,  PAL2, ENTITY_ENEMY,             zero, FIX32(0.75),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
const Entity entity_19_c64 = { 19, "Brown spider",          3, (SpriteDefinition*) &enemies_2x2_c64,  PAL2, ENTITY_ENEMY,             zero, FIX32(1.00),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
const Entity entity_20_c64 = { 20, "Bell",                 14, (SpriteDefinition*) &objects_2x2_c64,  PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_21_c64 = { 21, "Snail",                 4, (SpriteDefinition*) &enemies_2x1_c64,  PAL2, ENTITY_ENEMY,      FIX32(0.30),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  2,  0,  2 } };
const Entity entity_22_c64 = { 22, "Switch (off)",          2, (SpriteDefinition*) &objects_2x2_c64,  PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_23_c64 = { 23, "Swordsman's skeleton",  2, (SpriteDefinition*) &enemies_2x3_c64,  PAL2, ENTITY_ENEMY,      FIX32(0.60),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  6,  5,  0,  5 } };
const Entity entity_24_c64 = { 24, "Skull wasp",            5, (SpriteDefinition*) &enemies_2x2_c64,  PAL2, ENTITY_ENEMY,      FIX32(0.50), FIX32(0.50),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
const Entity entity_25_c64 = { 25, "Human wasp",           10, (SpriteDefinition*) &enemies_2x2_c64,  PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
const Entity entity_26_c64 = { 26, "El Coco",               7, (SpriteDefinition*) &enemies_2x2_c64,  PAL2, ENTITY_ENEMY,      FIX32(0.45), FIX32(0.45),        zero, 0, 1, 0, NULL, mcb_coco,        0, {  2,  2,  2,  2 } };
const Entity entity_27_c64 = { 27, "Spitting plant",        0, (SpriteDefinition*) &enemies_2x2_c64,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
const Entity entity_28_c64 = { 28, "Spit",                  2, (SpriteDefinition*) &enemies_2x1_c64,  PAL2, ENTITY_ENEMY,      FIX32(0.75), FIX32(2.20), FIX32(0.10), 0, 0, 0, NULL, mcb_bullet,      0, {  1,  5,  1,  5 } };
const Entity entity_29_c64 = { 29, "Fireball",              6, (SpriteDefinition*) &enemies_2x2_c64,  PAL2, ENTITY_ENEMY,                0, FIX32(1.50),           0, 0, 0, 0, NULL, mcb_fireball,    0, {  2,  2,  2,  2 } };
const Entity entity_30_c64 = { 30, "Evil bird",             0, (SpriteDefinition*) &enemies_3x2_c64,  PAL2, ENTITY_ENEMY,       FIX32(1.0),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  2,  0,  1,  1 } };
const Entity entity_31_c64 = { 31, "Spikes",                8, (SpriteDefinition*) &enemies_2x1_c64,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  2,  0,  0,  0 } };
const Entity entity_32_c64 = { 32, "Demon",                 3, (SpriteDefinition*) &enemies_2x3_c64,  PAL2, ENTITY_ENEMY,      FIX32(0.75),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
const Entity entity_33_c64 = { 33, "Archer skeleton",       0, (SpriteDefinition*) &enemies_3x3_c64,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  6,  6,  0,  6 } };
const Entity entity_34_c64 = { 34, "Arrow",                 5, (SpriteDefinition*) &enemies_2x1_c64,  PAL2, ENTITY_ENEMY,      FIX32(2.50),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  2,  3,  2,  3 } };
const Entity entity_35_c64 = { 35, "Door",                  0, (SpriteDefinition*) &objects_1x4_c64,  PAL3, ENTITY_DOOR,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_36_c64 = { 36, "Stone hatch",           0, (SpriteDefinition*) &hatch_2x2_c64,    PAL1, ENTITY_HATCH,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_37_c64 = { 37, "Hangman",               7, (SpriteDefinition*) &jean_2x3_c64,     PAL3, ENTITY_ENEMY,                0, FIX32(0.60),           0, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  1,  2,  0,  2 } };
const Entity entity_38_c64 = { 38, "Rope",                  6, (SpriteDefinition*) &jean_2x3_c64,     PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_39_c64 = { 39, "Death",                 0, (SpriteDefinition*) &death_4x4_c64,    PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  8,  5,  4 } };//{  0,  0,  2,  0 } };
const Entity entity_40_c64 = { 40, "Death throw",           1, (SpriteDefinition*) &death_4x4_c64,    PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  8,  5,  4 } };//{  0,  0,  4,  0 } };
const Entity entity_41_c64 = { 41, "Scythe",                0, (SpriteDefinition*) &death_2x2_c64,    PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),           0, 0, 0, 0, NULL, mcb_scythe,      0, {  2,  2,  2,  2 } };//{  1,  1,  1,  1 } };
const Entity entity_42_c64 = { 42, "Wheel of faith",        5, (SpriteDefinition*) &objects_2x2_c64,  PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
const Entity entity_43_c64 = { 43, "Wheel of faith",        6, (SpriteDefinition*) &objects_2x2_c64,  PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
const Entity entity_44_c64 = { 44, "Bell (on)",            15, (SpriteDefinition*) &objects_2x2_c64,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_45_c64 = { 45, "Switch (on)",           3, (SpriteDefinition*) &objects_2x2_c64,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_46_c64 = { 46, "Passage",               8, (SpriteDefinition*) &jean_2x3_c64,     PAL3, ENTITY_PASSAGE,              0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, { 16,  7,  0,  7 } };
const Entity entity_47_c64 = { 47, "Dragon head",           0, (SpriteDefinition*) &dragon_4x5_c64,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_48_c64 = { 48, "Dragon body",           0, (SpriteDefinition*) &dragon_12x5_c64,  PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_49_c64 = { 49, "Dragon fire",           0, (SpriteDefinition*) &dragon_3x6_c64,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  0,  2,  0,  2 } };
const Entity entity_50_c64 = { 50, "Running fire",          0, (SpriteDefinition*) &dragon_2x2_c64,   PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  0,  0,  0 } };
const Entity entity_51_c64 = { 51, "Gargoyle",              8, (SpriteDefinition*) &enemies_2x2_c64,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
const Entity entity_52_c64 = { 52, "Gargoyle spit",         1, (SpriteDefinition*) &enemies_2x1_c64,  PAL2, ENTITY_ENEMY,      FIX32(3.00),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  1,  1,  2,  1 } };
const Entity entity_53_c64 = { 53, "Evil cursader",         0, (SpriteDefinition*) &enemies_2x3_c64,  PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
const Entity entity_54_c64 = { 54, "Toxic drop",            3, (SpriteDefinition*) &enemies_2x1_c64,  PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.09), 0, 0, 0, NULL, mcb_drop,        0, {  0,  3,  0,  3 } };
const Entity entity_55_c64 = { 55, "Fish",                  9, (SpriteDefinition*) &enemies_2x2_c64,  PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.10), 0, 0, 1, NULL, mcb_null,        0, {  0,  1,  0,  1 } };
const Entity entity_56_c64 = { 56, "Splash",                7, (SpriteDefinition*) &enemies_2x1_c64,  PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_57_c64 = { 57, "Satan",                 0, (SpriteDefinition*) &satan_4x6_c64,    PAL2, ENTITY_ENEMY,                0, FIX32(0.75),           0, 0, 0, 0, NULL, mcb_udlr,        0, {  } };
const Entity entity_58_c64 = { 58, "Satan bullet",          0, (SpriteDefinition*) &enemies_2x1_c64,  PAL2, ENTITY_ENEMY,      FIX32(1.00),           0,           0, 0, 0, 0, NULL, mcb_bullet,      0, {  1,  5,  1,  5 } };
const Entity entity_59_c64 = { 59, "Grial",                 4, (SpriteDefinition*) &objects_2x2_c64,  PAL3, ENTITY_GRIAL,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_60_c64 = { 60, "Red hint",             13, (SpriteDefinition*) &objects_2x2_c64,  PAL3, ENTITY_HINT,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_61_c64 = { 61, "Catched cross",         0, (SpriteDefinition*) &objects_1x1_c64,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_62_c64 = { 62, "Bonfire",               0, (SpriteDefinition*) &bonfire_6x8_c64,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_63_c64 = { 63, "Bell ringing",          0, (SpriteDefinition*) &objects_4x2_c64,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };


const Entity entity_c64_01 = { 101, "Black Evil bird",      1, (SpriteDefinition*) &enemies_3x2_c64,  PAL2, ENTITY_NULL,        FIX32(0.5),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  2,  5,  5,  1 }  };





////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #0 c64
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_20_c64 = // Tower of the Bell // OK // c64: Hacer que la campana se mueva al tocarla
{
      {
            { (Entity*) &entity_20_c64,  40,   8,  0,  0 }, // Bell
            { (Entity*) &entity_17_c64,  64, 144, +1,  0 }, // Rat
            { (Entity*) &entity_17_c64, 216, 144, -1,  0 }, // Rat
            { (Entity*) &entity_11_c64,  96,  56,  0,  0 }, // Heart
	}
};


const Objects objects_30_c64 = // Wine supplies // OK
{
      {
            { (Entity*) &entity_18_c64,  36, 121,  0, +1 }, // Green spider
            { (Entity*) &entity_19_c64,  60, 131,  0, -1 }, // Brown spider
            { (Entity*) &entity_18_c64,  76, 100,  0, +1 }, // Green spider
            { (Entity*) &entity_10_c64, 144, 128,  0,  0 }, // Brown spider
            { (Entity*) &entity_19_c64, 196, 130,  0, -1,  0, FIX32(0.5) }, // Brown spider
            { (Entity*) &entity_12_c64, 220, 140,  0,  0 }, // Cross
	}
};


const Objects objects_40_c64 =
{
    {
        { (Entity*) &entity_c64_01, 130,  55, +1 }, // Black Evil bird
	}
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #1 c64
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_01_c64 = // Escape !!! // OK
{
      {
            { (Entity*) &entity_14_c64,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_c64,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_c64,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_c64, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_c64, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_c64, -150, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_c64, -170, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_c64, -190, 136, +1,  0 }, // Crusader
	}
};


const Objects objects_11_c64 = // Death is close !!! // OK
{
      {
            { (Entity*) &entity_14_c64,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_c64,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_c64,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_c64, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_c64, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_c64, -150, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_c64, -170, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_c64, -190, 136, +1,  0 }, // Crusader
      }
};


const Objects objects_21_c64 = // Abandone church // OK
{
      {
            { (Entity*) &entity_35_c64,   0, 112 }, // Door
            { (Entity*) &entity_c64_01, 130, 90, -1 }, // Black Evil bird
      }
};


const Objects objects_31_c64 = // The Altar // OK
{
      {
            { (Entity*) &entity_35_c64, 248, 112,  0,  0,  0,  0,  1 }, // Door
            { (Entity*) &entity_36_c64, 208, 160,  0,  0 }, // Stone hatch
            { (Entity*) &entity_07_c64, 144,  44, +1,  0 }, // Flying skull
            { (Entity*) &entity_07_c64,  88,  84, +1,  0 }, // Flying skull
            { (Entity*) &entity_10_c64, 212, 140,  0,  0 }, // Yellow hint
            { (Entity*) &entity_08_c64,  56, 136,  0,  0 }, // Checkpoint
            //{ (Entity*) &entity_c64_01, 130,  55, +1 }, // Black Evil bird
	}
};


const Objects objects_41_c64 = // Hangman Tree // OK
{
      {
            { (Entity*) &entity_37_c64, 152, 104,  0, +1 }, // Hangman
            { (Entity*) &entity_38_c64, 152,  88,  0,  0 }, // Rope
            { (Entity*) &entity_38_c64, 152, 112,  0,  0 }, // Rope

            { (Entity*) &entity_37_c64, 176,  76,  0, +1 }, // Hangman
            { (Entity*) &entity_38_c64, 176,  64,  0,  0 }, // Rope
            { (Entity*) &entity_38_c64, 176,  88,  0,  0 }, // Rope
            { (Entity*) &entity_38_c64, 176, 102,  0,  0 }, // Rope

            { (Entity*) &entity_37_c64,  72,  88,  0, +1 }, // Hangman
            { (Entity*) &entity_38_c64,  72,  72,  0,  0 }, // Pope
            { (Entity*) &entity_38_c64,  72,  96,  0,  0 }, // Pope
            { (Entity*) &entity_38_c64,  72, 116,  0,  0 }, // Pope

            { (Entity*) &entity_37_c64,  48,  72,  0, +1 }, // Hangman
            { (Entity*) &entity_38_c64,  48,  56,  0,  0 }, // Rope
            { (Entity*) &entity_38_c64,  48,  80,  0,  0 }, // Rope
            { (Entity*) &entity_38_c64,  48, 104,  0,  0 }, // Pope

            { (Entity*) &entity_21_c64, 152,  48, -1,  0 }, // Snail
            { (Entity*) &entity_21_c64, 136, 152, -1,  0 }, // Snail
            { (Entity*) &entity_22_c64, 216, 144,  0,  0 }, // Switch  // 17
            { (Entity*) &entity_13_c64,  48,  32,  0,  0 }, // Inverted cross


	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #2 c64
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_02_c64 = // Pestilent beast // OK
{
      {
            { (Entity*) &entity_47_c64, 120,  10,  0,  0 }, // Dragon head #0
            { (Entity*) &entity_48_c64, 112,   8,  0,  0 }, // Dragon body #1
            { (Entity*) &entity_49_c64, 125,  51,  0,  0 }, // Dragon fire #2

            { (Entity*) &entity_50_c64, -40, -40,  0, +1 }, // Runnig fire #3
            { (Entity*) &entity_50_c64, -40, -40,  0, -1 }, // Runnig fire #4
            { (Entity*) &entity_50_c64, -40, -40,  0, +1 }, // Runnig fire #5
            { (Entity*) &entity_50_c64, -40, -40,  0, -1 }, // Runnig fire #6
            { (Entity*) &entity_50_c64, -40, -40,  0, +1 }, // Runnig fire #7
            { (Entity*) &entity_50_c64, -40, -40,  0, -1 }, // Runnig fire #8

            { (Entity*) &entity_22_c64,  56,  32,  0,  0 }, // Switch      #9
            { (Entity*) &entity_11_c64,  80, 144,  0,  0 }, // Heart
            { (Entity*) &entity_12_c64, 204,  30,  0,  0 }, // Cross

            { (Entity*) &entity_46_c64, 184, 136,  0,  0 }, // Passage
      }
};


const Objects objects_12_c64 = // Cave of illusions // OK // TODO: Mejorar el movimiento del coco
{
      {
            { (Entity*) &entity_11_c64,  16,  32,  0,  0 }, // Heart
            { (Entity*) &entity_26_c64, 128,  72,  0,  0 }, // El Coco
            { (Entity*) &entity_08_c64, 112, 136,  0,  0 }, // Checkpoint
      }
};


const Objects objects_22_c64 = // Plagued ruins // OK
{
      {
            { (Entity*) &entity_10_c64,  80, 142,  0,  0 }, // Yellow hint
            { (Entity*) &entity_11_c64, 128,  48,  0,  0 }, // Heart
            { (Entity*) &entity_24_c64,  48,  24,  0, -1 }, // Skull wasp
            { (Entity*) &entity_24_c64, 128, 128,  0, -1 }, // Skull wasp

            { (Entity*) &entity_25_c64, 160,  40,  0, -1 }, // Human wasp
            { (Entity*) &entity_25_c64,  32, 112,  0, -1 }, // Human wasp
            { (Entity*) &entity_25_c64, 176, 128,  0, -1 }, // Human wasp
            { (Entity*) &entity_08_c64,  64,  56,  0,  0 }, // Checkpoint
	}
};


const Objects objects_32_c64 = // Catacombs // OK
{
      {
            { (Entity*) &entity_23_c64,  80,  88, -1,  0 }, // Swordsman's skeleton
            { (Entity*) &entity_23_c64, 128, 136, -1,  0 }, // Swordsman's skeleton
            { (Entity*) &entity_12_c64, 144, 144,  0,  0 }, // Cross
	}
};


const Objects objects_42_c64 = // Hidden garden // OK
{
      {
            { (Entity*) &entity_12_c64,  72,  32,   0,  0 }, // Cross          - #01
            { (Entity*) &entity_10_c64, 152,  78,   0,  0 }, // Yellow hint    - #02
            { (Entity*) &entity_21_c64, 168, 152,  -1,  0 }, // Snail          - #03
            { (Entity*) &entity_18_c64,  48,  24,   0, +1,  0, FIX32(0.60) }, // Green spider- #04

            { (Entity*) &entity_27_c64, 224,  48,   0,  0 }, // Spitting plant // 05
            { (Entity*) &entity_28_c64,   0, -60, -60,  0 }, // Spit           // 06
            { (Entity*) &entity_28_c64,   0, -60, -60,  0 }, // Spit           // 07

            { (Entity*) &entity_27_c64, 136,  32,   0,  0 }, // Spitting plant // 08
            { (Entity*) &entity_28_c64,   0, -60, -60,  0 }, // Spit           // 09
            { (Entity*) &entity_28_c64,   0, -60, -60,  0 }, // Spit           // 10

            { (Entity*) &entity_27_c64, 112, 112,   0,  0 }, // Spitting plant // 11
            { (Entity*) &entity_28_c64,   0, -60, -60,  0 }, // Spit           // 12
            { (Entity*) &entity_28_c64,   0, -60, -60,  0 }, // Spit           // 13

            { (Entity*) &entity_08_c64,  64, 136,   0,  0 }, // Checkpoint     - #00

	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #3 c64
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_03_c64 = // Gloomy tunnels // OK
{
      {
            { (Entity*) &entity_54_c64,  32,  88,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_c64,  88,  32,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_c64,  88,  88,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_c64, 208,  32,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_c64, 192,  32,  0,  0 }, // Toxic drop

            { (Entity*) &entity_11_c64,  24, 112,  0,  0 }, // Heart
            { (Entity*) &entity_53_c64,  80,  56, -1,  0 }, // Evil crusader
            { (Entity*) &entity_53_c64, 192, 136, -1,  0 }, // Evil crusader
            { (Entity*) &entity_13_c64, 224,  64,  0,  0 }, // Inverted cross

            { (Entity*) &entity_08_c64, 168,  56,  0,  0 }, // Checkpoint
      }
};


const Objects objects_13_c64 = // Lake of despair // OK
{
      {
            { (Entity*) &entity_15_c64,  48, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_c64,  64, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_c64,  80, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_c64,  96, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_c64, 112, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_c64, 128, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_c64, 144, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_c64, 160, 168,  0,  0 }, // Water

            { (Entity*) &entity_56_c64,  56, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_c64, 116, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_c64, 156, 160,  0,  0 }, // Splash

            { (Entity*) &entity_55_c64,  56, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_c64, 116, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_c64, 156, 168,  0,  0 }, // Fish

            { (Entity*) &entity_12_c64,  16,  48,  0,  0 }, // Cross
            { (Entity*) &entity_10_c64, 176,  40,  0,  0 }, // Yellow hint
            { (Entity*) &entity_18_c64, 144,  24,  0, +1, 0, FIX32(0.60)}, // Green spider
	}
};


const Objects objects_23_c64 = // The wheel of Faith // OK
{
      {
            { (Entity*) &entity_33_c64,  12,  24,  0,  0 }, // Archer skeleton
            { (Entity*) &entity_33_c64, 221,  72, -1,  0 }, // Archer skeleton
            { (Entity*) &entity_33_c64, 116, 104, -1,  0 }, // Archer skeleton
            { (Entity*) &entity_34_c64, -20, -20,  0,  0 }, // Arrow
            { (Entity*) &entity_34_c64, -20, -20,  0,  0 }, // Arrow
            { (Entity*) &entity_34_c64, -20, -20,  0,  0 }, // Arrow

            { (Entity*) &entity_42_c64, 120,  16,  0,  0 }, // Wheel of faith

            { (Entity*) &entity_13_c64,  24,  80,  0,  0 }, // Inverted cross
            { (Entity*) &entity_12_c64, 216, 144,  0,  0 }, // Cross
            { (Entity*) &entity_11_c64, 168,  80,  0,  0 }, // Heart
      }
};


const Objects objects_33_c64 = // Banquet of Death // OK :)
{
      {
            { (Entity*) &entity_12_c64,  24,  40,  0,  0 }, // Cross
            { (Entity*) &entity_11_c64, 120,  88,  0,  0 }, // Heart
            { (Entity*) &entity_39_c64,  16,   8, -1,  0 }, // Death
            { (Entity*) &entity_41_c64, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_c64, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_c64, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_c64, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_c64, -16, -16,  0, +1 }, // Scythe
      }
};


const Objects objects_43_c64 = // Underground river // OK
{
      {
            { (Entity*) &entity_35_c64,   0, 128,  0,  0 }, // Door

            { (Entity*) &entity_15_c64, 112, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_c64, 128, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_c64, 144, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_c64, 160, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_c64, 176, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_c64, 192, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_c64, 208, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_c64, 224, 168,  0,  0 }, // Water

            { (Entity*) &entity_46_c64, 168, 120,  0,  0 }, // Passage
            { (Entity*) &entity_18_c64,  88,  48,  0, +1 }, // Green spider
            { (Entity*) &entity_12_c64,  24,  16,  0,  0 }, // Cross
            { (Entity*) &entity_11_c64, 200,  64,  0,  0 }, // Heart

            { (Entity*) &entity_54_c64,  48,   8,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_c64, 128,   8,  0,  0 }, // Toxic drop

            { (Entity*) &entity_56_c64, 116, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_c64, 192, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_c64, 144, 160,  0,  0 }, // Splash

            { (Entity*) &entity_55_c64, 116, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_c64, 192, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_c64, 144, 168,  0,  0 }, // Fish

            { (Entity*) &entity_08_c64,  64,  88,  0,  0 }, // Checkpoint
      }

};





////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #4 c64
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_04_c64 = // Unexpected gate // OK
{
      {
            { (Entity*) &entity_51_c64, 216,  24,  0,  0,  0,  0, -1 }, // Gargoyle
            { (Entity*) &entity_52_c64, -40, -40,  0,  0             }, // Gargoyle spit

            { (Entity*) &entity_30_c64,  36,  88, +1,  0, FIX32(0.60) }, // Evil bird

            { (Entity*) &entity_35_c64, 248, 112,  0,  0,  0,  0, -1 }, // Door // 03

            { (Entity*) &entity_22_c64, 192,  48,  0,  0 }, // Switch
            { (Entity*) &entity_53_c64, 136, 136, -1,  0 }  // Evil crusader
	}
};


const Objects objects_14_c64 = // Evil church // OK
{
      {
            { (Entity*) &entity_10_c64,  24,  46,  0,  0 }, // Yellow hint

            { (Entity*) &entity_16_c64, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_32_c64,  16, 136, -1,  0, FIX32(0.60) }, // Demon
            { (Entity*) &entity_32_c64,  88,  40, -1,  0, FIX32(0.60) }, // Demon
            { (Entity*) &entity_32_c64, 128, 136, -1,  0, FIX32(0.60) }, // Demon

            { (Entity*) &entity_33_c64, 190, 120,  0,  0 }, // Archer skeleton
            { (Entity*) &entity_34_c64, -60, -60, -1,  0 }, // Arrow

            { (Entity*) &entity_08_c64, 152,  40,  0,  0 }, // Checkpoint
	}
};


const Objects objects_24_c64 = // Tortured souls // OK
{
      {
            { (Entity*) &entity_51_c64, 224, 104,  0,  0,  0,  0, -1 }, // Gargoyle
            { (Entity*) &entity_52_c64, -40, -40,  0,  0             }, // Gargoyle spit

            { (Entity*) &entity_13_c64, 220, 142,  0,  0 }, // Inverted cross

            { (Entity*) &entity_31_c64, 192, 152 }, // Spikes

            { (Entity*) &entity_23_c64,  60,   8, -1,  0, FIX32(0.70),  0, 0, 1 }, // Swordsman's skeleton
            { (Entity*) &entity_23_c64, 140,  64, -1,  0, FIX32(0.60),  0, 0, 0 }, // Swordsman's skeleton
            { (Entity*) &entity_32_c64, 208,  64, -1,  0,           0,  0, 0, 0 }, // Demon

            { (Entity*) &entity_16_c64,  80, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_c64,  96, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_c64, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_c64, 160, 160,  0,  0 }, // Fire

            { (Entity*) &entity_29_c64,  80, 136,  0, +1,  0, FIX32(1.75) }, // Fireball
            { (Entity*) &entity_29_c64,  96, 152,  0, +1,  0, FIX32(1.25) }, // Fireball
            { (Entity*) &entity_29_c64, 152,  96,  0, +1,  0, FIX32(1.25) }, // Fireball
	}
};


const Objects objects_34_c64 = // Ashes to ashes // OK
{
      {
            { (Entity*) &entity_16_c64,  16, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_c64,  32, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_c64,  48, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_c64,  80, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_c64,  96, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_c64, 112, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_c64, 160, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_c64, 176, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_c64, 192, 160,  0,  0 }, // Fire

            { (Entity*) &entity_29_c64,  48,  24,  0, +1 }, // Fireball
            { (Entity*) &entity_29_c64,  80,  88,  0, +1 }, // Fireball
            { (Entity*) &entity_29_c64, 160,  72,  0, +1 }, // Fireball

            { (Entity*) &entity_11_c64,  64, 144,  0,  0 }, // Heart
            { (Entity*) &entity_11_c64, 184,  56,  0,  0 }, // Heart
            { (Entity*) &entity_30_c64, 100,  32, +1,  0              }, // Evil bird
            { (Entity*) &entity_30_c64, 212, 104, +1,  0, FIX32(0.75) }, // Evil bird
            { (Entity*) &entity_23_c64, 160,   8, -1,  0, FIX32(0.75),  0, 0, 1 }, // Swordsman's skeleton

            { (Entity*) &entity_08_c64, 136, 136,  0,  0 }, // Checkpoint
	}
};



const Objects objects_44_c64 = // Satan!!! // TODO
{
      {
            { (Entity*) &entity_35_c64,   0, 128 }, // Door

            { (Entity*) &entity_14_c64,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_c64,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_c64,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_c64, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_c64, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_c64, -150, 136, +1,  0 }, // Crusader

            { (Entity*) &entity_59_c64, 120,  16,  0,  0 }, // Grial
            { (Entity*) &entity_60_c64, 222, 111,  0,  0 }, // Red hint

            { (Entity*) &entity_58_c64, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_c64, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_c64, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_c64, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_c64, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_c64, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_c64, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_c64, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_c64, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_c64, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_c64, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_c64, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_57_c64, 196,  80,  0, +1 }, // Satan

            { (Entity*) &entity_61_c64, 128, 190,  0,  0 }, // Catched cross // puts out of the screen
	}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Other c64
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////




const Objects objects_prologue_c64 =
{
      {
            { (Entity*) &entity_02_c64,  -16, 118, +1,  0  }, // Jean walks

            { (Entity*) &entity_14_c64,  -70, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_c64,  -95, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_c64, -120, 116, +1,  0, FIX32(0.50) }, // Crusader
      }
};

const Objects objects_burnhim_c64 =
{
      {
            { (Entity*) &entity_14_c64,   56, 136 }, // Crusader
            { (Entity*) &entity_14_c64,   80, 136 }, // Crusader
            { (Entity*) &entity_14_c64,  160, 136 }, // Crusader
            { (Entity*) &entity_14_c64,  184, 136 }, // Crusader

            { (Entity*) &entity_50_c64,  104, 128 }, // Fire
            { (Entity*) &entity_50_c64,  120, 128 }, // Fire
            { (Entity*) &entity_50_c64,  136, 128 }, // Fire

            { (Entity*) &entity_03_c64,  120, 118 }, // Jean stays
            { (Entity*) &entity_62_c64,  104,  96 }, // Bonfire
	}
};

const Objects objects_info_c64 =
{
      {
            { (Entity*) &entity_02_c64,  12,  20,  0,  0,  0,  0, -1, 0 }, // Jean walks
            { (Entity*) &entity_22_c64,  12, 192,  0,  0,  0,  0, -1, 0 }, // Switch
            { (Entity*) &entity_20_c64, 208, 188 }, // Bell
            { (Entity*) &entity_59_c64, 192, 164 }, // Grial
            { (Entity*) &entity_42_c64, 208,  28 }, // Wheel of faith
            { (Entity*) &entity_10_c64, 110,  52 }, // Yellow hint
            { (Entity*) &entity_11_c64,  32,  76 }, // Heart
            { (Entity*) &entity_12_c64,   8, 100 }, // Cross
            { (Entity*) &entity_08_c64, 150,  84 }, // Checkpoint
            { (Entity*) &entity_46_c64,  36, 144 }, // Passage
            { (Entity*) &entity_39_c64,  98, 128,  0,  0,  0,  0, -1, 0 }, // Death

      }
}
;





const Mask mask_21_c64 =
{
   {
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16 },
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

const Mask mask_31_c64 =
{
    {
        {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
        {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
        {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
        {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
        {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
        {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
        {  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
        {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
        {  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  1,  1 },
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
        {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  0,  1,  1,  1,  1 },
        {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1 }
    }
};


const Mask mask_41_c64 =
{
    {
        {  1,  1,  1, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0,  0,  1,  1 },
        {  1,  1,  1, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0,  0,  0,  1,  1 },
        {  1,  1,  1,  0, 64, 64, 64, 64, 64, 64, 64,  0,  0,  0, 64, 64, 64, 64, 64, 64,  0, 64, 64, 64,  0,  0,  0,  0,  0,  0,  1,  1 },
        {  1,  1,  1,  0,  0,  0, 64,  0, 64, 64,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1 },
        {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1 },
        {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
        {  1,  1,  1,  0,  0,  0,  2,  2,  2,  2,  2,  2,  2,  2,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  1,  1 },
        {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  2,  2,  0,  0,  0,  0,  0,  0,  1,  1 },
        {  1,  1,  1,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
        {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  2,  0,  0,  0,  1,  1 },
        {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
        {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  1,  1 },
        {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1 },
        {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1 },
        {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  1,  1 },
        {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  0,  0, 64, 64,  0,  1,  1 },
        {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  1,  1 },
        {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  0, 64,  0,  0,  1,  1 },
        {  1,  1,  1,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  1,  1 },
        {  1,  1,  1,  1,  0, 64,  0,  0,  0, 64, 16,  0,  0,  0,  0,  0,  0,  0, 0, 0,64+16, 64,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
        {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
        {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
    }
};

const Mask mask_42_c64 =
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
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  0,  0,  1,  1 },
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






const Music music_00_c64 = { MUSIC_NULL,     "Silence",        (u8*) NULL,              Z80_DRIVER_XGM,  0 };
const Music music_01_c64 = { MUSIC_CHURCH,   "Area I Church",  (u8*) music_church_c64,  Z80_DRIVER_XGM, -1 };
const Music music_02_c64 = { MUSIC_CAVES,    "Area II Caves",  (u8*) music_caves_c64,   Z80_DRIVER_XGM, -1 };
const Music music_03_c64 = { MUSIC_HELL,     "Area III Hell",  (u8*) music_hell_c64,    Z80_DRIVER_XGM, -1 };
const Music music_04_c64 = { MUSIC_SATAN,    "Evil Fight",     (u8*) music_satan_c64,   Z80_DRIVER_XGM, -1 }; // music_satan_all
const Music music_05_c64 = { MUSIC_GAMEOVER, "Game Over",      (u8*) music_hangman_c64, Z80_DRIVER_XGM,  0 };
//const Music music_06_c64 = { MUSIC_START,    "Game Start",     (u8*) NULL,              Z80_DRIVER_XGM,  0 };
const Music music_07_c64 = { MUSIC_TITLE,    "Main Title",     (u8*) music_title_c64,   Z80_DRIVER_XGM,  0 };
const Music music_08_c64 = { MUSIC_WOODS,    "Manhunt wood",   (u8*) music_woods_c64,   Z80_DRIVER_XGM, -1 };
const Music music_09_c64 = { MUSIC_PROLOGUE, "Manhunt",        (u8*) music_manhunt_c64, Z80_DRIVER_XGM,  0 };
const Music music_10_c64 = { MUSIC_HOPE,     "Prayer of Hope", (u8*) music_hope_c64,    Z80_DRIVER_XGM,  0 };
const Music music_11_c64 = { MUSIC_HANGMAN,  "Hangman tree",   (u8*) music_hangman_c64, Z80_DRIVER_XGM,  0 };


const Sfx sfx_01_c64 = { SFX_DOOR,          "Door",           (u8*) sfx_door_all,          SOUND_PCM_CH2, sizeof(sfx_door_all),          14, Z80_DRIVER_XGM };
const Sfx sfx_02_c64 = { SFX_HIT,           "Hit",            (u8*) sfx_hit_all,           SOUND_PCM_CH2, sizeof(sfx_hit_all),           15, Z80_DRIVER_XGM };
const Sfx sfx_03_c64 = { SFX_ITEM,          "Item",           (u8*) sfx_item_all,          SOUND_PCM_CH4, sizeof(sfx_item_all),          20, Z80_DRIVER_XGM };
const Sfx sfx_04_c64 = { SFX_JUMP,          "Jump",           (u8*) sfx_jump_all,          SOUND_PCM_CH2, sizeof(sfx_jump_all),          10, Z80_DRIVER_XGM };
const Sfx sfx_05_c64 = { SFX_SHOT,          "Shot",           (u8*) sfx_shoot_all,         SOUND_PCM_CH4, sizeof(sfx_shoot_all),         14, Z80_DRIVER_XGM };
const Sfx sfx_06_c64 = { SFX_SLASH,         "Slash",          (u8*) sfx_slash_all,         SOUND_PCM_CH3, sizeof(sfx_slash_all),         14, Z80_DRIVER_XGM };
const Sfx sfx_07_c64 = { SFX_SWITCH,        "Switch",         (u8*) sfx_switch_all,        SOUND_PCM_CH3, sizeof(sfx_switch_all),        13, Z80_DRIVER_XGM };
//const Sfx sfx_08_c64 = { SFX_TREE,          "Tree",           (u8*) sfx_tree_all,          SOUND_PCM_CH4, sizeof(sfx_tree_all),        12, Z80_DRIVER_XGM };
const Sfx sfx_09_c64 = { SFX_LIGHTING,      "Lighting",       (u8*) sfx_lighting_all,      SOUND_PCM_CH2, sizeof(sfx_lighting_all),      12, Z80_DRIVER_XGM };
const Sfx sfx_10_c64 = { SFX_SPIT,          "Spit",           (u8*) sfx_spit_all,          SOUND_PCM_CH4, sizeof(sfx_spit_all),          14, Z80_DRIVER_XGM };
const Sfx sfx_11_c64 = { SFX_LAVABALL,      "Lava ball",      (u8*) sfx_lavaball_all,      SOUND_PCM_CH3, sizeof(sfx_lavaball_all),      13, Z80_DRIVER_XGM };
const Sfx sfx_12_c64 = { SFX_CHAIN,         "Bell",           (u8*) sfx_chain_all,         SOUND_PCM_CH3, sizeof(sfx_chain_all),         20, Z80_DRIVER_XGM };
const Sfx sfx_13_c64 = { SFX_CLOSED_DOOR,   "Closed door",    (u8*) sfx_close_door_all,    SOUND_PCM_CH2, sizeof(sfx_close_door_all),    13, Z80_DRIVER_XGM };
const Sfx sfx_14_c64 = { SFX_CHECKPOINT,    "Checkpoint",     (u8*) sfx_checkpoint_all,    SOUND_PCM_CH2, sizeof(sfx_checkpoint_all),    11, Z80_DRIVER_XGM };
const Sfx sfx_15_c64 = { SFX_DRAGONBREATHE, "Dragon breathe", (u8*) sfx_dragonbreathe_all, SOUND_PCM_CH4, sizeof(sfx_dragonbreathe_all), 14, Z80_DRIVER_XGM };
const Sfx sfx_16_c64 = { SFX_DRAGONFLAME,   "Dragon flame",   (u8*) sfx_dragonflame_all,   SOUND_PCM_CH4, sizeof(sfx_dragonflame_all),   14, Z80_DRIVER_XGM };



const Room room_00_c64 = { (Image*) &room_00_f_c64, NULL,                    (Objects*) &objects_null,   (Mask*) &mask_00_all, (Image*) &text_00_c64, (Music*) &music_00_c64,         room_null };
const Room room_01_c64 = { (Image*) &room_01_f_c64, NULL,                    (Objects*) &objects_01_c64, (Mask*) &mask_01_all, (Image*) &text_01_c64, (Music*) &music_08_c64,         room_null };
const Room room_02_c64 = { (Image*) &room_02_f_c64, NULL,                    (Objects*) &objects_02_c64, (Mask*) &mask_02_all, (Image*) &text_02_c64, (Music*) &music_02_c64, room_funct_02_all };
const Room room_03_c64 = { (Image*) &room_03_f_c64, NULL,                    (Objects*) &objects_03_c64, (Mask*) &mask_03_all, (Image*) &text_03_c64, (Music*) &music_02_c64, room_funct_03_all };
const Room room_04_c64 = { (Image*) &room_04_f_c64, NULL,                    (Objects*) &objects_04_c64, (Mask*) &mask_04_all, (Image*) &text_04_c64, (Music*) &music_02_c64, room_funct_04_all };

const Room room_10_c64 = { (Image*) &room_10_f_c64, (Image*) &room_10_b_c64, (Objects*) &objects_null,   (Mask*) &mask_10_all, (Image*) &text_10_c64, (Music*) &music_10_c64, room_funct_10_all };
const Room room_11_c64 = { (Image*) &room_11_f_c64, (Image*) &room_11_b_c64, (Objects*) &objects_11_c64, (Mask*) &mask_11_all, (Image*) &text_11_c64, (Music*) &music_08_c64, room_funct_11_all };
const Room room_12_c64 = { (Image*) &room_12_f_c64, NULL,                    (Objects*) &objects_12_c64, (Mask*) &mask_12_all, (Image*) &text_12_c64, (Music*) &music_02_c64, room_funct_12_all };
const Room room_13_c64 = { (Image*) &room_13_f_c64, NULL,                    (Objects*) &objects_13_c64, (Mask*) &mask_13_all, (Image*) &text_13_c64, (Music*) &music_02_c64, room_funct_13_all };
const Room room_14_c64 = { (Image*) &room_14_f_c64, NULL,                    (Objects*) &objects_14_c64, (Mask*) &mask_14_all, (Image*) &text_14_c64, (Music*) &music_03_c64, room_funct_14_all };

const Room room_20_c64 = { (Image*) &room_20_f_c64, (Image*) &room_20_b_c64, (Objects*) &objects_20_c64, (Mask*) &mask_20_all, (Image*) &text_20_c64, (Music*) &music_01_c64, room_funct_20_all };
const Room room_21_c64 = { (Image*) &room_21_f_c64, NULL,                    (Objects*) &objects_21_c64, (Mask*) &mask_21_c64, (Image*) &text_21_c64, (Music*) &music_01_c64, room_funct_21_all };
const Room room_22_c64 = { (Image*) &room_22_f_c64, NULL,                    (Objects*) &objects_22_c64, (Mask*) &mask_22_all, (Image*) &text_22_c64, (Music*) &music_01_c64,         room_null };
const Room room_23_c64 = { (Image*) &room_23_f_c64, NULL,                    (Objects*) &objects_23_c64, (Mask*) &mask_23_all, (Image*) &text_23_c64, (Music*) &music_01_c64, room_funct_23_all };
const Room room_24_c64 = { (Image*) &room_24_f_c64, NULL,                    (Objects*) &objects_24_c64, (Mask*) &mask_24_all, (Image*) &text_24_c64, (Music*) &music_03_c64, room_funct_24_all };

const Room room_30_c64 = { (Image*) &room_30_f_c64, (Image*) &room_30_b_c64, (Objects*) &objects_30_c64, (Mask*) &mask_30_all, (Image*) &text_30_c64, (Music*) &music_01_c64, room_funct_30_all };
const Room room_31_c64 = { (Image*) &room_31_f_c64, NULL,                    (Objects*) &objects_31_c64, (Mask*) &mask_31_c64, (Image*) &text_31_c64, (Music*) &music_01_c64, room_funct_31_all };
const Room room_32_c64 = { (Image*) &room_32_f_c64, NULL,                    (Objects*) &objects_32_c64, (Mask*) &mask_32_all, (Image*) &text_32_c64, (Music*) &music_01_c64,         room_null };
const Room room_33_c64 = { (Image*) &room_33_f_c64, NULL,                    (Objects*) &objects_33_c64, (Mask*) &mask_33_all, (Image*) &text_33_c64, (Music*) &music_04_c64, room_funct_33_all };
const Room room_34_c64 = { (Image*) &room_34_f_c64, NULL,                    (Objects*) &objects_34_c64, (Mask*) &mask_34_all, (Image*) &text_34_c64, (Music*) &music_03_c64, room_funct_34_all };

const Room room_40_c64 = { (Image*) &room_40_f_c64, (Image*) &room_40_b_c64, (Objects*) &objects_40_c64, (Mask*) &mask_40_all, (Image*) &text_40_c64, (Music*) &music_00_c64, room_funct_40_all };
const Room room_41_c64 = { (Image*) &room_41_f_c64, NULL,                    (Objects*) &objects_41_c64, (Mask*) &mask_41_c64, (Image*) &text_41_c64, (Music*) &music_11_c64, room_funct_41_all };
const Room room_42_c64 = { (Image*) &room_42_f_c64, NULL,                    (Objects*) &objects_42_c64, (Mask*) &mask_42_c64, (Image*) &text_42_c64, (Music*) &music_02_c64, room_funct_42_all };
const Room room_43_c64 = { (Image*) &room_43_f_c64, NULL,                    (Objects*) &objects_43_c64, (Mask*) &mask_43_all, (Image*) &text_43_c64, (Music*) &music_02_c64, room_funct_43_all };
const Room room_44_c64 = { (Image*) &room_44_f_c64, NULL,                    (Objects*) &objects_44_c64, (Mask*) &mask_44_all, (Image*) &text_44_c64, (Music*) &music_04_c64, room_funct_44_all };



