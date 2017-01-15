//#include "../../inc/include.h"
//
//#include "../../res/nes/sprites.h"
//#include "../../res/nes/texts.h"
//#include "../../res/all/texts.h"
//#include "../../res/nes/foreground.h"
//#include "../../res/nes/background.h"
//#include "../../inc/versions/all.h"
//
//
//const Entity entity_01_nes = {  1, "Jean stays",            0, (SpriteDefinition*) &jean_2x3_nes,     PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
//const Entity entity_02_nes = {  2, "Jean walks",            1, (SpriteDefinition*) &jean_2x3_nes,     PAL3, ENTITY_PLAYER,     FIX32(0.65),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
//const Entity entity_03_nes = {  3, "Jean jumps",            2, (SpriteDefinition*) &jean_2x3_nes,     PAL3, ENTITY_PLAYER,     FIX32(0.65),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
//const Entity entity_04_nes = {  4, "Jean burns",            3, (SpriteDefinition*) &jean_2x3_nes,     PAL3, ENTITY_NULL,                 0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  1,  5 } };
//const Entity entity_05_nes = {  5, "Jean lie down",         0, (SpriteDefinition*) &jean_3x2_nes,     PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  6,  0,  6 } }; // {  8,  6,  0, 10 } };
//const Entity entity_06_nes = {  6, "Jean sneaks",           1, (SpriteDefinition*) &jean_3x2_nes,     PAL3, ENTITY_PLAYER,      FIX32(0.2),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  6,  0,  6 } }; // {  8,  6,  0, 10 } };
//const Entity entity_07_nes = {  7, "Flying skull",          4, (SpriteDefinition*) &enemies_2x2_nes,  PAL2, ENTITY_ENEMY,       FIX32(0.8),           0,           0, 0, 0, 0, NULL, mcb_udlr,        0, {  4,  5,  3,  4 } };
//const Entity entity_08_nes = {  8, "Checkpoint",            4, (SpriteDefinition*) &jean_2x3_nes,     PAL3, ENTITY_CHECKPOINT,           0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
//const Entity entity_09_nes = {  9, "Checkpoint active",     5, (SpriteDefinition*) &jean_2x3_nes,     PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
//const Entity entity_10_nes = { 10, "Yellow hint",          12, (SpriteDefinition*) &objects_2x2_nes,  PAL3, ENTITY_HINT,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
//const Entity entity_11_nes = { 11, "Heart",                11, (SpriteDefinition*) &objects_2x2_nes,  PAL3, ENTITY_HEART,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
//const Entity entity_12_nes = { 12, "Cross",                 0, (SpriteDefinition*) &objects_2x2_nes,  PAL3, ENTITY_CROSS,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
//const Entity entity_13_nes = { 13, "Inverted cross",        1, (SpriteDefinition*) &objects_2x2_nes,  PAL3, ENTITY_INV_CROSS,            0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
//const Entity entity_14_nes = { 14, "Crusader",              1, (SpriteDefinition*) &enemies_2x3_nes,  PAL2, ENTITY_ENEMY,      FIX32(0.60),           0, FIX32(0.20), 0, 1, 0, NULL, mcb_crusader,    0, {  7,  5,  0,-25 } }; // {  7,  5,  0,  5 } };
//const Entity entity_15_nes = { 15, "Water",                 6, (SpriteDefinition*) &enemies_2x1_nes,  PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
//const Entity entity_16_nes = { 16, "Fire",                 11, (SpriteDefinition*) &enemies_2x2_nes,  PAL2, ENTITY_NULL,              zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
//const Entity entity_17_nes = { 17, "Rat",                   1, (SpriteDefinition*) &enemies_2x2_nes,  PAL2, ENTITY_ENEMY,      FIX32(0.60),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  0,  0,  0 } };
//const Entity entity_18_nes = { 18, "Green spider",          2, (SpriteDefinition*) &enemies_2x2_nes,  PAL2, ENTITY_ENEMY,             zero, FIX32(0.75),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
//const Entity entity_19_nes = { 19, "Brown spider",          3, (SpriteDefinition*) &enemies_2x2_nes,  PAL2, ENTITY_ENEMY,             zero, FIX32(1.00),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
//const Entity entity_20_nes = { 20, "Bell",                 14, (SpriteDefinition*) &objects_2x2_nes,  PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
//const Entity entity_21_nes = { 21, "Snail",                 4, (SpriteDefinition*) &enemies_2x1_nes,  PAL2, ENTITY_ENEMY,      FIX32(0.30),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  2,  0,  2 } };
//const Entity entity_22_nes = { 22, "Switch (off)",          2, (SpriteDefinition*) &objects_2x2_nes,  PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
//const Entity entity_23_nes = { 23, "Swordsman's skeleton",  2, (SpriteDefinition*) &enemies_2x3_nes,  PAL2, ENTITY_ENEMY,      FIX32(0.60),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  6,  5,  0,  5 } };
//const Entity entity_24_nes = { 24, "Skull wasp",            5, (SpriteDefinition*) &enemies_2x2_nes,  PAL2, ENTITY_ENEMY,      FIX32(0.50), FIX32(0.50),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
//const Entity entity_25_nes = { 25, "Human wasp",           10, (SpriteDefinition*) &enemies_2x2_nes,  PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
//const Entity entity_26_nes = { 26, "El Coco",               7, (SpriteDefinition*) &enemies_2x2_nes,  PAL2, ENTITY_ENEMY,      FIX32(0.45), FIX32(0.45),        zero, 0, 1, 0, NULL, mcb_coco,        0, {  2,  2,  2,  2 } };
//const Entity entity_27_nes = { 27, "Spitting plant",        0, (SpriteDefinition*) &enemies_2x2_nes,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
//const Entity entity_28_nes = { 28, "Spit",                  2, (SpriteDefinition*) &enemies_2x1_nes,  PAL2, ENTITY_ENEMY,      FIX32(0.75), FIX32(2.20), FIX32(0.10), 0, 0, 0, NULL, mcb_bullet,      0, {  1,  5,  1,  5 } };
//const Entity entity_29_nes = { 29, "Fireball",              6, (SpriteDefinition*) &enemies_2x2_nes,  PAL2, ENTITY_ENEMY,                0, FIX32(1.50),           0, 0, 0, 0, NULL, mcb_fireball,    0, {  2,  2,  2,  2 } };
//const Entity entity_30_nes = { 30, "Evil bird",             0, (SpriteDefinition*) &enemies_3x2_nes,  PAL2, ENTITY_ENEMY,       FIX32(1.0),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  2,  0,  1,  1 } };
//const Entity entity_31_nes = { 31, "Spikes",                8, (SpriteDefinition*) &enemies_2x1_nes,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  2,  0,  0,  0 } };
//const Entity entity_32_nes = { 32, "Demon",                 3, (SpriteDefinition*) &enemies_2x3_nes,  PAL2, ENTITY_ENEMY,      FIX32(0.75),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
//const Entity entity_33_nes = { 33, "Archer skeleton",       0, (SpriteDefinition*) &enemies_3x3_nes,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  6,  6,  0,  6 } };
//const Entity entity_34_nes = { 34, "Arrow",                 5, (SpriteDefinition*) &enemies_2x1_nes,  PAL2, ENTITY_ENEMY,      FIX32(2.50),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  2,  3,  2,  3 } };
//const Entity entity_35_nes = { 35, "Door",                  0, (SpriteDefinition*) &objects_1x4_nes,  PAL3, ENTITY_DOOR,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
//const Entity entity_36_nes = { 36, "Stone hatch",           0, (SpriteDefinition*) &hatch_2x2_nes,    PAL1, ENTITY_HATCH,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
//const Entity entity_37_nes = { 37, "Hangman",               7, (SpriteDefinition*) &jean_2x3_nes,     PAL3, ENTITY_ENEMY,                0, FIX32(0.60),           0, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  1,  2,  0,  2 } };
//const Entity entity_38_nes = { 38, "Rope",                  6, (SpriteDefinition*) &jean_2x3_nes,     PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
//const Entity entity_39_nes = { 39, "Death",                 0, (SpriteDefinition*) &death_4x4_nes,    PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  8,  5,  4 } };//{  0,  0,  2,  0 } };
//const Entity entity_40_nes = { 40, "Death throw",           1, (SpriteDefinition*) &death_4x4_nes,    PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  8,  5,  4 } };//{  0,  0,  4,  0 } };
//const Entity entity_41_nes = { 41, "Scythe",                0, (SpriteDefinition*) &death_2x2_nes,    PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),           0, 0, 0, 0, NULL, mcb_scythe,      0, {  2,  2,  2,  2 } };//{  1,  1,  1,  1 } };
//const Entity entity_42_nes = { 42, "Wheel of faith",        5, (SpriteDefinition*) &objects_2x2_nes,  PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
//const Entity entity_43_nes = { 43, "Wheel of faith",        6, (SpriteDefinition*) &objects_2x2_nes,  PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
//const Entity entity_44_nes = { 44, "Bell (on)",            15, (SpriteDefinition*) &objects_2x2_nes,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
//const Entity entity_45_nes = { 45, "Switch (on)",           3, (SpriteDefinition*) &objects_2x2_nes,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
//const Entity entity_46_nes = { 46, "Passage",               8, (SpriteDefinition*) &jean_2x3_nes,     PAL3, ENTITY_PASSAGE,              0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, { 16,  7,  0,  7 } };
//const Entity entity_47_nes = { 47, "Dragon head",           0, (SpriteDefinition*) &dragon_4x5_nes,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
//const Entity entity_48_nes = { 48, "Dragon body",           0, (SpriteDefinition*) &dragon_12x5_nes,  PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
//const Entity entity_49_nes = { 49, "Dragon fire",           0, (SpriteDefinition*) &dragon_3x6_nes,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  0,  2,  0,  2 } };
//const Entity entity_50_nes = { 50, "Running fire",          0, (SpriteDefinition*) &dragon_2x2_nes,   PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  0,  0,  0 } };
//const Entity entity_51_nes = { 51, "Gargoyle",              8, (SpriteDefinition*) &enemies_2x2_nes,  PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
//const Entity entity_52_nes = { 52, "Gargoyle spit",         1, (SpriteDefinition*) &enemies_2x1_nes,  PAL2, ENTITY_ENEMY,      FIX32(3.00),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  1,  1,  2,  1 } };
//const Entity entity_53_nes = { 53, "Evil cursader",         0, (SpriteDefinition*) &enemies_2x3_nes,  PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
//const Entity entity_54_nes = { 54, "Toxic drop",            3, (SpriteDefinition*) &enemies_2x1_nes,  PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.09), 0, 0, 0, NULL, mcb_drop,        0, {  0,  3,  0,  3 } };
//const Entity entity_55_nes = { 55, "Fish",                  9, (SpriteDefinition*) &enemies_2x2_nes,  PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.10), 0, 0, 1, NULL, mcb_null,        0, {  0,  1,  0,  1 } };
//const Entity entity_56_nes = { 56, "Splash",                7, (SpriteDefinition*) &enemies_2x1_nes,  PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
//const Entity entity_57_nes = { 57, "Satan",                 0, (SpriteDefinition*) &satan_4x6_nes,    PAL2, ENTITY_ENEMY,                0, FIX32(0.75),           0, 0, 0, 0, NULL, mcb_udlr,        0, {  } };
//const Entity entity_58_nes = { 58, "Satan bullet",          0, (SpriteDefinition*) &enemies_2x1_nes,  PAL2, ENTITY_ENEMY,      FIX32(1.00),           0,           0, 0, 0, 0, NULL, mcb_bullet,      0, {  1,  5,  1,  5 } };
//const Entity entity_59_nes = { 59, "Grial",                 4, (SpriteDefinition*) &objects_2x2_nes,  PAL3, ENTITY_GRIAL,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
//const Entity entity_60_nes = { 60, "Red hint",             13, (SpriteDefinition*) &objects_2x2_nes,  PAL3, ENTITY_HINT,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
//const Entity entity_61_nes = { 61, "Catched cross",         0, (SpriteDefinition*) &objects_1x1_nes,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
//const Entity entity_62_nes = { 62, "Bonfire",               0, (SpriteDefinition*) &bonfire_6x8_nes,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
//const Entity entity_63_nes = { 63, "Bell ringing",          0, (SpriteDefinition*) &objects_4x2_nes,  PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
//
//
//
//
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
////
//// Row #0 nes
////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//const Objects objects_20_nes = // Tower of the Bell // OK // nes: Hacer que la campana se mueva al tocarla
//{
//      {
//            { (Entity*) &entity_20_nes,  40,   8,  0,  0 }, // Bell
//            { (Entity*) &entity_17_nes,  64, 144, +1,  0 }, // Rat
//            { (Entity*) &entity_17_nes, 216, 144, -1,  0 }, // Rat
//            { (Entity*) &entity_11_nes,  96,  56,  0,  0 }, // Heart
//	}
//};
//
//
//const Objects objects_30_nes = // Wine supplies // OK
//{
//      {
//            { (Entity*) &entity_18_nes,  36, 121,  0, +1 }, // Green spider
//            { (Entity*) &entity_19_nes,  60, 131,  0, -1 }, // Brown spider
//            { (Entity*) &entity_18_nes,  76, 100,  0, +1 }, // Green spider
//            { (Entity*) &entity_10_nes, 144, 128,  0,  0 }, // Brown spider
//            { (Entity*) &entity_19_nes, 196, 130,  0, -1,  0, FIX32(0.5) }, // Brown spider
//            { (Entity*) &entity_12_nes, 220, 140,  0,  0 }, // Cross
//	}
//};
//
//
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
////
//// Row #1 nes
////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//const Objects objects_01_nes = // Escape !!! // OK
//{
//      {
//            { (Entity*) &entity_14_nes,  -50, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_nes,  -70, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_nes,  -90, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_nes, -110, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_nes, -130, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_nes, -150, 136, +1,  0 }, // Crusader
////            { (Entity*) &entity_14_nes, -170, 136, +1,  0 }, // Crusader
////            { (Entity*) &entity_14_nes, -190, 136, +1,  0 }, // Crusader
//	}
//};
//
//
//const Objects objects_11_nes = // Death is close !!! // OK
//{
//      {
//            { (Entity*) &entity_14_nes,  -50, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_nes,  -70, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_nes,  -90, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_nes, -110, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_nes, -130, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_nes, -150, 136, +1,  0 }, // Crusader
////            { (Entity*) &entity_14_nes, -170, 136, +1,  0 }, // Crusader
////            { (Entity*) &entity_14_nes, -190, 136, +1,  0 }, // Crusader
//      }
//};
//
//
//const Objects objects_21_nes = // Abandone church // OK
//{
//      {
//            { (Entity*) &entity_35_nes,   0, 112 }, // Door
//      }
//};
//
//
//const Objects objects_31_nes = // The Altar // OK
//{
//      {
//            { (Entity*) &entity_35_nes, 248, 112,  0,  0,  0,  0,  1 }, // Door
//            { (Entity*) &entity_36_nes, 208, 160,  0,  0 }, // Stone hatch
//            { (Entity*) &entity_07_nes, 144,  44, +1,  0 }, // Flying skull
//            { (Entity*) &entity_07_nes,  88,  84, +1,  0 }, // Flying skull
//            { (Entity*) &entity_10_nes, 212, 140,  0,  0 }, // Yellow hint
//            { (Entity*) &entity_08_nes,  56, 136,  0,  0 }, // Checkpoint
//	}
//};
//
//
//const Objects objects_41_nes = // Hangman Tree // OK
//{
//      {
//            { (Entity*) &entity_37_nes, 152, 104,  0, +1 }, // Hangman
//            { (Entity*) &entity_38_nes, 152,  88,  0,  0 }, // Rope
//            { (Entity*) &entity_38_nes, 152, 112,  0,  0 }, // Rope
//
//            { (Entity*) &entity_37_nes, 176,  76,  0, +1 }, // Hangman
//            { (Entity*) &entity_38_nes, 176,  64,  0,  0 }, // Rope
//            { (Entity*) &entity_38_nes, 176,  88,  0,  0 }, // Rope
//            { (Entity*) &entity_38_nes, 176, 102,  0,  0 }, // Rope
//
//            { (Entity*) &entity_37_nes,  72,  88,  0, +1 }, // Hangman
//            { (Entity*) &entity_38_nes,  72,  72,  0,  0 }, // Pope
//            { (Entity*) &entity_38_nes,  72,  96,  0,  0 }, // Pope
//            { (Entity*) &entity_38_nes,  72, 116,  0,  0 }, // Pope
//
//            { (Entity*) &entity_37_nes,  48,  72,  0, +1 }, // Hangman
//            { (Entity*) &entity_38_nes,  48,  56,  0,  0 }, // Rope
//            { (Entity*) &entity_38_nes,  48,  80,  0,  0 }, // Rope
//            { (Entity*) &entity_38_nes,  48, 104,  0,  0 }, // Pope
//
//            { (Entity*) &entity_21_nes, 152,  48, -1,  0 }, // Snail
//            { (Entity*) &entity_21_nes, 136, 152, -1,  0 }, // Snail
//            { (Entity*) &entity_22_nes, 216, 144,  0,  0 }, // Switch  // 17
//            { (Entity*) &entity_13_nes,  48,  32,  0,  0 }, // Inverted cross
//
//
//	}
//};
//
//
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
////
//// Row #2 nes
////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//const Objects objects_02_nes = // Pestilent beast // OK
//{
//      {
//            { (Entity*) &entity_47_nes, 120,  10,  0,  0 }, // Dragon head #0
//            { (Entity*) &entity_48_nes, 112,   8,  0,  0 }, // Dragon body #1
//            { (Entity*) &entity_49_nes, 125,  51,  0,  0 }, // Dragon fire #2
//
//            { (Entity*) &entity_50_nes, -40, -40,  0, +1 }, // Runnig fire #3
//            { (Entity*) &entity_50_nes, -40, -40,  0, -1 }, // Runnig fire #4
//            { (Entity*) &entity_50_nes, -40, -40,  0, +1 }, // Runnig fire #5
//            { (Entity*) &entity_50_nes, -40, -40,  0, -1 }, // Runnig fire #6
//            { (Entity*) &entity_50_nes, -40, -40,  0, +1 }, // Runnig fire #7
//            { (Entity*) &entity_50_nes, -40, -40,  0, -1 }, // Runnig fire #8
//
//            { (Entity*) &entity_22_nes,  56,  32,  0,  0 }, // Switch      #9
//            { (Entity*) &entity_11_nes,  80, 144,  0,  0 }, // Heart
//            { (Entity*) &entity_12_nes, 204,  30,  0,  0 }, // Cross
//
//            { (Entity*) &entity_46_nes, 184, 136,  0,  0 }, // Passage
//      }
//};
//
//
//const Objects objects_12_nes = // Cave of illusions // OK // TODO: Mejorar el movimiento del coco
//{
//      {
//            { (Entity*) &entity_11_nes,  16,  32,  0,  0 }, // Heart
//            { (Entity*) &entity_26_nes, 128,  72,  0,  0 }, // El Coco
//            { (Entity*) &entity_08_nes, 112, 136,  0,  0 }, // Checkpoint
//      }
//};
//
//
//const Objects objects_22_nes = // Plagued ruins // OK
//{
//      {
//            { (Entity*) &entity_10_nes,  80, 142,  0,  0 }, // Yellow hint
//            { (Entity*) &entity_11_nes, 128,  48,  0,  0 }, // Heart
//            { (Entity*) &entity_24_nes,  48,  24,  0, -1 }, // Skull wasp
//            { (Entity*) &entity_24_nes, 128, 128,  0, -1 }, // Skull wasp
//
//            { (Entity*) &entity_25_nes, 160,  40,  0, -1 }, // Human wasp
//            { (Entity*) &entity_25_nes,  32, 112,  0, -1 }, // Human wasp
//            { (Entity*) &entity_25_nes, 176, 128,  0, -1 }, // Human wasp
//            { (Entity*) &entity_08_nes,  64,  56,  0,  0 }, // Checkpoint
//	}
//};
//
//
//const Objects objects_32_nes = // Catacombs // OK
//{
//      {
//            { (Entity*) &entity_23_nes,  80,  88, -1,  0 }, // Swordsman's skeleton
//            { (Entity*) &entity_23_nes, 128, 136, -1,  0 }, // Swordsman's skeleton
//            { (Entity*) &entity_12_nes, 144, 144,  0,  0 }, // Cross
//	}
//};
//
//
//const Objects objects_42_nes = // Hidden garden // OK
//{
//      {
//            { (Entity*) &entity_12_nes,  72,  32,   0,  0 }, // Cross          - #01
//            { (Entity*) &entity_10_nes, 152,  78,   0,  0 }, // Yellow hint    - #02
//            { (Entity*) &entity_21_nes, 168, 152,  -1,  0 }, // Snail          - #03
//            { (Entity*) &entity_18_nes,  48,  24,   0, +1,  0, FIX32(0.60) }, // Green spider- #04
//
//            { (Entity*) &entity_27_nes, 224,  48,   0,  0 }, // Spitting plant // 05
//            { (Entity*) &entity_28_nes,   0, -60, -60,  0 }, // Spit           // 06
//            { (Entity*) &entity_28_nes,   0, -60, -60,  0 }, // Spit           // 07
//
//            { (Entity*) &entity_27_nes, 136,  32,   0,  0 }, // Spitting plant // 08
//            { (Entity*) &entity_28_nes,   0, -60, -60,  0 }, // Spit           // 09
//            { (Entity*) &entity_28_nes,   0, -60, -60,  0 }, // Spit           // 10
//
//            { (Entity*) &entity_27_nes, 112, 112,   0,  0 }, // Spitting plant // 11
//            { (Entity*) &entity_28_nes,   0, -60, -60,  0 }, // Spit           // 12
//            { (Entity*) &entity_28_nes,   0, -60, -60,  0 }, // Spit           // 13
//
//            { (Entity*) &entity_08_nes,  64, 136,   0,  0 }, // Checkpoint     - #00
//
//	}
//};
//
//
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
////
//// Row #3 nes
////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//const Objects objects_03_nes = // Gloomy tunnels // OK
//{
//      {
//            { (Entity*) &entity_54_nes,  32,  88,  0,  0 }, // Toxic drop
//            { (Entity*) &entity_54_nes,  88,  32,  0,  0 }, // Toxic drop
//            { (Entity*) &entity_54_nes,  88,  88,  0,  0 }, // Toxic drop
//            { (Entity*) &entity_54_nes, 208,  32,  0,  0 }, // Toxic drop
//            { (Entity*) &entity_54_nes, 192,  32,  0,  0 }, // Toxic drop
//
//            { (Entity*) &entity_11_nes,  24, 112,  0,  0 }, // Heart
//            { (Entity*) &entity_53_nes,  80,  56, -1,  0 }, // Evil crusader
//            { (Entity*) &entity_53_nes, 192, 136, -1,  0 }, // Evil crusader
//            { (Entity*) &entity_13_nes, 224,  64,  0,  0 }, // Inverted cross
//
//            { (Entity*) &entity_08_nes, 168,  56,  0,  0 }, // Checkpoint
//      }
//};
//
//
//const Objects objects_13_nes = // Lake of despair // OK
//{
//      {
//            { (Entity*) &entity_15_nes,  48, 168,  0,  0 }, // Water
//            { (Entity*) &entity_15_nes,  64, 168,  0,  0 }, // Water
//            { (Entity*) &entity_15_nes,  80, 168,  0,  0 }, // Water
//            { (Entity*) &entity_15_nes,  96, 168,  0,  0 }, // Water
//            { (Entity*) &entity_15_nes, 112, 168,  0,  0 }, // Water
//            { (Entity*) &entity_15_nes, 128, 168,  0,  0 }, // Water
//            { (Entity*) &entity_15_nes, 144, 168,  0,  0 }, // Water
//            { (Entity*) &entity_15_nes, 160, 168,  0,  0 }, // Water
//
//            { (Entity*) &entity_56_nes,  56, 160,  0,  0 }, // Splash
//            { (Entity*) &entity_56_nes, 116, 160,  0,  0 }, // Splash
//            { (Entity*) &entity_56_nes, 156, 160,  0,  0 }, // Splash
//
//            { (Entity*) &entity_55_nes,  56, 168,  0,  0 }, // Fish
//            { (Entity*) &entity_55_nes, 116, 168,  0,  0 }, // Fish
//            { (Entity*) &entity_55_nes, 156, 168,  0,  0 }, // Fish
//
//            { (Entity*) &entity_12_nes,  16,  48,  0,  0 }, // Cross
//            { (Entity*) &entity_10_nes, 176,  40,  0,  0 }, // Yellow hint
//            { (Entity*) &entity_18_nes, 144,  24,  0, +1, 0, FIX32(0.60)}, // Green spider
//	}
//};
//
//
//const Objects objects_23_nes = // The wheel of Faith // OK
//{
//      {
//            { (Entity*) &entity_33_nes,  12,  24,  0,  0 }, // Archer skeleton
//            { (Entity*) &entity_33_nes, 221,  72, -1,  0 }, // Archer skeleton
//            { (Entity*) &entity_33_nes, 116, 104, -1,  0 }, // Archer skeleton
//            { (Entity*) &entity_34_nes, -20, -20,  0,  0 }, // Arrow
//            { (Entity*) &entity_34_nes, -20, -20,  0,  0 }, // Arrow
//            { (Entity*) &entity_34_nes, -20, -20,  0,  0 }, // Arrow
//
//            { (Entity*) &entity_42_nes, 120,  16,  0,  0 }, // Wheel of faith
//
//            { (Entity*) &entity_13_nes,  24,  80,  0,  0 }, // Inverted cross
//            { (Entity*) &entity_12_nes, 216, 144,  0,  0 }, // Cross
//            { (Entity*) &entity_11_nes, 168,  80,  0,  0 }, // Heart
//      }
//};
//
//
//const Objects objects_33_nes = // Banquet of Death // OK :)
//{
//      {
//            { (Entity*) &entity_12_nes,  24,  40,  0,  0 }, // Cross
//            { (Entity*) &entity_11_nes, 120,  88,  0,  0 }, // Heart
//            { (Entity*) &entity_39_nes,  16,   8, -1,  0 }, // Death
//            { (Entity*) &entity_41_nes, -16, -16,  0, +1 }, // Scythe
//            { (Entity*) &entity_41_nes, -16, -16,  0, +1 }, // Scythe
//            { (Entity*) &entity_41_nes, -16, -16,  0, +1 }, // Scythe
//            { (Entity*) &entity_41_nes, -16, -16,  0, +1 }, // Scythe
//            { (Entity*) &entity_41_nes, -16, -16,  0, +1 }, // Scythe
//      }
//};
//
//
//const Objects objects_43_nes = // Underground river // OK
//{
//      {
//            { (Entity*) &entity_35_nes,   0, 128,  0,  0 }, // Door
//
//            { (Entity*) &entity_15_nes, 112, 168,  0,  0 }, // Water
//            { (Entity*) &entity_15_nes, 128, 168,  0,  0 }, // Water
//            { (Entity*) &entity_15_nes, 144, 168,  0,  0 }, // Water
//            { (Entity*) &entity_15_nes, 160, 168,  0,  0 }, // Water
//            { (Entity*) &entity_15_nes, 176, 168,  0,  0 }, // Water
//            { (Entity*) &entity_15_nes, 192, 168,  0,  0 }, // Water
//            { (Entity*) &entity_15_nes, 208, 168,  0,  0 }, // Water
//            { (Entity*) &entity_15_nes, 224, 168,  0,  0 }, // Water
//
//            { (Entity*) &entity_46_nes, 168, 120,  0,  0 }, // Passage
//            { (Entity*) &entity_18_nes,  88,  48,  0, +1 }, // Green spider
//            { (Entity*) &entity_12_nes,  24,  16,  0,  0 }, // Cross
//            { (Entity*) &entity_11_nes, 200,  64,  0,  0 }, // Heart
//
//            { (Entity*) &entity_54_nes,  48,   8,  0,  0 }, // Toxic drop
//            { (Entity*) &entity_54_nes, 128,   8,  0,  0 }, // Toxic drop
//
//            { (Entity*) &entity_56_nes, 116, 160,  0,  0 }, // Splash
//            { (Entity*) &entity_56_nes, 192, 160,  0,  0 }, // Splash
//            { (Entity*) &entity_56_nes, 144, 160,  0,  0 }, // Splash
//
//            { (Entity*) &entity_55_nes, 116, 168,  0,  0 }, // Fish
//            { (Entity*) &entity_55_nes, 192, 168,  0,  0 }, // Fish
//            { (Entity*) &entity_55_nes, 144, 168,  0,  0 }, // Fish
//
//            { (Entity*) &entity_08_nes,  64,  88,  0,  0 }, // Checkpoint
//      }
//
//};
//
//
//
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
////
//// Row #4 nes
////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//const Objects objects_04_nes = // Unexpected gate // OK
//{
//      {
//            { (Entity*) &entity_51_nes, 216,  24,  0,  0,  0,  0, -1 }, // Gargoyle
//            { (Entity*) &entity_52_nes, -40, -40,  0,  0             }, // Gargoyle spit
//
//            { (Entity*) &entity_30_nes,  36,  88, +1,  0, FIX32(0.60) }, // Evil bird
//
//            { (Entity*) &entity_35_nes, 248, 112,  0,  0,  0,  0, -1 }, // Door // 03
//
//            { (Entity*) &entity_22_nes, 192,  48,  0,  0 }, // Switch
//            { (Entity*) &entity_53_nes, 136, 136, -1,  0 }  // Evil crusader
//	}
//};
//
//
//const Objects objects_14_nes = // Evil church // OK
//{
//      {
//            { (Entity*) &entity_10_nes,  24,  46,  0,  0 }, // Yellow hint
//
//            { (Entity*) &entity_16_nes, 144, 160,  0,  0 }, // Fire
//            { (Entity*) &entity_32_nes,  16, 136, -1,  0, FIX32(0.60) }, // Demon
//            { (Entity*) &entity_32_nes,  88,  40, -1,  0, FIX32(0.60) }, // Demon
//            { (Entity*) &entity_32_nes, 128, 136, -1,  0, FIX32(0.60) }, // Demon
//
//            { (Entity*) &entity_33_nes, 190, 120,  0,  0 }, // Archer skeleton
//            { (Entity*) &entity_34_nes, -60, -60, -1,  0 }, // Arrow
//
//            { (Entity*) &entity_08_nes, 152,  40,  0,  0 }, // Checkpoint
//	}
//};
//
//
//const Objects objects_24_nes = // Tortured souls // OK
//{
//      {
//            { (Entity*) &entity_51_nes, 224, 104,  0,  0,  0,  0, -1 }, // Gargoyle
//            { (Entity*) &entity_52_nes, -40, -40,  0,  0             }, // Gargoyle spit
//
//            { (Entity*) &entity_13_nes, 220, 142,  0,  0 }, // Inverted cross
//
//            { (Entity*) &entity_31_nes, 192, 152 }, // Spikes
//
//            { (Entity*) &entity_23_nes,  60,   8, -1,  0, FIX32(0.70),  0, 0, 1 }, // Swordsman's skeleton
//            { (Entity*) &entity_23_nes, 140,  64, -1,  0, FIX32(0.60),  0, 0, 0 }, // Swordsman's skeleton
//            { (Entity*) &entity_32_nes, 208,  64, -1,  0,           0,  0, 0, 0 }, // Demon
//
//            { (Entity*) &entity_16_nes,  80, 160,  0,  0 }, // Fire
//            { (Entity*) &entity_16_nes,  96, 160,  0,  0 }, // Fire
//            { (Entity*) &entity_16_nes, 144, 160,  0,  0 }, // Fire
//            { (Entity*) &entity_16_nes, 160, 160,  0,  0 }, // Fire
//
//            { (Entity*) &entity_29_nes,  80, 136,  0, +1,  0, FIX32(1.75) }, // Fireball
//            { (Entity*) &entity_29_nes,  96, 152,  0, +1,  0, FIX32(1.25) }, // Fireball
//            { (Entity*) &entity_29_nes, 152,  96,  0, +1,  0, FIX32(1.25) }, // Fireball
//	}
//};
//
//
//const Objects objects_34_nes = // Ashes to ashes // OK
//{
//      {
//            { (Entity*) &entity_16_nes,  16, 160,  0,  0 }, // Fire
//            { (Entity*) &entity_16_nes,  32, 160,  0,  0 }, // Fire
//            { (Entity*) &entity_16_nes,  48, 160,  0,  0 }, // Fire
//            { (Entity*) &entity_16_nes,  80, 160,  0,  0 }, // Fire
//            { (Entity*) &entity_16_nes,  96, 160,  0,  0 }, // Fire
//            { (Entity*) &entity_16_nes, 112, 160,  0,  0 }, // Fire
//            { (Entity*) &entity_16_nes, 160, 160,  0,  0 }, // Fire
//            { (Entity*) &entity_16_nes, 176, 160,  0,  0 }, // Fire
//            { (Entity*) &entity_16_nes, 192, 160,  0,  0 }, // Fire
//
//            { (Entity*) &entity_29_nes,  48,  24,  0, +1 }, // Fireball
//            { (Entity*) &entity_29_nes,  80,  88,  0, +1 }, // Fireball
//            { (Entity*) &entity_29_nes, 160,  72,  0, +1 }, // Fireball
//
//            { (Entity*) &entity_11_nes,  64, 144,  0,  0 }, // Heart
//            { (Entity*) &entity_11_nes, 184,  56,  0,  0 }, // Heart
//            { (Entity*) &entity_30_nes, 100,  32, +1,  0              }, // Evil bird
//            { (Entity*) &entity_30_nes, 212, 104, +1,  0, FIX32(0.75) }, // Evil bird
//            { (Entity*) &entity_23_nes, 160,   8, -1,  0, FIX32(0.75),  0, 0, 1 }, // Swordsman's skeleton
//
//            { (Entity*) &entity_08_nes, 136, 136,  0,  0 }, // Checkpoint
//	}
//};
//
//
//
//const Objects objects_44_nes = // Satan!!! // TODO
//{
//      {
//            { (Entity*) &entity_35_nes,   0, 128 }, // Door
//
//            { (Entity*) &entity_14_nes,  -50, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_nes,  -70, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_nes,  -90, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_nes, -110, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_nes, -130, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_nes, -150, 136, +1,  0 }, // Crusader
//
//            { (Entity*) &entity_59_nes, 120,  16,  0,  0 }, // Grial
//            { (Entity*) &entity_60_nes, 222, 111,  0,  0 }, // Red hint
//
//            { (Entity*) &entity_58_nes, -50, -50,  0,  0 }, // Satan bullet
//            { (Entity*) &entity_58_nes, -50, -50,  0,  0 }, // Satan bullet
//            { (Entity*) &entity_58_nes, -50, -50,  0,  0 }, // Satan bullet
//            { (Entity*) &entity_58_nes, -50, -50,  0,  0 }, // Satan bullet
//            { (Entity*) &entity_58_nes, -50, -50,  0,  0 }, // Satan bullet
//            { (Entity*) &entity_58_nes, -50, -50,  0,  0 }, // Satan bullet
//            { (Entity*) &entity_58_nes, -50, -50,  0,  0 }, // Satan bullet
//            { (Entity*) &entity_58_nes, -50, -50,  0,  0 }, // Satan bullet
//            { (Entity*) &entity_58_nes, -50, -50,  0,  0 }, // Satan bullet
//            { (Entity*) &entity_58_nes, -50, -50,  0,  0 }, // Satan bullet
//            { (Entity*) &entity_58_nes, -50, -50,  0,  0 }, // Satan bullet
//            { (Entity*) &entity_58_nes, -50, -50,  0,  0 }, // Satan bullet
//            { (Entity*) &entity_57_nes, 196,  80,  0, +1 }, // Satan
//
//            { (Entity*) &entity_61_nes, 128, 190,  0,  0 }, // Catched cross // puts out of the screen
//	}
//};
//
//
//
//
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
////
//// Other nes
////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//
//
//const Objects objects_prologue_nes =
//{
//      {
//            { (Entity*) &entity_02_nes,  -16, 118, +1,  0  }, // Jean walks
//
//            { (Entity*) &entity_14_nes,  -70, 116, +1,  0, FIX32(0.50) }, // Crusader
//            { (Entity*) &entity_14_nes,  -95, 116, +1,  0, FIX32(0.50) }, // Crusader
//            { (Entity*) &entity_14_nes, -120, 116, +1,  0, FIX32(0.50) }, // Crusader
//      }
//};
//
//const Objects objects_burnhim_nes =
//{
//      {
//            { (Entity*) &entity_14_nes,   56, 136 }, // Crusader
//            { (Entity*) &entity_14_nes,   80, 136 }, // Crusader
//            { (Entity*) &entity_14_nes,  160, 136 }, // Crusader
//            { (Entity*) &entity_14_nes,  184, 136 }, // Crusader
//
//            { (Entity*) &entity_50_nes,  104, 128 }, // Fire
//            { (Entity*) &entity_50_nes,  120, 128 }, // Fire
//            { (Entity*) &entity_50_nes,  136, 128 }, // Fire
//
//            { (Entity*) &entity_03_nes,  120, 118 }, // Jean stays
//            { (Entity*) &entity_62_nes,  104,  96 }, // Bonfire
//	}
//};
//
//const Objects objects_info_nes =
//{
//      {
//            { (Entity*) &entity_02_nes,  12,  20,  0,  0,  0,  0, -1, 0 }, // Jean walks
//            { (Entity*) &entity_22_nes,  12, 192,  0,  0,  0,  0, -1, 0 }, // Switch
//            { (Entity*) &entity_20_nes, 208, 188 }, // Bell
//            { (Entity*) &entity_59_nes, 192, 164 }, // Grial
//            { (Entity*) &entity_42_nes, 208,  28 }, // Wheel of faith
//            { (Entity*) &entity_10_nes, 110,  52 }, // Yellow hint
//            { (Entity*) &entity_11_nes,  32,  76 }, // Heart
//            { (Entity*) &entity_12_nes,   8, 100 }, // Cross
//            { (Entity*) &entity_08_nes, 150,  84 }, // Checkpoint
//            { (Entity*) &entity_46_nes,  36, 144 }, // Passage
//            { (Entity*) &entity_39_nes,  98, 128,  0,  0,  0,  0, -1, 0 }, // Death
//
//      }
//}
//;
//
//
//
//
//
//const Mask mask_42_nes =
//{
//   {
//      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
//      {  1,  1,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  1,  1 },
//      {  1,  1,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  1,  1 },
//      {  1,  1,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  1,  1 },
//      {  1,  1,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  1,  1 },
//      {  1,  1,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  1,  1 },
//      {  1,  1,  0, 64,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  1,  1 },
//      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
//      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1 },
//      {  0,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
//      {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
//      {  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
//      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  0, 64,  1,  1 },
//      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
//      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
//      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
//      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
//      {  1,  1,  1,  1,  1,  1,  0,  0, 32, 32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
//      {  1,  1,  1,  1,  1,  1,  0,  0, 32, 32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
//      {  1,  1,  1,  1,  1,  1,  0, 64, 32, 32, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0, 16,  0,  0,  0, 64,  0,  1,  1 },
//      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1 },
//      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  0,  0,  0,  1,  1,  1,  1 }
//   }
//};
//
//
//
//
//const Room room_00_nes = { (Image*) &room_00_f_nes, NULL, (Objects*) &objects_null,   (Mask*) &mask_00_all, (Image*) &text_00_all, (Music*) &music_00_all,         room_null };
//const Room room_01_nes = { (Image*) &room_01_f_nes, NULL, (Objects*) &objects_01_nes, (Mask*) &mask_01_all, (Image*) &text_01_all, (Music*) &music_08_all,         room_null };
//const Room room_02_nes = { (Image*) &room_02_f_nes, NULL, (Objects*) &objects_02_nes, (Mask*) &mask_02_all, (Image*) &text_02_all, (Music*) &music_02_all, room_funct_02_all };
//const Room room_03_nes = { (Image*) &room_03_f_nes, NULL, (Objects*) &objects_03_nes, (Mask*) &mask_03_all, (Image*) &text_03_all, (Music*) &music_02_all, room_funct_03_all };
//const Room room_04_nes = { (Image*) &room_04_f_nes, NULL, (Objects*) &objects_04_nes, (Mask*) &mask_04_all, (Image*) &text_04_all, (Music*) &music_02_all, room_funct_04_all };
//
//const Room room_10_nes = { (Image*) &room_10_f_nes, NULL, (Objects*) &objects_null,   (Mask*) &mask_10_all, (Image*) &text_10_all, (Music*) &music_10_all,         room_null };
//const Room room_11_nes = { (Image*) &room_11_f_nes, NULL, (Objects*) &objects_11_nes, (Mask*) &mask_11_all, (Image*) &text_11_all, (Music*) &music_08_all,         room_null };
//const Room room_12_nes = { (Image*) &room_12_f_nes, NULL, (Objects*) &objects_12_nes, (Mask*) &mask_12_all, (Image*) &text_12_all, (Music*) &music_02_all, room_funct_12_all };
//const Room room_13_nes = { (Image*) &room_13_f_nes, NULL, (Objects*) &objects_13_nes, (Mask*) &mask_13_all, (Image*) &text_13_all, (Music*) &music_02_all, room_funct_13_all };
//const Room room_14_nes = { (Image*) &room_14_f_nes, NULL, (Objects*) &objects_14_nes, (Mask*) &mask_14_all, (Image*) &text_14_all, (Music*) &music_03_all, room_funct_14_all };
//
//const Room room_20_nes = { (Image*) &room_20_f_nes, NULL, (Objects*) &objects_20_nes, (Mask*) &mask_20_all, (Image*) &text_20_all, (Music*) &music_01_all,         room_null };
//const Room room_21_nes = { (Image*) &room_21_f_nes, NULL, (Objects*) &objects_21_nes, (Mask*) &mask_21_all, (Image*) &text_21_all, (Music*) &music_01_all, room_funct_21_all };
//const Room room_22_nes = { (Image*) &room_22_f_nes, NULL, (Objects*) &objects_22_nes, (Mask*) &mask_22_all, (Image*) &text_22_all, (Music*) &music_01_all,         room_null };
//const Room room_23_nes = { (Image*) &room_23_f_nes, NULL, (Objects*) &objects_23_nes, (Mask*) &mask_23_all, (Image*) &text_23_all, (Music*) &music_01_all, room_funct_23_all };
//const Room room_24_nes = { (Image*) &room_24_f_nes, NULL, (Objects*) &objects_24_nes, (Mask*) &mask_24_all, (Image*) &text_24_all, (Music*) &music_03_all, room_funct_24_all };
//
//const Room room_30_nes = { (Image*) &room_30_f_nes, NULL, (Objects*) &objects_30_nes, (Mask*) &mask_30_all, (Image*) &text_30_all, (Music*) &music_01_all,         room_null };
//const Room room_31_nes = { (Image*) &room_31_f_nes, NULL, (Objects*) &objects_31_nes, (Mask*) &mask_31_all, (Image*) &text_31_all, (Music*) &music_01_all, room_funct_31_all };
//const Room room_32_nes = { (Image*) &room_32_f_nes, NULL, (Objects*) &objects_32_nes, (Mask*) &mask_32_all, (Image*) &text_32_all, (Music*) &music_01_all,         room_null };
//const Room room_33_nes = { (Image*) &room_33_f_nes, NULL, (Objects*) &objects_33_nes, (Mask*) &mask_33_all, (Image*) &text_33_all, (Music*) &music_04_all, room_funct_33_all };
//const Room room_34_nes = { (Image*) &room_34_f_nes, NULL, (Objects*) &objects_34_nes, (Mask*) &mask_34_all, (Image*) &text_34_all, (Music*) &music_03_all, room_funct_34_all };
//
//const Room room_40_nes = { (Image*) &room_40_f_nes, NULL, (Objects*) &objects_null,   (Mask*) &mask_40_all, (Image*) &text_40_all, (Music*) &music_00_all,         room_null };
//const Room room_41_nes = { (Image*) &room_41_f_nes, NULL, (Objects*) &objects_41_nes, (Mask*) &mask_41_all, (Image*) &text_41_all, (Music*) &music_11_all, room_funct_41_all };
//const Room room_42_nes = { (Image*) &room_42_f_nes, NULL, (Objects*) &objects_42_nes, (Mask*) &mask_42_nes, (Image*) &text_42_all, (Music*) &music_02_all, room_funct_42_all };
//const Room room_43_nes = { (Image*) &room_43_f_nes, NULL, (Objects*) &objects_43_nes, (Mask*) &mask_43_all, (Image*) &text_43_all, (Music*) &music_02_all, room_funct_43_all };
//const Room room_44_nes = { (Image*) &room_44_f_nes, NULL, (Objects*) &objects_44_nes, (Mask*) &mask_44_all, (Image*) &text_44_all, (Music*) &music_04_all, room_funct_44_all };
