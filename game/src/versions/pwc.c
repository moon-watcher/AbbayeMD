#include "../../inc/include.h"

#include "../../res/pcw/sprites.h"
#include "../../res/pcw/texts.h"
#include "../../res/pcw/texts.h"
#include "../../res/pcw/foreground.h"
#include "../../res/pcw/background.h"
#include "../../inc/versions/all.h"


const Entity entity_01_pcw = {  1, "Jean stays",            0, (SpriteDefinition*) &jean_2x3_pcw,     PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_02_pcw = {  2, "Jean walks",            1, (SpriteDefinition*) &jean_2x3_pcw,     PAL3, ENTITY_PLAYER,     FIX32(0.65),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_03_pcw = {  3, "Jean jumps",            2, (SpriteDefinition*) &jean_2x3_pcw,     PAL3, ENTITY_PLAYER,     FIX32(0.65),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_04_pcw = {  4, "Jean burns",            3, (SpriteDefinition*) &jean_2x3_pcw,     PAL3, ENTITY_NULL,                 0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  1,  5 } };
const Entity entity_05_pcw = {  5, "Jean lie down",         0, (SpriteDefinition*) &jean_3x2_pcw,     PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  6,  0, 10 } };
const Entity entity_06_pcw = {  6, "Jean sneaks",           1, (SpriteDefinition*) &jean_3x2_pcw,     PAL3, ENTITY_PLAYER,      FIX32(0.2),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  6,  0, 10 } };
const Entity entity_07_pcw = {  7, "Flying skull",          4, (SpriteDefinition*) &enemies_2x2_pcw,  PAL2, ENTITY_ENEMY,       FIX32(0.8),           0,           0, 0, 0, 0, NULL, mcb_udlr,        0, {  4,  5,  3,  4 } };
const Entity entity_08_pcw = {  8, "Checkpoint",            4, (SpriteDefinition*) &jean_2x3_pcw,     PAL3, ENTITY_CHECKPOINT,           0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_09_pcw = {  9, "Checkpoint active",     5, (SpriteDefinition*) &jean_2x3_pcw,     PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_10_pcw = { 10, "Yellow hint",          12, (SpriteDefinition*) &objects_2x2_pcw,  PAL3, ENTITY_HINT,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_11_pcw = { 11, "Heart",                11, (SpriteDefinition*) &objects_2x2_pcw,  PAL3, ENTITY_HEART,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_12_pcw = { 12, "Cross",                 0, (SpriteDefinition*) &objects_2x2_pcw,  PAL3, ENTITY_CROSS,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_13_pcw = { 13, "Inverted cross",        1, (SpriteDefinition*) &objects_2x2_pcw,  PAL3, ENTITY_INV_CROSS,            0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_14_pcw = { 14, "Crusader",              1, (SpriteDefinition*) &enemies_2x3_pcw,  PAL2, ENTITY_ENEMY,      FIX32(0.60),           0, FIX32(0.20), 0, 1, 0, NULL, mcb_crusader,    0, {  7,  5,  0,  5 } };
const Entity entity_15_pcw = { 15, "Water",                 6, (SpriteDefinition*) &enemies_2x1_pcw,  PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_16_pcw = { 16, "Fire",                 11, (SpriteDefinition*) &enemies_2x2_pcw,  PAL2, ENTITY_NULL,              zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_17_pcw = { 17, "Rat",                   1, (SpriteDefinition*) &enemies_2x2_pcw,  PAL2, ENTITY_ENEMY,      FIX32(0.60),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  0,  0,  0 } };
const Entity entity_18_pcw = { 18, "Green spider",          2, (SpriteDefinition*) &enemies_2x2_pcw,  PAL2, ENTITY_ENEMY,             zero, FIX32(0.75),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
const Entity entity_19_pcw = { 19, "Brown spider",          3, (SpriteDefinition*) &enemies_2x2_pcw,  PAL2, ENTITY_ENEMY,             zero, FIX32(1.00),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
const Entity entity_20_pcw = { 20, "Bell",                 14, (SpriteDefinition*) &objects_2x2_pcw,  PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_21_pcw = { 21, "Snail",                 4, (SpriteDefinition*) &enemies_2x1_pcw,  PAL2, ENTITY_ENEMY,      FIX32(0.30),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  2,  0,  2 } };
const Entity entity_22_pcw = { 22, "Switch (off)",          2, (SpriteDefinition*) &objects_2x2_pcw,  PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_23_pcw = { 23, "Swordsman's skeleton",  2, (SpriteDefinition*) &enemies_2x3_pcw,  PAL2, ENTITY_ENEMY,      FIX32(0.60),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  6,  5,  0,  5 } };
const Entity entity_24_pcw = { 24, "Skull wasp",            5, (SpriteDefinition*) &enemies_2x2_pcw,  PAL2, ENTITY_ENEMY,      FIX32(0.50), FIX32(0.50),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
const Entity entity_25_pcw = { 25, "Human wasp",           10, (SpriteDefinition*) &enemies_2x2_pcw,  PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
const Entity entity_26_pcw = { 26, "El Coco",               7, (SpriteDefinition*) &enemies_2x2_pcw,  PAL2, ENTITY_ENEMY,      FIX32(0.45), FIX32(0.45),        zero, 0, 1, 0, NULL, mcb_coco,        0, {  2,  2,  2,  2 } };
const Entity entity_27_pcw = { 27, "Spitting plant",        0, (SpriteDefinition*) &enemies_2x2_pcw,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
const Entity entity_28_pcw = { 28, "Spit",                  2, (SpriteDefinition*) &enemies_2x1_pcw,  PAL2, ENTITY_ENEMY,      FIX32(0.75), FIX32(2.20), FIX32(0.10), 0, 0, 0, NULL, mcb_bullet,      0, {  1,  5,  1,  5 } };
const Entity entity_29_pcw = { 29, "Fireball",              6, (SpriteDefinition*) &enemies_2x2_pcw,  PAL2, ENTITY_ENEMY,                0, FIX32(1.50),           0, 0, 0, 0, NULL, mcb_fireball,    0, {  2,  2,  2,  2 } };
const Entity entity_30_pcw = { 30, "Evil bird",             0, (SpriteDefinition*) &enemies_3x2_pcw,  PAL2, ENTITY_ENEMY,       FIX32(1.0),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  2,  0,  1,  1 } };
const Entity entity_31_pcw = { 31, "Spikes",                8, (SpriteDefinition*) &enemies_2x1_pcw,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  2,  0,  0,  0 } };
const Entity entity_32_pcw = { 32, "Demon",                 3, (SpriteDefinition*) &enemies_2x3_pcw,  PAL2, ENTITY_ENEMY,      FIX32(0.75),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
const Entity entity_33_pcw = { 33, "Archer skeleton",       0, (SpriteDefinition*) &enemies_3x3_pcw,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  6,  6,  0,  6 } };
const Entity entity_34_pcw = { 34, "Arrow",                 5, (SpriteDefinition*) &enemies_2x1_pcw,  PAL2, ENTITY_ENEMY,      FIX32(2.50),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  2,  3,  2,  3 } };
const Entity entity_35_pcw = { 35, "Door",                  0, (SpriteDefinition*) &objects_1x4_pcw,  PAL3, ENTITY_DOOR,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_36_pcw = { 36, "Stone hatch",           0, (SpriteDefinition*) &hatch_2x2_pcw,    PAL1, ENTITY_HATCH,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_37_pcw = { 37, "Hangman",               7, (SpriteDefinition*) &jean_2x3_pcw,     PAL3, ENTITY_ENEMY,                0, FIX32(0.60),           0, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  1,  2,  0,  2 } };
const Entity entity_38_pcw = { 38, "Rope",                  6, (SpriteDefinition*) &jean_2x3_pcw,     PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_39_pcw = { 39, "Death",                 0, (SpriteDefinition*) &death_4x4_pcw,    PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  0,  2,  0 } };
const Entity entity_40_pcw = { 40, "Death throw",           1, (SpriteDefinition*) &death_4x4_pcw,    PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  0,  4,  0 } };
const Entity entity_41_pcw = { 41, "Scythe",                0, (SpriteDefinition*) &death_2x2_pcw,    PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),           0, 0, 0, 0, NULL, mcb_scythe,      0, {  1,  1,  1,  1 } };
const Entity entity_42_pcw = { 42, "Wheel of faith",        5, (SpriteDefinition*) &objects_2x2_pcw,  PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
const Entity entity_43_pcw = { 43, "Wheel of faith",        6, (SpriteDefinition*) &objects_2x2_pcw,  PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
const Entity entity_44_pcw = { 44, "Bell (on)",            15, (SpriteDefinition*) &objects_2x2_pcw,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_45_pcw = { 45, "Switch (on)",           3, (SpriteDefinition*) &objects_2x2_pcw,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_46_pcw = { 46, "Passage",               8, (SpriteDefinition*) &jean_2x3_pcw,     PAL3, ENTITY_PASSAGE,              0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, { 16,  7,  0,  7 } };
const Entity entity_47_pcw = { 47, "Dragon head",           0, (SpriteDefinition*) &dragon_4x5_pcw,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_48_pcw = { 48, "Dragon body",           0, (SpriteDefinition*) &dragon_12x5_pcw,  PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_49_pcw = { 49, "Dragon fire",           0, (SpriteDefinition*) &dragon_3x6_pcw,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  0,  2,  0,  2 } };
const Entity entity_50_pcw = { 50, "Running fire",          0, (SpriteDefinition*) &dragon_2x2_pcw,   PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  0,  0,  0 } };
const Entity entity_51_pcw = { 51, "Gargoyle",              8, (SpriteDefinition*) &enemies_2x2_pcw,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
const Entity entity_52_pcw = { 52, "Gargoyle spit",         1, (SpriteDefinition*) &enemies_2x1_pcw,  PAL2, ENTITY_ENEMY,      FIX32(3.00),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  1,  1,  2,  1 } };
const Entity entity_53_pcw = { 53, "Evil cursader",         0, (SpriteDefinition*) &enemies_2x3_pcw,  PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
const Entity entity_54_pcw = { 54, "Toxic drop",            3, (SpriteDefinition*) &enemies_2x1_pcw,  PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.09), 0, 0, 0, NULL, mcb_drop,        0, {  0,  3,  0,  3 } };
const Entity entity_55_pcw = { 55, "Fish",                  9, (SpriteDefinition*) &enemies_2x2_pcw,  PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.10), 0, 0, 1, NULL, mcb_null,        0, {  0,  1,  0,  1 } };
const Entity entity_56_pcw = { 56, "Splash",                7, (SpriteDefinition*) &enemies_2x1_pcw,  PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_57_pcw = { 57, "Satan",                 0, (SpriteDefinition*) &satan_4x6_pcw,    PAL2, ENTITY_ENEMY,                0, FIX32(0.75),           0, 0, 0, 0, NULL, mcb_udlr,        0, {  } };
const Entity entity_58_pcw = { 58, "Satan bullet",          0, (SpriteDefinition*) &enemies_2x1_pcw,  PAL2, ENTITY_ENEMY,      FIX32(1.00),           0,           0, 0, 0, 0, NULL, mcb_bullet,      0, {  1,  5,  1,  5 } };
const Entity entity_59_pcw = { 59, "Grial",                 4, (SpriteDefinition*) &objects_2x2_pcw,  PAL3, ENTITY_GRIAL,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_60_pcw = { 60, "Red hint",             13, (SpriteDefinition*) &objects_2x2_pcw,  PAL3, ENTITY_HINT,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_61_pcw = { 61, "Catched cross",         0, (SpriteDefinition*) &objects_1x1_pcw,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_62_pcw = { 62, "Bonfire",               0, (SpriteDefinition*) &bonfire_6x8_pcw,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_63_pcw = { 63, "Bell ringing",          0, (SpriteDefinition*) &objects_4x2_pcw,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };


const Entity entity_pcw_01 = { 101, "Black Evil bird",      1, (SpriteDefinition*) &enemies_3x2_pcw,   PAL2, ENTITY_NULL,        FIX32(0.5),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  2,  8,  8,  1 }  };
const Entity entity_pcw_02 = { 102, "Lighting",             0, (SpriteDefinition*) &lighting_4x12_pcw, PAL3, ENTITY_NULL,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_pcw_03 = { 103, "Evil rosette",         0, (SpriteDefinition*) &rosette_6x6_pcw,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };





////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #0 pcw
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_20_pcw = // Tower of the Bell // OK // pcw: Hacer que la campana se mueva al tocarla
{
      {
            { (Entity*) &entity_20_pcw,  40,   8,  0,  0 }, // Bell
            { (Entity*) &entity_17_pcw,  64, 144, +1,  0 }, // Rat
            { (Entity*) &entity_17_pcw, 216, 144, -1,  0 }, // Rat
            { (Entity*) &entity_11_pcw,  96,  56,  0,  0 }, // Heart
	}
};


const Objects objects_30_pcw = // Wine supplies // OK
{
      {
            { (Entity*) &entity_18_pcw,  36, 121,  0, +1 }, // Green spider
            { (Entity*) &entity_19_pcw,  60, 131,  0, -1 }, // Brown spider
            { (Entity*) &entity_18_pcw,  76, 100,  0, +1 }, // Green spider
            { (Entity*) &entity_10_pcw, 144, 128,  0,  0 }, // Brown spider
            { (Entity*) &entity_19_pcw, 196, 130,  0, -1,  0, FIX32(0.5) }, // Brown spider
            { (Entity*) &entity_12_pcw, 220, 140,  0,  0 }, // Cross
	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #1 pcw
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_01_pcw = // Escape !!! // OK
{
      {
            { (Entity*) &entity_14_pcw,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pcw,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pcw,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pcw, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pcw, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pcw, -150, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_pcw, -170, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_pcw, -190, 136, +1,  0 }, // Crusader
	}
};


const Objects objects_11_pcw = // Death is close !!! // OK
{
      {
            { (Entity*) &entity_14_pcw,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pcw,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pcw,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pcw, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pcw, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pcw, -150, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_pcw, -170, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_pcw, -190, 136, +1,  0 }, // Crusader

            { (Entity*) &entity_pcw_02, -100,   0,  0,  0 }, // Lighting
      }
};


const Objects objects_21_pcw = // Abandone church // OK
{
      {
            { (Entity*) &entity_35_pcw,   0, 112 }, // Door
            { (Entity*) &entity_pcw_01, 130, 90, -1 }, // Black Evil bird
      }
};


const Objects objects_31_pcw = // The Altar // OK
{
      {
            { (Entity*) &entity_35_pcw, 248, 112,  0,  0,  0,  0,  1 }, // Door
            { (Entity*) &entity_36_pcw, 208, 160,  0,  0 }, // Stone hatch
            { (Entity*) &entity_07_pcw, 144,  44, +1,  0 }, // Flying skull
            { (Entity*) &entity_07_pcw,  88,  84, +1,  0 }, // Flying skull
            { (Entity*) &entity_10_pcw, 212, 140,  0,  0 }, // Yellow hint
            { (Entity*) &entity_08_pcw,  56, 136,  0,  0 }, // Checkpoint
	}
};


const Objects objects_41_pcw = // Hangman Tree // OK
{
      {
            { (Entity*) &entity_37_pcw, 152, 104,  0, +1 }, // Hangman
            { (Entity*) &entity_38_pcw, 152,  88,  0,  0 }, // Rope
            { (Entity*) &entity_38_pcw, 152, 112,  0,  0 }, // Rope

            { (Entity*) &entity_37_pcw, 176,  76,  0, +1 }, // Hangman
            { (Entity*) &entity_38_pcw, 176,  64,  0,  0 }, // Rope
            { (Entity*) &entity_38_pcw, 176,  88,  0,  0 }, // Rope
            { (Entity*) &entity_38_pcw, 176, 102,  0,  0 }, // Rope

            { (Entity*) &entity_37_pcw,  72,  88,  0, +1 }, // Hangman
            { (Entity*) &entity_38_pcw,  72,  72,  0,  0 }, // Pope
            { (Entity*) &entity_38_pcw,  72,  96,  0,  0 }, // Pope
            { (Entity*) &entity_38_pcw,  72, 116,  0,  0 }, // Pope

            { (Entity*) &entity_37_pcw,  48,  72,  0, +1 }, // Hangman
            { (Entity*) &entity_38_pcw,  48,  56,  0,  0 }, // Rope
            { (Entity*) &entity_38_pcw,  48,  80,  0,  0 }, // Rope
            { (Entity*) &entity_38_pcw,  48, 104,  0,  0 }, // Pope

            { (Entity*) &entity_21_pcw, 152,  48, -1,  0 }, // Snail
            { (Entity*) &entity_21_pcw, 136, 152, -1,  0 }, // Snail
            { (Entity*) &entity_22_pcw, 216, 144,  0,  0 }, // Switch  // 17
            { (Entity*) &entity_13_pcw,  48,  32,  0,  0 }, // Inverted cross


	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #2 pcw
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_02_pcw = // Pestilent beast // OK
{
      {
            { (Entity*) &entity_47_pcw, 120,  10,  0,  0 }, // Dragon head #0
            { (Entity*) &entity_48_pcw, 112,   8,  0,  0 }, // Dragon body #1
            { (Entity*) &entity_49_pcw, 125,  51,  0,  0 }, // Dragon fire #2

            { (Entity*) &entity_50_pcw, -40, -40,  0, +1 }, // Runnig fire #3
            { (Entity*) &entity_50_pcw, -40, -40,  0, -1 }, // Runnig fire #4
            { (Entity*) &entity_50_pcw, -40, -40,  0, +1 }, // Runnig fire #5
            { (Entity*) &entity_50_pcw, -40, -40,  0, -1 }, // Runnig fire #6
            { (Entity*) &entity_50_pcw, -40, -40,  0, +1 }, // Runnig fire #7
            { (Entity*) &entity_50_pcw, -40, -40,  0, -1 }, // Runnig fire #8

            { (Entity*) &entity_22_pcw,  56,  32,  0,  0 }, // Switch      #9
            { (Entity*) &entity_11_pcw,  80, 144,  0,  0 }, // Heart
            { (Entity*) &entity_12_pcw, 204,  30,  0,  0 }, // Cross

            { (Entity*) &entity_46_pcw, 184, 136,  0,  0 }, // Passage
      }
};


const Objects objects_12_pcw = // Cave of illusions // OK // TODO: Mejorar el movimiento del coco
{
      {
            { (Entity*) &entity_11_pcw,  16,  32,  0,  0 }, // Heart
            { (Entity*) &entity_26_pcw, 128,  72,  0,  0 }, // El Coco
            { (Entity*) &entity_08_pcw, 112, 136,  0,  0 }, // Checkpoint
      }
};


const Objects objects_22_pcw = // Plagued ruins // OK
{
      {
            { (Entity*) &entity_10_pcw,  80, 142,  0,  0 }, // Yellow hint
            { (Entity*) &entity_11_pcw, 128,  48,  0,  0 }, // Heart
            { (Entity*) &entity_24_pcw,  48,  24,  0, -1 }, // Skull wasp
            { (Entity*) &entity_24_pcw, 128, 128,  0, -1 }, // Skull wasp

            { (Entity*) &entity_25_pcw, 160,  40,  0, -1 }, // Human wasp
            { (Entity*) &entity_25_pcw,  32, 112,  0, -1 }, // Human wasp
            { (Entity*) &entity_25_pcw, 176, 128,  0, -1 }, // Human wasp
            { (Entity*) &entity_08_pcw,  64,  56,  0,  0 }, // Checkpoint
	}
};


const Objects objects_32_pcw = // Catacombs // OK
{
      {
            { (Entity*) &entity_23_pcw,  80,  88, -1,  0 }, // Swordsman's skeleton
            { (Entity*) &entity_23_pcw, 128, 136, -1,  0 }, // Swordsman's skeleton
            { (Entity*) &entity_12_pcw, 144, 144,  0,  0 }, // Cross
	}
};


const Objects objects_42_pcw = // Hidden garden // OK
{
      {
            { (Entity*) &entity_12_pcw,  72,  32,   0,  0 }, // Cross          - #01
            { (Entity*) &entity_10_pcw, 152,  78,   0,  0 }, // Yellow hint    - #02
            { (Entity*) &entity_21_pcw, 168, 152,  -1,  0 }, // Snail          - #03
            { (Entity*) &entity_18_pcw,  48,  24,   0, +1,  0, FIX32(0.60) }, // Green spider- #04

            { (Entity*) &entity_27_pcw, 224,  48,   0,  0 }, // Spitting plant // 05
            { (Entity*) &entity_28_pcw,   0, -60, -60,  0 }, // Spit           // 06
            { (Entity*) &entity_28_pcw,   0, -60, -60,  0 }, // Spit           // 07

            { (Entity*) &entity_27_pcw, 136,  32,   0,  0 }, // Spitting plant // 08
            { (Entity*) &entity_28_pcw,   0, -60, -60,  0 }, // Spit           // 09
            { (Entity*) &entity_28_pcw,   0, -60, -60,  0 }, // Spit           // 10

            { (Entity*) &entity_27_pcw, 112, 112,   0,  0 }, // Spitting plant // 11
            { (Entity*) &entity_28_pcw,   0, -60, -60,  0 }, // Spit           // 12
            { (Entity*) &entity_28_pcw,   0, -60, -60,  0 }, // Spit           // 13

            { (Entity*) &entity_08_pcw,  64, 136,   0,  0 }, // Checkpoint     - #00

	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #3 pcw
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_03_pcw = // Gloomy tunnels // OK
{
      {
            { (Entity*) &entity_54_pcw,  32,  88,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_pcw,  88,  32,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_pcw,  88,  88,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_pcw, 208,  32,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_pcw, 192,  32,  0,  0 }, // Toxic drop

            { (Entity*) &entity_11_pcw,  24, 112,  0,  0 }, // Heart
            { (Entity*) &entity_53_pcw,  80,  56, -1,  0 }, // Evil crusader
            { (Entity*) &entity_53_pcw, 192, 136, -1,  0 }, // Evil crusader
            { (Entity*) &entity_13_pcw, 224,  64,  0,  0 }, // Inverted cross

            { (Entity*) &entity_08_pcw, 168,  56,  0,  0 }, // Checkpoint
      }
};


const Objects objects_13_pcw = // Lake of despair // OK
{
      {
            { (Entity*) &entity_15_pcw,  48, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pcw,  64, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pcw,  80, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pcw,  96, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pcw, 112, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pcw, 128, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pcw, 144, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pcw, 160, 168,  0,  0 }, // Water

            { (Entity*) &entity_56_pcw,  56, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_pcw, 116, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_pcw, 156, 160,  0,  0 }, // Splash

            { (Entity*) &entity_55_pcw,  56, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_pcw, 116, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_pcw, 156, 168,  0,  0 }, // Fish

            { (Entity*) &entity_12_pcw,  16,  48,  0,  0 }, // Cross
            { (Entity*) &entity_10_pcw, 176,  40,  0,  0 }, // Yellow hint
            { (Entity*) &entity_18_pcw, 144,  24,  0, +1, 0, FIX32(0.60)}, // Green spider
	}
};


const Objects objects_23_pcw = // The wheel of Faith // OK
{
      {
            { (Entity*) &entity_33_pcw,  12,  24,  0,  0 }, // Archer skeleton
            { (Entity*) &entity_33_pcw, 221,  72, -1,  0 }, // Archer skeleton
            { (Entity*) &entity_33_pcw, 116, 104, -1,  0 }, // Archer skeleton
            { (Entity*) &entity_34_pcw, -20, -20,  0,  0 }, // Arrow
            { (Entity*) &entity_34_pcw, -20, -20,  0,  0 }, // Arrow
            { (Entity*) &entity_34_pcw, -20, -20,  0,  0 }, // Arrow

            { (Entity*) &entity_42_pcw, 120,  16,  0,  0 }, // Wheel of faith

            { (Entity*) &entity_13_pcw,  24,  80,  0,  0 }, // Inverted cross
            { (Entity*) &entity_12_pcw, 216, 144,  0,  0 }, // Cross
            { (Entity*) &entity_11_pcw, 168,  80,  0,  0 }, // Heart
      }
};


const Objects objects_33_pcw = // Banquet of Death // OK :)
{
      {
            { (Entity*) &entity_12_pcw,  24,  40,  0,  0 }, // Cross
            { (Entity*) &entity_11_pcw, 120,  88,  0,  0 }, // Heart
            { (Entity*) &entity_39_pcw,  16,   8, -1,  0 }, // Death
            { (Entity*) &entity_41_pcw, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_pcw, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_pcw, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_pcw, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_pcw, -16, -16,  0, +1 }, // Scythe
      }
};


const Objects objects_43_pcw = // Underground river // OK
{
      {
            { (Entity*) &entity_35_pcw,   0, 128,  0,  0 }, // Door

            { (Entity*) &entity_15_pcw, 112, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pcw, 128, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pcw, 144, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pcw, 160, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pcw, 176, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pcw, 192, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pcw, 208, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_pcw, 224, 168,  0,  0 }, // Water

            { (Entity*) &entity_46_pcw, 168, 120,  0,  0 }, // Passage
            { (Entity*) &entity_18_pcw,  88,  48,  0, +1 }, // Green spider
            { (Entity*) &entity_12_pcw,  24,  16,  0,  0 }, // Cross
            { (Entity*) &entity_11_pcw, 200,  64,  0,  0 }, // Heart

            { (Entity*) &entity_54_pcw,  48,   8,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_pcw, 128,   8,  0,  0 }, // Toxic drop

            { (Entity*) &entity_56_pcw, 116, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_pcw, 192, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_pcw, 144, 160,  0,  0 }, // Splash

            { (Entity*) &entity_55_pcw, 116, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_pcw, 192, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_pcw, 144, 168,  0,  0 }, // Fish

            { (Entity*) &entity_08_pcw,  64,  88,  0,  0 }, // Checkpoint
      }

};





////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #4 pcw
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_04_pcw = // Unexpected gate // OK
{
      {
            { (Entity*) &entity_51_pcw, 216,  24,  0,  0,  0,  0, -1 }, // Gargoyle
            { (Entity*) &entity_52_pcw, -40, -40,  0,  0             }, // Gargoyle spit

            { (Entity*) &entity_30_pcw,  36,  88, +1,  0, FIX32(0.60) }, // Evil bird

            { (Entity*) &entity_35_pcw, 248, 112,  0,  0,  0,  0, -1 }, // Door // 03

            { (Entity*) &entity_22_pcw, 192,  48,  0,  0 }, // Switch
            { (Entity*) &entity_53_pcw, 136, 136, -1,  0 }  // Evil crusader
	}
};


const Objects objects_14_pcw = // Evil church // OK
{
      {
            { (Entity*) &entity_10_pcw,  24,  46,  0,  0 }, // Yellow hint

            { (Entity*) &entity_16_pcw, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_32_pcw,  16, 136, -1,  0, FIX32(0.60) }, // Demon
            { (Entity*) &entity_32_pcw,  88,  40, -1,  0, FIX32(0.60) }, // Demon
            { (Entity*) &entity_32_pcw, 128, 136, -1,  0, FIX32(0.60) }, // Demon

            { (Entity*) &entity_33_pcw, 190, 120,  0,  0 }, // Archer skeleton
            { (Entity*) &entity_34_pcw, -60, -60, -1,  0 }, // Arrow

            { (Entity*) &entity_08_pcw, 152,  40,  0,  0 }, // Checkpoint
	}
};


const Objects objects_24_pcw = // Tortured souls // OK
{
      {
            { (Entity*) &entity_51_pcw, 224, 104,  0,  0,  0,  0, -1 }, // Gargoyle
            { (Entity*) &entity_52_pcw, -40, -40,  0,  0             }, // Gargoyle spit

            { (Entity*) &entity_13_pcw, 220, 142,  0,  0 }, // Inverted cross

            { (Entity*) &entity_31_pcw, 192, 152 }, // Spikes

            { (Entity*) &entity_23_pcw,  60,   8, -1,  0, FIX32(0.70),  0, 0, 1 }, // Swordsman's skeleton
            { (Entity*) &entity_23_pcw, 140,  64, -1,  0, FIX32(0.60),  0, 0, 0 }, // Swordsman's skeleton
            { (Entity*) &entity_32_pcw, 208,  64, -1,  0,           0,  0, 0, 0 }, // Demon

            { (Entity*) &entity_16_pcw,  80, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pcw,  96, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pcw, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pcw, 160, 160,  0,  0 }, // Fire

            { (Entity*) &entity_29_pcw,  80, 136,  0, +1,  0, FIX32(1.75) }, // Fireball
            { (Entity*) &entity_29_pcw,  96, 152,  0, +1,  0, FIX32(1.25) }, // Fireball
            { (Entity*) &entity_29_pcw, 152,  96,  0, +1,  0, FIX32(1.25) }, // Fireball
	}
};


const Objects objects_34_pcw = // Ashes to ashes // OK
{
      {
            { (Entity*) &entity_16_pcw,  16, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pcw,  32, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pcw,  48, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pcw,  80, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pcw,  96, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pcw, 112, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pcw, 160, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pcw, 176, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_pcw, 192, 160,  0,  0 }, // Fire

            { (Entity*) &entity_29_pcw,  48,  24,  0, +1 }, // Fireball
            { (Entity*) &entity_29_pcw,  80,  88,  0, +1 }, // Fireball
            { (Entity*) &entity_29_pcw, 160,  72,  0, +1 }, // Fireball

            { (Entity*) &entity_11_pcw,  64, 144,  0,  0 }, // Heart
            { (Entity*) &entity_11_pcw, 184,  56,  0,  0 }, // Heart
            { (Entity*) &entity_30_pcw, 100,  32, +1,  0              }, // Evil bird
            { (Entity*) &entity_30_pcw, 212, 104, +1,  0, FIX32(0.75) }, // Evil bird
            { (Entity*) &entity_23_pcw, 160,   8, -1,  0, FIX32(0.75),  0, 0, 1 }, // Swordsman's skeleton

            { (Entity*) &entity_08_pcw, 136, 136,  0,  0 }, // Checkpoint
	}
};



const Objects objects_44_pcw = // Satan!!! // TODO
{
      {
            { (Entity*) &entity_35_pcw,   0, 128 }, // Door

            { (Entity*) &entity_14_pcw,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pcw,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pcw,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pcw, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pcw, -130, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_pcw, -150, 136, +1,  0 }, // Crusader

            { (Entity*) &entity_59_pcw, 120,  16,  0,  0 }, // Grial
            { (Entity*) &entity_60_pcw, 222, 111,  0,  0 }, // Red hint

            { (Entity*) &entity_58_pcw, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pcw, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pcw, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pcw, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pcw, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pcw, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pcw, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pcw, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pcw, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pcw, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pcw, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_pcw, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_57_pcw, 196,  80,  0, +1 }, // Satan

            { (Entity*) &entity_61_pcw, 128, 190,  0,  0 }, // Catched cross // puts out of the screen

            { (Entity*) &entity_pcw_03, 104,  48,  0,  0 }, // Evil roseta
	}
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Other pcw
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////




const Objects objects_prologue_pcw =
{
      {
            { (Entity*) &entity_02_pcw,  -16, 118, +1,  0  }, // Jean walks

            { (Entity*) &entity_14_pcw,  -70, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_pcw,  -95, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_pcw, -120, 116, +1,  0, FIX32(0.50) }, // Crusader
      }
};

const Objects objects_burnhim_pcw =
{
      {
            { (Entity*) &entity_14_pcw,   48, 136 }, // Crusader
            { (Entity*) &entity_14_pcw,   72, 136 }, // Crusader
            { (Entity*) &entity_14_pcw,  152, 136 }, // Crusader
            { (Entity*) &entity_14_pcw,  176, 136 }, // Crusader

            { (Entity*) &entity_50_pcw,   96, 128 }, // Fire
            { (Entity*) &entity_50_pcw,  112, 128 }, // Fire
            { (Entity*) &entity_50_pcw,  128, 128 }, // Fire

            { (Entity*) &entity_03_pcw,  112, 118 }, // Jean stays
            { (Entity*) &entity_62_pcw,   96,  96 }, // Bonfire
	}
};

const Objects objects_info_pcw =
{
      {
            { (Entity*) &entity_02_pcw,  12,  20,  0,  0,  0,  0, -1, 0 }, // Jean walks
            { (Entity*) &entity_22_pcw,  12, 192,  0,  0,  0,  0, -1, 0 }, // Switch
            { (Entity*) &entity_20_pcw, 208, 188 }, // Bell
            { (Entity*) &entity_59_pcw, 192, 164 }, // Grial
            { (Entity*) &entity_42_pcw, 208,  28 }, // Wheel of faith
            { (Entity*) &entity_10_pcw, 110,  52 }, // Yellow hint
            { (Entity*) &entity_11_pcw,  32,  76 }, // Heart
            { (Entity*) &entity_12_pcw,   8, 100 }, // Cross
            { (Entity*) &entity_08_pcw, 150,  84 }, // Checkpoint
            { (Entity*) &entity_46_pcw,  36, 144 }, // Passage
            { (Entity*) &entity_39_pcw,  98, 128,  0,  0,  0,  0, -1, 0 }, // Death

      }
}
;




const Mask mask_21_pcw =
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



const Mask mask_42_pcw =
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



const Room room_00_pcw = { (Image*) &room_00_f_pcw, NULL, (Objects*) &objects_null,   (Mask*) &mask_00_all, (Image*) &text_00_pcw, (Music*) &music_00_all,         room_null };
const Room room_01_pcw = { (Image*) &room_01_f_pcw, NULL, (Objects*) &objects_01_pcw, (Mask*) &mask_01_all, (Image*) &text_01_pcw, (Music*) &music_08_all,         room_null };
const Room room_02_pcw = { (Image*) &room_02_f_pcw, NULL, (Objects*) &objects_02_pcw, (Mask*) &mask_02_all, (Image*) &text_02_pcw, (Music*) &music_02_all, room_funct_02_all };
const Room room_03_pcw = { (Image*) &room_03_f_pcw, NULL, (Objects*) &objects_03_pcw, (Mask*) &mask_03_all, (Image*) &text_03_pcw, (Music*) &music_02_all, room_funct_03_all };
const Room room_04_pcw = { (Image*) &room_04_f_pcw, NULL, (Objects*) &objects_04_pcw, (Mask*) &mask_04_all, (Image*) &text_04_pcw, (Music*) &music_02_all, room_funct_04_all };

const Room room_10_pcw = { (Image*) &room_10_f_pcw, (Image*) &room_10_b_pcw, (Objects*) &objects_null,   (Mask*) &mask_10_all, (Image*) &text_10_pcw, (Music*) &music_10_all, room_funct_10_all };
const Room room_11_pcw = { (Image*) &room_11_f_pcw, (Image*) &room_11_b_pcw, (Objects*) &objects_11_pcw, (Mask*) &mask_11_all, (Image*) &text_11_pcw, (Music*) &music_08_all, room_funct_11_all };
const Room room_12_pcw = { (Image*) &room_12_f_pcw, NULL, (Objects*) &objects_12_pcw, (Mask*) &mask_12_all, (Image*) &text_12_pcw, (Music*) &music_02_all, room_funct_12_all };
const Room room_13_pcw = { (Image*) &room_13_f_pcw, NULL, (Objects*) &objects_13_pcw, (Mask*) &mask_13_all, (Image*) &text_13_pcw, (Music*) &music_02_all, room_funct_13_all };
const Room room_14_pcw = { (Image*) &room_14_f_pcw, NULL, (Objects*) &objects_14_pcw, (Mask*) &mask_14_all, (Image*) &text_14_pcw, (Music*) &music_03_all, room_funct_14_all };

const Room room_20_pcw = { (Image*) &room_20_f_pcw, (Image*) &room_20_b_pcw, (Objects*) &objects_20_pcw, (Mask*) &mask_20_all, (Image*) &text_20_pcw, (Music*) &music_01_all, room_funct_20_all };
const Room room_21_pcw = { (Image*) &room_21_f_pcw, NULL, (Objects*) &objects_21_pcw, (Mask*) &mask_21_pcw, (Image*) &text_21_pcw, (Music*) &music_01_all, room_funct_21_all };
const Room room_22_pcw = { (Image*) &room_22_f_pcw, NULL, (Objects*) &objects_22_pcw, (Mask*) &mask_22_all, (Image*) &text_22_pcw, (Music*) &music_01_all,         room_null };
const Room room_23_pcw = { (Image*) &room_23_f_pcw, NULL, (Objects*) &objects_23_pcw, (Mask*) &mask_23_all, (Image*) &text_23_pcw, (Music*) &music_01_all, room_funct_23_all };
const Room room_24_pcw = { (Image*) &room_24_f_pcw, NULL, (Objects*) &objects_24_pcw, (Mask*) &mask_24_all, (Image*) &text_24_pcw, (Music*) &music_03_all, room_funct_24_all };

const Room room_30_pcw = { (Image*) &room_30_f_pcw, (Image*) &room_30_b_pcw, (Objects*) &objects_30_pcw, (Mask*) &mask_30_all, (Image*) &text_30_pcw, (Music*) &music_01_all, room_funct_30_all };
const Room room_31_pcw = { (Image*) &room_31_f_pcw, NULL, (Objects*) &objects_31_pcw, (Mask*) &mask_31_all, (Image*) &text_31_pcw, (Music*) &music_01_all, room_funct_31_all };
const Room room_32_pcw = { (Image*) &room_32_f_pcw, NULL, (Objects*) &objects_32_pcw, (Mask*) &mask_32_all, (Image*) &text_32_pcw, (Music*) &music_01_all,         room_null };
const Room room_33_pcw = { (Image*) &room_33_f_pcw, NULL, (Objects*) &objects_33_pcw, (Mask*) &mask_33_all, (Image*) &text_33_pcw, (Music*) &music_04_all, room_funct_33_all };
const Room room_34_pcw = { (Image*) &room_34_f_pcw, NULL, (Objects*) &objects_34_pcw, (Mask*) &mask_34_all, (Image*) &text_34_pcw, (Music*) &music_03_all, room_funct_34_all };

const Room room_40_pcw = { (Image*) &room_40_f_pcw, NULL, (Objects*) &objects_null,   (Mask*) &mask_40_all, (Image*) &text_40_pcw, (Music*) &music_00_all,         room_null };
const Room room_41_pcw = { (Image*) &room_41_f_pcw, NULL, (Objects*) &objects_41_pcw, (Mask*) &mask_41_all, (Image*) &text_41_pcw, (Music*) &music_00_all, room_funct_41_all };
const Room room_42_pcw = { (Image*) &room_42_f_pcw, NULL, (Objects*) &objects_42_pcw, (Mask*) &mask_42_pcw, (Image*) &text_42_pcw, (Music*) &music_02_all, room_funct_42_all };
const Room room_43_pcw = { (Image*) &room_43_f_pcw, NULL, (Objects*) &objects_43_pcw, (Mask*) &mask_43_all, (Image*) &text_43_pcw, (Music*) &music_02_all, room_funct_43_all };
const Room room_44_pcw = { (Image*) &room_44_f_pcw, NULL, (Objects*) &objects_44_pcw, (Mask*) &mask_44_all, (Image*) &text_44_pcw, (Music*) &music_04_all, room_funct_44_all };


