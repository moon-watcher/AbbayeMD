#include "../../inc/include.h"

#include "../../res/md/sprites.h"
#include "../../res/md/texts.h"
#include "../../res/md/foreground.h"
#include "../../res/md/background.h"
#include "../../inc/versions/all.h"



//
//commnand, entity type, name,        resource,   animation, palette, vel_x, vel_y, peso, prioridad, does_flip_H, does_flip_V, sequence, timer, collision function, padding top, padding right, padding bottom, padding left
//entity    player       "Jean stays" jean_2x3_md 0          3        0.65   1.0    1.0   0          1            0            {}        15     mcb_player          5            5              0               5
//



const Entity entity_01_md  = {  1, "Jean stays",               0, (SpriteDefinition*) &jean_2x3_md,      PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_02_md  = {  2, "Jean walks",               1, (SpriteDefinition*) &jean_2x3_md,      PAL3, ENTITY_PLAYER,     FIX32(0.65),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_03_md  = {  3, "Jean jumps",               2, (SpriteDefinition*) &jean_2x3_md,      PAL3, ENTITY_PLAYER,     FIX32(0.65),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_04_md  = {  4, "Jean burns",               3, (SpriteDefinition*) &jean_2x3_md,      PAL3, ENTITY_NULL,                 0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  1,  5 } };
const Entity entity_05_md  = {  5, "Jean lie down",            0, (SpriteDefinition*) &jean_3x2_md,      PAL3, ENTITY_PLAYER,               0,           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  9,  0,  9 } }; // {  8,  6,  0, 10 } };
const Entity entity_06_md  = {  6, "Jean sneaks",              1, (SpriteDefinition*) &jean_3x2_md,      PAL3, ENTITY_PLAYER,      FIX32(0.2),           0,  FIX32(0.1), 0, 1, 0, NULL, mcb_player,      0, {  8,  9,  0,  9 } }; // {  8,  6,  0, 10 } };
const Entity entity_07_md  = {  7, "Flying skull",             0, (SpriteDefinition*) &flying_skull_2x2_md, PAL2, ENTITY_ENEMY,    FIX32(0.8),           0,           0, 0, 0, 0, NULL, mcb_udlr,        0, {  4,  5,  3,  4 } };
const Entity entity_08_md  = {  8, "Checkpoint",               4, (SpriteDefinition*) &jean_2x3_md,      PAL3, ENTITY_CHECKPOINT,           0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_09_md  = {  9, "Checkpoint active",        5, (SpriteDefinition*) &jean_2x3_md,      PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_10_md  = { 10, "Yellow hint",             12, (SpriteDefinition*) &objects_2x2_md,   PAL3, ENTITY_HINT,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_11_md  = { 11, "Heart",                   11, (SpriteDefinition*) &objects_2x2_md,   PAL3, ENTITY_HEART,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_12_md  = { 12, "Cross",                    0, (SpriteDefinition*) &objects_2x2_md,   PAL3, ENTITY_CROSS,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_13_md  = { 13, "Inverted cross",           1, (SpriteDefinition*) &objects_2x2_md,   PAL3, ENTITY_INV_CROSS,            0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  4,  4,  4,  4 } };
const Entity entity_14_md  = { 14, "Crusader",                 0, (SpriteDefinition*) &crusaders_2x3_md, PAL2, ENTITY_ENEMY,      FIX32(0.60),           0, FIX32(0.20), 0, 1, 0, NULL, mcb_crusader,    0, {  7,  5,  0,-25 } }; // {  7,  5,  0,  5 } };
const Entity entity_15_md  = { 15, "Water",                    6, (SpriteDefinition*) &enemies_2x1_md,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_16_md  = { 16, "Fire",                    11, (SpriteDefinition*) &enemies_2x2_md,   PAL2, ENTITY_NULL,              zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_17_md  = { 17, "Rat",                      0, (SpriteDefinition*) &rat_2x2_md,       PAL2, ENTITY_ENEMY,      FIX32(0.60),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  0,  0,  0 } };
const Entity entity_18_md  = { 18, "Green spider",             2, (SpriteDefinition*) &enemies_2x2_md,   PAL2, ENTITY_ENEMY,             zero, FIX32(0.75),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
const Entity entity_19_md  = { 19, "Brown spider",             3, (SpriteDefinition*) &enemies_2x2_md,   PAL2, ENTITY_ENEMY,             zero, FIX32(1.00),        zero, 0, 0, 0, NULL, mcb_udlr,        0, {  2,  2,  2,  2 } };
const Entity entity_20_md  = { 20, "Bell",                    14, (SpriteDefinition*) &objects_2x2_md,   PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_21_md  = { 21, "Snail",                    4, (SpriteDefinition*) &enemies_2x1_md,   PAL2, ENTITY_ENEMY,      FIX32(0.30),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  2,  0,  2 } };
const Entity entity_22_md  = { 22, "Switch (off)",             2, (SpriteDefinition*) &objects_2x2_md,   PAL3, ENTITY_SWITCH,            zero,        zero,        zero, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_23_md  = { 23, "Swordsman's skeleton",     2, (SpriteDefinition*) &enemies_2x3_md,   PAL2, ENTITY_ENEMY,      FIX32(0.60),        zero,        zero, 0, 1, 0, NULL, mcb_udlr,        0, {  6,  5,  0,  5 } };
const Entity entity_24_md  = { 24, "Skull wasp",               1, (SpriteDefinition*) &wasp_2x2_md,      PAL2, ENTITY_ENEMY,      FIX32(0.50), FIX32(0.50),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
const Entity entity_25_md  = { 25, "Human wasp",               0, (SpriteDefinition*) &wasp_2x2_md,      PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),        zero, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  2,  2,  2,  2 } };
const Entity entity_26_md  = { 26, "El Coco",                  0, (SpriteDefinition*) &coco_2x2_gold_md, PAL2, ENTITY_ENEMY,      FIX32(0.55), FIX32(0.55),        zero, 0, 1, 0, NULL, mcb_coco,        0, {  2,  2,  2,  2 } };
const Entity entity_27_md  = { 27, "Spitting plant",           0, (SpriteDefinition*) &enemies_2x2_md,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
const Entity entity_28_md  = { 28, "Spit",                     2, (SpriteDefinition*) &enemies_2x1_md,   PAL2, ENTITY_ENEMY,      FIX32(0.75), FIX32(2.20), FIX32(0.10), 0, 0, 0, NULL, mcb_bullet,      0, {  1,  5,  1,  5 } };
const Entity entity_29_md  = { 29, "Fireball",                 6, (SpriteDefinition*) &enemies_2x2_md,   PAL2, ENTITY_ENEMY,                0, FIX32(1.50),           0, 0, 0, 0, NULL, mcb_fireball,    0, {  2,  2,  2,  2 } };
const Entity entity_30_md  = { 30, "Evil bird",                0, (SpriteDefinition*) &enemies_3x2_md,   PAL2, ENTITY_ENEMY,       FIX32(1.0),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  2,  0,  1,  1 } };
const Entity entity_31_md  = { 31, "Spikes",                   8, (SpriteDefinition*) &enemies_2x1_md,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  2,  0,  0,  0 } };
const Entity entity_32_md  = { 32, "Demon",                    3, (SpriteDefinition*) &enemies_2x3_md,   PAL2, ENTITY_ENEMY,      FIX32(0.75),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
const Entity entity_33_md  = { 33, "Archer skeleton",          0, (SpriteDefinition*) &enemies_3x3_md,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  6,  6,  0,  6 } };
const Entity entity_34_md  = { 34, "Arrow",                    5, (SpriteDefinition*) &enemies_2x1_md,   PAL2, ENTITY_ENEMY,      FIX32(2.50),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  2,  3,  2,  3 } };
const Entity entity_35_md  = { 35, "Door",                     0, (SpriteDefinition*) &objects_1x4_md,   PAL3, ENTITY_DOOR,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_36_md  = { 36, "Stone hatch",              0, (SpriteDefinition*) &hatch_2x2_md,     PAL1, ENTITY_HATCH,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_37_md  = { 37, "Hangman",                  7, (SpriteDefinition*) &jean_2x3_md,      PAL3, ENTITY_ENEMY,                0, FIX32(0.60),           0, 0, 1, 0, NULL, mcb_ud_flipH,    0, {  1,  2,  0,  2 } };
const Entity entity_38_md  = { 38, "Rope",                     6, (SpriteDefinition*) &jean_2x3_md,      PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_39_md  = { 39, "Death",                    0, (SpriteDefinition*) &death_4x4_md,     PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  8,  5,  4 } };//{  0,  0,  2,  0 } };
const Entity entity_40_md  = { 40, "Death throw",              1, (SpriteDefinition*) &death_4x4_md,     PAL2, ENTITY_ENEMY,      FIX32(0.65),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  0,  8,  5,  4 } };//{  0,  0,  4,  0 } };
const Entity entity_41_md  = { 41, "Scythe",                   0, (SpriteDefinition*) &death_2x2_md,     PAL2, ENTITY_ENEMY,      FIX32(1.00), FIX32(1.00),           0, 0, 0, 0, NULL, mcb_scythe,      0, {  2,  2,  2,  2 } };//{  1,  1,  1,  1 } };
const Entity entity_42_md  = { 42, "Wheel of faith",           5, (SpriteDefinition*) &objects_2x2_md,   PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
const Entity entity_43_md  = { 43, "Wheel of faith",           6, (SpriteDefinition*) &objects_2x2_md,   PAL3, ENTITY_SWITCH,               0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  1,  1,  1,  1 } };
const Entity entity_44_md  = { 44, "Bell (on)",               15, (SpriteDefinition*) &objects_2x2_md,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_45_md  = { 45, "Switch (on)",              3, (SpriteDefinition*) &objects_2x2_md,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  0,  0,  0,  0 } };
const Entity entity_46_md  = { 46, "Passage",                  8, (SpriteDefinition*) &jean_2x3_md,      PAL3, ENTITY_PASSAGE,              0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, { 16,  7,  0,  7 } };
const Entity entity_47_md  = { 47, "Dragon head",              0, (SpriteDefinition*) &dragon_4x5_md,    PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_48_md  = { 48, "Dragon body",              0, (SpriteDefinition*) &dragon_12x5_md,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_49_md  = { 49, "Dragon fire",              0, (SpriteDefinition*) &dragon_3x6_md,    PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  0,  2,  0,  2 } };
const Entity entity_50_md  = { 50, "Running fire",             0, (SpriteDefinition*) &dragon_2x2_md,    PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  7,  0,  0,  0 } };
const Entity entity_51_md  = { 51, "Gargoyle",                 8, (SpriteDefinition*) &enemies_2x2_md,   PAL2, ENTITY_ENEMY,                0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  7,  2,  0,  2 } };
const Entity entity_52_md  = { 52, "Gargoyle spit",            1, (SpriteDefinition*) &enemies_2x1_md,   PAL2, ENTITY_ENEMY,      FIX32(3.00),           0,           0, 0, 1, 0, NULL, mcb_bullet,      0, {  1,  1,  2,  1 } };
const Entity entity_53_md  = { 53, "Evil cursader",            0, (SpriteDefinition*) &enemies_2x3_md,   PAL2, ENTITY_ENEMY,      FIX32(0.30),           0,           0, 0, 1, 0, NULL, mcb_udlr,        0, {  7,  5,  0,  5 } };
const Entity entity_54_md  = { 54, "Toxic drop",               3, (SpriteDefinition*) &enemies_2x1_md,   PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.09), 0, 0, 0, NULL, mcb_drop,        0, {  0,  3,  0,  3 } };
const Entity entity_55_md  = { 55, "Fish",                     9, (SpriteDefinition*) &enemies_2x2_md,   PAL2, ENTITY_ENEMY,                0,           0, FIX32(0.10), 0, 0, 1, NULL, mcb_null,        0, {  0,  1,  0,  1 } };
const Entity entity_56_md  = { 56, "Splash",                   7, (SpriteDefinition*) &enemies_2x1_md,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_57_md  = { 57, "Satan",                    0, (SpriteDefinition*) &satan_4x6_md,     PAL2, ENTITY_ENEMY,                0, FIX32(0.75),           0, 0, 0, 0, NULL, mcb_udlr,        0, {  } };
const Entity entity_58_md  = { 58, "Satan bullet",             0, (SpriteDefinition*) &satan_1x1_md,     PAL2, ENTITY_ENEMY,      FIX32(1.00),           0,           0, 0, 0, 0, NULL, mcb_bullet,      0, {  1,  1,  1,  1 } };
const Entity entity_59_md  = { 59, "Grial",                    4, (SpriteDefinition*) &objects_2x2_md,   PAL3, ENTITY_GRIAL,                0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_60_md  = { 60, "Red hint",                13, (SpriteDefinition*) &objects_2x2_md,   PAL3, ENTITY_HINT,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  3,  3,  0,  3 } };
const Entity entity_61_md  = { 61, "Catched cross",            0, (SpriteDefinition*) &objects_1x1_md,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_62_md  = { 62, "Bonfire",                  0, (SpriteDefinition*) &bonfire_6x8_md,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_63_md  = { 63, "Bell ringing",             0, (SpriteDefinition*) &objects_4x2_md,   PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_64_md  = { 64, "Satan bullet explosion",   1, (SpriteDefinition*) &satan_1x1_md,     PAL2, ENTITY_NULL,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_65_md  = { 65, "Arrow explosion",         11, (SpriteDefinition*) &enemies_2x1_md,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };
const Entity entity_66_md  = { 66, "Gargoyle spit explosion", 10, (SpriteDefinition*) &enemies_2x1_md,   PAL2, ENTITY_NULL,                 0,           0,           0, 0, 1, 0, NULL, mcb_null,        0, {  } };

const Entity entity_md_81  = { 81, "Leaf (0,1)",               0, (SpriteDefinition*) &leaf1_1x1_md,     PAL1, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_md_82  = { 82, "Leaf (2,1)",               0, (SpriteDefinition*) &leaf2_1x1_md,     PAL2, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_md_83  = { 83, "Passage (0,2)",            0, (SpriteDefinition*) &passage1_2x3_md,  PAL0, ENTITY_PASSAGE,              0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, { 16,  7,  0,  7 } };
const Entity entity_md_84  = { 84, "Passage (4,3)",            0, (SpriteDefinition*) &passage2_2x3_md,  PAL0, ENTITY_PASSAGE,              0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, { 16,  7,  0,  7 } };
const Entity entity_md_85  = { 85, "Don Ramiro (3,3)",         0, (SpriteDefinition*) &ramiro_3x2_md,    PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_md_86  = { 86, "Leaf (1,1)",               0, (SpriteDefinition*) &leaf3_1x1_md,     PAL1, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_md_87  = { 87, "Leaf (1,0)",               0, (SpriteDefinition*) &leaf4_1x1_md,     PAL1, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_md_88  = { 88, "Leaf (4,0)",               0, (SpriteDefinition*) &leaf5_1x1_md,     PAL1, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_md_89  = { 89, "Leaf (4,1)",               0, (SpriteDefinition*) &leaf6_1x1_md,     PAL1, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_md_90  = { 90, "Fire (ending)",            0, (SpriteDefinition*) &fire_2x2_md,      PAL3, ENTITY_NULL,                 0,           0,           0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_md_91  = { 91, "Moco coco",                0, (SpriteDefinition*) &coco_2x2_moco_md,   PAL2, ENTITY_ENEMY,    FIX32(0.45), FIX32(0.45),        zero, 0, 1, 0, NULL, mcb_coco,        0, {  2,  2,  2,  2 } };
const Entity entity_md_92  = { 92, "Purple coco",              0, (SpriteDefinition*) &coco_2x2_purple_md, PAL2, ENTITY_ENEMY,    FIX32(0.70), FIX32(0.70),        zero, 0, 1, 0, NULL, mcb_coco,        0, {  2,  2,  2,  2 } };

// Philippe le saint
const Entity entity_md_93  = { 93, "Philippe stays",           0, (SpriteDefinition*) &philippe_2x3_md,  PAL3, ENTITY_PLAYER,               0,           0, FIX32(0.109), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_md_94  = { 94, "Philippe walks",           1, (SpriteDefinition*) &philippe_2x3_md,  PAL3, ENTITY_PLAYER,     FIX32(0.60),           0, FIX32(0.109), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };
const Entity entity_md_95  = { 95, "Philippe jumps",           2, (SpriteDefinition*) &philippe_2x3_md,  PAL3, ENTITY_PLAYER,     FIX32(0.60),           0, FIX32(0.109), 0, 1, 0, NULL, mcb_player,      0, {  5,  5,  0,  5 } };

const Entity entity_md_96  = { 96, "Leaf (2,1)",               0, (SpriteDefinition*) &leaf7_1x1_md,     PAL1, ENTITY_NULL,                 0,           0,            0, 0, 0, 0, NULL, mcb_null,        0, {  } };
const Entity entity_md_97  = { 97, "Philippe like crusaders",  1, (SpriteDefinition*) &philippe_2x3_md,  PAL3, ENTITY_NULL,       FIX32(0.60),           0,            0, 0, 1, 0, NULL, mcb_null,        0, {  5,  5,  0,  5 } };

const Entity entity_md_98  = { 98, "Evil Jean",                0, (SpriteDefinition*) &evil_jean_2x3_md, PAL3, ENTITY_NULL,                 0,           0,            0, 0, 1, 0, NULL, mcb_null,        0, {  } };


////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #0 MD
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////



const Objects objects_10_md = // A prayer of Hope
{
      {
            { (Entity*) &entity_md_87, -10, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_87, -10, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_87, -20, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_87, -30, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_87, -30, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_87, -30, 136,  0,  0 }, // Leaf
	}
};



const Objects objects_20_md = // Tower of the Bell // OK // MD: Hacer que la campana se mueva al tocarla
{
      {
            { (Entity*) &entity_20_md,  40,   8,  0,  0 }, // Bell
            { (Entity*) &entity_17_md,  64, 144, +1,  0 }, // Rat
            { (Entity*) &entity_17_md, 216, 144, -1,  0 }, // Rat
            { (Entity*) &entity_11_md,  96,  56,  0,  0 }, // Heart

            { (Entity*) &entity_md_97, 30, 48,  0,  0 }, // Philippe like crusaders
	}
};


const Objects objects_30_md = // Wine supplies // OK
{
      {
            { (Entity*) &entity_18_md,  36, 121,  0, +1 }, // Green spider
            { (Entity*) &entity_19_md,  60, 131,  0, -1 }, // Brown spider
            { (Entity*) &entity_18_md,  76, 100,  0, +1 }, // Green spider
            { (Entity*) &entity_10_md, 144, 128,  0,  0 }, // Brown spider
            { (Entity*) &entity_19_md, 196, 130,  0, -1,  0, FIX32(0.5) }, // Brown spider
            { (Entity*) &entity_12_md, 220, 140,  0,  0 }, // Cross
	}
};


const Objects objects_40_md =
{
      {

            { (Entity*) &entity_md_88, -10, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_88, -20, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_88, -30, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_88, -30, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_88, -30, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_88, -30, 136,  0,  0 }, // Leaf

            { (Entity*) &entity_md_97, 20, 56,  0,  0 }, // Philippe like crusaders
	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #1 MD
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_01_md = // Escape !!! // OK
{
      {
            { (Entity*) &entity_md_81, -10, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_81, -20, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_81, -30, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_81, -30, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_81, -30, 136,  0,  0 }, // Leaf

            { (Entity*) &entity_14_md,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_md,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_md,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_md, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_md, -130, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_md, -150, 136, +1,  0 }, // Crusader
	}
};


const Objects objects_11_md = // Death is close !!! // OK
{
      {
            { (Entity*) &entity_35_md, 248, 112,  0,  0,  0,  0,  1 }, // Door

            { (Entity*) &entity_md_86, -10, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_86, -20, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_86, -30, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_86, -30, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_86, -30, 136,  0,  0 }, // Leaf

            { (Entity*) &entity_14_md,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_md,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_md,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_md, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_md, -130, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_md, -150, 136, +1,  0 }, // Crusader
      }
};


const Objects objects_21_md = // Abandone church // OK
{
      {
            { (Entity*) &entity_35_md,   0, 112 }, // Door

            { (Entity*) &entity_md_96, -10, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_96, -20, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_96, -30, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_96, -30, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_96, -30, 136,  0,  0 }, // Leaf

            { (Entity*) &entity_14_md,  -50, 120, +1,  0 }, // Crusader
            { (Entity*) &entity_14_md,  -70, 120, +1,  0 }, // Crusader
            { (Entity*) &entity_14_md,  -90, 120, +1,  0 }, // Crusader
            { (Entity*) &entity_14_md, -110, 120, +1,  0 }, // Crusader
            //{ (Entity*) &entity_14_md, -130, 120, +1,  0 }, // Crusader
            // and me
      }
};


const Objects objects_31_md = // The Altar // OK
{
      {
            { (Entity*) &entity_35_md, 248, 112,  0,  0,  0,  0,  1 }, // Door
            { (Entity*) &entity_36_md, 208, 160,  0,  0 }, // Stone hatch
            { (Entity*) &entity_07_md, 144,  44, +1,  0 }, // Flying skull
            { (Entity*) &entity_07_md,  88,  84, +1,  0 }, // Flying skull
            { (Entity*) &entity_10_md, 212, 140,  0,  0 }, // Yellow hint
            { (Entity*) &entity_08_md,  56, 136,  0,  0 }, // Checkpoint

            { (Entity*) &entity_md_97, 160,  104,  0,  0 }, // Philippe like crusaders
	}
};


const Objects objects_41_md = // Hangman Tree // OK
{
      {
            { (Entity*) &entity_md_89, -10, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_89, -10, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_89, -20, 136,  0,  0 }, // Leaf
            { (Entity*) &entity_md_89, -30, 136,  0,  0 }, // Leaf
//            { (Entity*) &entity_md_89, -30, 136,  0,  0 }, // Leaf

            { (Entity*) &entity_37_md, 152, 104,  0, +1 }, // Hangman
            { (Entity*) &entity_38_md, 152,  88,  0,  0 }, // Rope
            { (Entity*) &entity_38_md, 152, 112,  0,  0 }, // Rope

            { (Entity*) &entity_37_md, 176,  76,  0, +1 }, // Hangman
            { (Entity*) &entity_38_md, 176,  64,  0,  0 }, // Rope
            { (Entity*) &entity_38_md, 176,  88,  0,  0 }, // Rope
            { (Entity*) &entity_38_md, 176, 102,  0,  0 }, // Rope

            { (Entity*) &entity_37_md,  72,  88,  0, +1 }, // Hangman
            { (Entity*) &entity_38_md,  72,  72,  0,  0 }, // Pope
            { (Entity*) &entity_38_md,  72,  96,  0,  0 }, // Pope
            { (Entity*) &entity_38_md,  72, 116,  0,  0 }, // Pope

            { (Entity*) &entity_37_md,  48,  72,  0, +1 }, // Hangman
            { (Entity*) &entity_38_md,  48,  56,  0,  0 }, // Rope
            { (Entity*) &entity_38_md,  48,  80,  0,  0 }, // Rope
            { (Entity*) &entity_38_md,  48, 104,  0,  0 }, // Pope

            { (Entity*) &entity_21_md, 152,  48, -1,  0 }, // Snail
            { (Entity*) &entity_21_md, 136, 152, -1,  0 }, // Snail
            { (Entity*) &entity_22_md, 216, 144,  0,  0 }, // Switch  // 21
            { (Entity*) &entity_13_md,  48,  32,  0,  0 }, // Inverted cross

            { (Entity*) &entity_md_97,  79,  24,  0,  0 }, // Philippe like crusaders
	}
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #2 MD
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_02_md = // Pestilent beast // OK
{
      {
            { (Entity*) &entity_47_md, 120,  10,  0,  0 }, // Dragon head #0
            { (Entity*) &entity_48_md, 112,   8,  0,  0 }, // Dragon body #1
            { (Entity*) &entity_49_md, 125,  51,  0,  0 }, // Dragon fire #2

            { (Entity*) &entity_50_md, -40, -40,  0, +1 }, // Runnig fire #3
            { (Entity*) &entity_50_md, -40, -40,  0, -1 }, // Runnig fire #4
            { (Entity*) &entity_50_md, -40, -40,  0, +1 }, // Runnig fire #5
            { (Entity*) &entity_50_md, -40, -40,  0, -1 }, // Runnig fire #6
            { (Entity*) &entity_50_md, -40, -40,  0, +1 }, // Runnig fire #7
            { (Entity*) &entity_50_md, -40, -40,  0, -1 }, // Runnig fire #8

            { (Entity*) &entity_22_md,  56,  32,  0,  0 }, // Switch      #9
            { (Entity*) &entity_11_md,  80, 144,  0,  0 }, // Heart
            { (Entity*) &entity_12_md, 204,  30,  0,  0 }, // Cross

            //{ (Entity*) &entity_46_md, 184, 136,  0,  0 }, // Passage
            { (Entity*) &entity_md_83, 184, 136,  0,  0 }, // Passage

            { (Entity*) &entity_md_97,  16,  24,  0,  0 }, // Philippe like crusaders
            { (Entity*) &entity_md_97, 164, 136,  0,  0 }, // Philippe like crusaders
      }
};


const Objects objects_12_md = // Cave of illusions // OK // TODO: Mejorar el movimiento del coco
{
      {
            { (Entity*) &entity_11_md,  16,  32,  0,  0 }, // Heart
            { (Entity*) &entity_26_md, 128,  72,  0,  0 }, // El Coco
            { (Entity*) &entity_md_91, 128,  72,  0,  0 }, // Moco coco
            { (Entity*) &entity_md_92, 128,  72,  0,  0 }, // Purple oco
            { (Entity*) &entity_08_md, 112, 136,  0,  0 }, // Checkpoint
      }
};


const Objects objects_22_md = // Plagued ruins // OK
{
      {
            { (Entity*) &entity_10_md,  80, 142,  0,  0 }, // Yellow hint
            { (Entity*) &entity_11_md, 128,  48,  0,  0 }, // Heart
            { (Entity*) &entity_24_md,  48,  24,  0, -1 }, // Skull wasp
            { (Entity*) &entity_24_md, 128, 128,  0, -1 }, // Skull wasp

            { (Entity*) &entity_25_md, 160,  40,  0, -1 }, // Human wasp
            { (Entity*) &entity_25_md,  32, 112,  0, -1 }, // Human wasp
            { (Entity*) &entity_25_md, 176, 128,  0, -1 }, // Human wasp
            { (Entity*) &entity_08_md,  64,  56,  0,  0 }, // Checkpoint

            { (Entity*) &entity_md_97,  79,  8,  0,  0 }, // Philippe like crusaders
	}
};


const Objects objects_32_md = // Catacombs // OK
{
      {
            { (Entity*) &entity_23_md,  80,  88, -1,  0 }, // Swordsman's skeleton
            { (Entity*) &entity_23_md, 128, 136, -1,  0 }, // Swordsman's skeleton
            { (Entity*) &entity_12_md, 144, 144,  0,  0 }, // Cross
	}
};


const Objects objects_42_md = // Hidden garden // OK
{
      {
            { (Entity*) &entity_12_md,  72,  32,   0,  0 }, // Cross          - #01
            { (Entity*) &entity_10_md, 152,  78,   0,  0 }, // Yellow hint    - #02
            { (Entity*) &entity_21_md, 168, 152,  -1,  0 }, // Snail          - #03
            { (Entity*) &entity_18_md,  48,  24,   0, +1,  0, FIX32(0.60) }, // Green spider- #04

            { (Entity*) &entity_27_md, 224,  48,   0,  0 }, // Spitting plant // 05
            { (Entity*) &entity_28_md,   0, -60, -60,  0 }, // Spit           // 06
            { (Entity*) &entity_28_md,   0, -60, -60,  0 }, // Spit           // 07

            { (Entity*) &entity_27_md, 136,  32,   0,  0 }, // Spitting plant // 08
            { (Entity*) &entity_28_md,   0, -60, -60,  0 }, // Spit           // 09
            { (Entity*) &entity_28_md,   0, -60, -60,  0 }, // Spit           // 10

            { (Entity*) &entity_27_md, 112, 112,   0,  0 }, // Spitting plant // 11
            { (Entity*) &entity_28_md,   0, -60, -60,  0 }, // Spit           // 12
            { (Entity*) &entity_28_md,   0, -60, -60,  0 }, // Spit           // 13

            { (Entity*) &entity_08_md,  64, 136,   0,  0 }, // Checkpoint     - #00

            { (Entity*) &entity_md_97, 200,  72,  0,  0, 0, 0, -1 }, // Philippe like crusaders
            { (Entity*) &entity_md_97,  75,  24,  0,  0, 0, 0, +1 }, // Philippe like crusaders
      }
};




////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #3 MD
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_03_md = // Gloomy tunnels // OK
{
      {
            { (Entity*) &entity_54_md,  32,  88,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_md,  88,  32,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_md,  88,  88,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_md, 208,  32,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_md, 192,  32,  0,  0 }, // Toxic drop

            { (Entity*) &entity_11_md,  24, 112,  0,  0 }, // Heart
            { (Entity*) &entity_53_md,  80,  56, -1,  0 }, // Evil crusader
            { (Entity*) &entity_53_md, 192, 136, -1,  0 }, // Evil crusader
            { (Entity*) &entity_13_md, 224,  64,  0,  0 }, // Inverted cross

            { (Entity*) &entity_08_md, 168,  56,  0,  0 }, // Checkpoint
      }
};


const Objects objects_13_md = // Lake of despair // OK
{
      {
            { (Entity*) &entity_15_md,  48, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_md,  64, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_md,  80, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_md,  96, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_md, 112, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_md, 128, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_md, 144, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_md, 160, 168,  0,  0 }, // Water

            { (Entity*) &entity_56_md,  56, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_md, 116, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_md, 156, 160,  0,  0 }, // Splash

            { (Entity*) &entity_55_md,  56, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_md, 116, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_md, 156, 168,  0,  0 }, // Fish

            { (Entity*) &entity_12_md,  16,  48,  0,  0 }, // Cross
            { (Entity*) &entity_10_md, 176,  40,  0,  0 }, // Yellow hint
            { (Entity*) &entity_18_md, 144,  24,  0, +1, 0, FIX32(0.60)}, // Green spider

            { (Entity*) &entity_md_97, 90,  128,  0,  0 }, // Philippe like crusaders
	}
};


const Objects objects_23_md = // The wheel of Faith // OK
{
      {
            { (Entity*) &entity_33_md,  12,  24,  0,  0 }, // Archer skeleton
            { (Entity*) &entity_33_md, 221,  72, -1,  0 }, // Archer skeleton
            { (Entity*) &entity_33_md, 116, 104, -1,  0 }, // Archer skeleton
            { (Entity*) &entity_34_md, -20, -20,  0,  0 }, // Arrow
            { (Entity*) &entity_34_md, -20, -20,  0,  0 }, // Arrow
            { (Entity*) &entity_34_md, -20, -20,  0,  0 }, // Arrow

            { (Entity*) &entity_42_md, 120,  16,  0,  0 }, // Wheel of faith

            { (Entity*) &entity_13_md,  24,  80,  0,  0 }, // Inverted cross
            { (Entity*) &entity_12_md, 216, 144,  0,  0 }, // Cross
            { (Entity*) &entity_11_md, 168,  80,  0,  0 }, // Heart

            //{ (Entity*) &entity_65_md, -80, -80,  0,  0 }, // Arrow explosion

            { (Entity*) &entity_md_97,  175,  120,  0,  0 }, // Philippe like crusaders
      }
};


const Objects objects_33_md = // Banquet of Death // OK :)
{
      {
            { (Entity*) &entity_12_md,  24,  40,  0,  0 }, // Cross
            { (Entity*) &entity_11_md, 120,  88,  0,  0 }, // Heart
            { (Entity*) &entity_39_md,  16,   8, -1,  0 }, // Death
            { (Entity*) &entity_41_md, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_md, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_md, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_md, -16, -16,  0, +1 }, // Scythe
            { (Entity*) &entity_41_md, -16, -16,  0, +1 }, // Scythe

            { (Entity*) &entity_md_85,  16, 144,  0, 0 }, // Don Ramiro
      }
};


const Objects objects_43_md = // Underground river // OK
{
      {
            { (Entity*) &entity_35_md,   0, 128,  0,  0 }, // Door

            { (Entity*) &entity_15_md, 112, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_md, 128, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_md, 144, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_md, 160, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_md, 176, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_md, 192, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_md, 208, 168,  0,  0 }, // Water
            { (Entity*) &entity_15_md, 224, 168,  0,  0 }, // Water

            { (Entity*) &entity_md_84, 168, 120,  0,  0 }, // Passage

            { (Entity*) &entity_18_md,  88,  48,  0, +1 }, // Green spider
            { (Entity*) &entity_12_md,  24,  16,  0,  0 }, // Cross
            { (Entity*) &entity_11_md, 200,  64,  0,  0 }, // Heart

            { (Entity*) &entity_54_md,  48,   8,  0,  0 }, // Toxic drop
            { (Entity*) &entity_54_md, 128,   8,  0,  0 }, // Toxic drop

            { (Entity*) &entity_56_md, 116, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_md, 192, 160,  0,  0 }, // Splash
            { (Entity*) &entity_56_md, 144, 160,  0,  0 }, // Splash

            { (Entity*) &entity_55_md, 116, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_md, 192, 168,  0,  0 }, // Fish
            { (Entity*) &entity_55_md, 144, 168,  0,  0 }, // Fish

            { (Entity*) &entity_08_md,  64,  88,  0,  0 }, // Checkpoint

            { (Entity*) &entity_md_97, 200,  56,  0,  0 }, // Philippe like crusaders
            { (Entity*) &entity_md_97, 20,  136,  0,  0 }, // Philippe like crusaders
      }

};





////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Row #4 MD
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


const Objects objects_04_md = // Unexpected gate // OK
{
      {
            { (Entity*) &entity_51_md, 216,  24,  0,  0,  0,  0, -1 }, // Gargoyle
            { (Entity*) &entity_52_md, -40, -40,  0,  0             }, // Gargoyle spit
            //{ (Entity*) &entity_66_md, -40, -40,  0,  0             }, // Gargoyle spit explosion

            { (Entity*) &entity_30_md,  36,  88, +1,  0, FIX32(0.60) }, // Evil bird

            { (Entity*) &entity_35_md, 248, 112,  0,  0,  0,  0, -1 }, // Door // 04

            { (Entity*) &entity_22_md, 192,  48,  0,  0 }, // Switch
            { (Entity*) &entity_53_md, 136, 136, -1,  0 }, // Evil crusader

            { (Entity*) &entity_md_97,  60,  48,  0,  0, 0, 0, -1 }, // Philippe like crusaders
            { (Entity*) &entity_md_97, 200, 136,  0,  0, 0, 0, -1 }, // Philippe like crusaders
	}
};


const Objects objects_14_md = // Evil church // OK
{
      {
            { (Entity*) &entity_10_md,  24,  46,  0,  0 }, // Yellow hint

            { (Entity*) &entity_16_md, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_32_md,  16, 136, -1,  0, FIX32(0.60) }, // Demon
            { (Entity*) &entity_32_md,  88,  40, -1,  0, FIX32(0.60) }, // Demon
            { (Entity*) &entity_32_md, 128, 136, -1,  0, FIX32(0.60) }, // Demon

            { (Entity*) &entity_33_md, 190, 120,  0,  0 }, // Archer skeleton
            { (Entity*) &entity_34_md, -60, -60, -1,  0 }, // Arrow

            { (Entity*) &entity_08_md, 152,  40,  0,  0 }, // Checkpoint

            //{ (Entity*) &entity_65_md, -80, -80,  0,  0 }, // Arrow explosion

            { (Entity*) &entity_md_97, 220,  88,  0,  0, 0, 0, -1 }, // Philippe like crusaders
	}
};


const Objects objects_24_md = // Tortured souls // OK
{
      {
            { (Entity*) &entity_51_md, 224, 104,  0,  0,  0,  0, -1 }, // Gargoyle
            { (Entity*) &entity_52_md, -40, -40,  0,  0             }, // Gargoyle spit
            //{ (Entity*) &entity_66_md, -40, -40,  0,  0             }, // Gargoyle spit explosion

            { (Entity*) &entity_13_md, 220, 142,  0,  0 }, // Inverted cross

            { (Entity*) &entity_31_md, 192, 152 }, // Spikes

            { (Entity*) &entity_23_md,  60,   8, -1,  0, FIX32(0.70),  0, 0, 1 }, // Swordsman's skeleton
            { (Entity*) &entity_23_md, 140,  64, -1,  0, FIX32(0.60),  0, 0, 0 }, // Swordsman's skeleton
            { (Entity*) &entity_32_md, 208,  64, -1,  0,           0,  0, 0, 0 }, // Demon

            { (Entity*) &entity_16_md,  80, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_md,  96, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_md, 144, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_md, 160, 160,  0,  0 }, // Fire

            { (Entity*) &entity_29_md,  80, 136,  0, +1,  0, FIX32(1.75) }, // Fireball
            { (Entity*) &entity_29_md,  96, 152,  0, +1,  0, FIX32(1.25) }, // Fireball
            { (Entity*) &entity_29_md, 152,  96,  0, +1,  0, FIX32(1.25) }, // Fireball

            { (Entity*) &entity_md_97,  120,  136,  0,  0 }, // Philippe like crusaders
	}
};


const Objects objects_34_md = // Ashes to ashes // OK
{
      {
            { (Entity*) &entity_35_md, 248, 128,  0,  0,  0,  0,  1 }, // Door

            { (Entity*) &entity_16_md,  16, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_md,  32, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_md,  48, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_md,  80, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_md,  96, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_md, 112, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_md, 160, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_md, 176, 160,  0,  0 }, // Fire
            { (Entity*) &entity_16_md, 192, 160,  0,  0 }, // Fire

            { (Entity*) &entity_29_md,  48,  24,  0, +1 }, // Fireball
            { (Entity*) &entity_29_md,  80,  88,  0, +1 }, // Fireball
            { (Entity*) &entity_29_md, 160,  72,  0, +1 }, // Fireball

            { (Entity*) &entity_11_md,  64, 144,  0,  0 }, // Heart
            { (Entity*) &entity_11_md, 184,  56,  0,  0 }, // Heart
            { (Entity*) &entity_30_md, 100,  32, +1,  0              }, // Evil bird
            { (Entity*) &entity_30_md, 212, 104, +1,  0, FIX32(0.75) }, // Evil bird
            { (Entity*) &entity_23_md, 160,   8, -1,  0, FIX32(0.75),  0, 0, 1 }, // Swordsman's skeleton


            { (Entity*) &entity_md_97, 230, 136,  0,  0 }, // Philippe like crusaders
            { (Entity*) &entity_md_97, 203, 136,  0,  0 }, // Philippe like crusaders
            { (Entity*) &entity_md_97, 216, 128,  0,  0 }, // Philippe like crusaders
            { (Entity*) &entity_md_97, 140, 136,  0,  0 }, // Philippe like crusaders
            //{ (Entity*) &entity_md_97,  94,  56,  0,  0 }, // Philippe like crusaders

            { (Entity*) &entity_08_md, 136, 136,  0,  0 }, // Checkpoint
	}
};



const Objects objects_44_md = // Satan!!! // TODO
{
      {
            { (Entity*) &entity_35_md,   0, 128 }, // Door

            { (Entity*) &entity_14_md,  -50, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_md,  -70, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_md,  -90, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_md, -110, 136, +1,  0 }, // Crusader
            { (Entity*) &entity_14_md, -130, 136, +1,  0 }, // Crusader
//            { (Entity*) &entity_14_md, -150, 136, +1,  0 }, // Crusader

            { (Entity*) &entity_59_md, 120,  16,  0,  0 }, // Grial
            { (Entity*) &entity_60_md, 222, 111,  0,  0 }, // Red hint

            { (Entity*) &entity_58_md, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_md, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_md, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_md, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_md, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_md, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_md, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_md, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_md, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_md, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_md, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_58_md, -50, -50,  0,  0 }, // Satan bullet
            { (Entity*) &entity_57_md, 196,  80,  0, +1 }, // Satan

            { (Entity*) &entity_61_md, 128, 190,  0,  0 }, // Catched cross // puts out of the screen
            //{ (Entity*) &entity_64_md, 128, 190,  0,  0 }, // Satan bullet explosion // Used to be saved in VRAM
      }
};






////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Other MD
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////




const Objects objects_prologue_md =
{
      {
            { (Entity*) &entity_02_md,  -16, 118, +1,  0  }, // Jean walks

            { (Entity*) &entity_14_md,  -70, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_md,  -95, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_md, -120, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_md, -145, 116, +1,  0, FIX32(0.50) }, // Crusader
            { (Entity*) &entity_14_md, -170, 116, +1,  0, FIX32(0.50) }, // Crusader
      }
};

const Objects objects_burnhim_md =
{
      {
//            { (Entity*) &entity_14_md,   36, 136 }, // Crusader
            { (Entity*) &entity_14_md,   56, 136 }, // Crusader
            { (Entity*) &entity_14_md,   80, 136 }, // Crusader
            { (Entity*) &entity_14_md,  160, 136 }, // Crusader
            { (Entity*) &entity_14_md,  184, 136 }, // Crusader

            { (Entity*) &entity_md_90,  104, 128 }, // Fire (ending)
            { (Entity*) &entity_md_90,  120, 128 }, // Fire (ending)
            { (Entity*) &entity_md_90,  136, 128 }, // Fire (ending)

            { (Entity*) &entity_03_md,  120, 118 }, // Jean stays
            { (Entity*) &entity_62_md,  104,  96 }, // Bonfire
	}
};

const Objects objects_info_md =
{
      {
            { (Entity*) &entity_02_md,  12,  20,  0,  0,  0,  0, -1, 0 }, // Jean walks
            { (Entity*) &entity_22_md,  12, 192,  0,  0,  0,  0, -1, 0 }, // Switch
            { (Entity*) &entity_20_md, 208, 188 }, // Bell
            { (Entity*) &entity_59_md, 192, 164 }, // Grial
            { (Entity*) &entity_42_md, 208,  28 }, // Wheel of faith
            { (Entity*) &entity_10_md, 110,  52 }, // Yellow hint
            { (Entity*) &entity_11_md,  32,  76 }, // Heart
            { (Entity*) &entity_12_md,   8, 100 }, // Cross
            { (Entity*) &entity_08_md, 150,  84 }, // Checkpoint

            //{ (Entity*) &entity_46_md,  36, 144 }, // Passage
            { (Entity*) &entity_md_83,  36, 144 }, // Passage

            { (Entity*) &entity_39_md,  98, 128,  0,  0,  0,  0, -1, 0 }, // Death

      }
}
;




const Mask mask_01_md =
{
   {
      {    0,  0,    0,    0,    0,    0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {    0,  0,    0,    0,    0,    0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {    0,  0,    0,    0,    0,    0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {    0,  0,    0,    0,    0,    0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {    0,  0,    0,    0,    0,    0,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {    0,  0,    0,    2,    0,    0,    2,  0,  2,  2,  2,  2,  0,  2,  0,  0,  0,  0,  2,  0,  0,  0,  0,  2,  2,  2,  2,  0,  2,  0,  0,  0 },
      {    0,  0,    0,    2,    0,    0,    2,  0,  2,  0,  0,  0,  0,  2,  0,  0,  0,  0,  2,  0,  0,  0,  0,  2,  0,  0,  2,  0,  2,  0,  0,  0 },
      {    0,  0,    0,    2,    0,    0,    2,  0,  2,  0,  0,  0,  0,  2,  0,  0,  0,  0,  2,  0,  0,  0,  0,  2,  0,  0,  2,  0,  2,  0,  0,  0 },
      {    0,  0,    0,    2,    2,    2,    2,  0,  2,  2,  2,  0,  0,  2,  0,  0,  0,  0,  2,  0,  0,  0,  0,  2,  0,  0,  2,  0,  2,  0,  0,  0 },
      {    0,  0,    0,    2,    0,    0,    2,  0,  2,  0,  0,  0,  0,  2,  0,  0,  0,  0,  2,  0,  0,  0,  0,  2,  0,  0,  2,  0,  2,  0,  0,  0 },
      {    0,  0,    0,    2,    0,    0,    2,  0,  2,  0,  0,  0,  0,  2,  0,  0,  0,  0,  2,  0,  0,  0,  0,  2,  0,  0,  2,  0,  0,  0,  0,  0 },
      {    1,  1,    0,    2,    0,    0,    2,  0,  2,  2,  2,  2,  0,  2,  2,  2,  2,  0,  2,  2,  2,  2,  0,  2,  2,  2,  2,  0,  2,  0,  0,  0 },
      {    1,  1,   64,   64,   64,   64,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {    1,  1, 64+1, 64+1, 64+1, 64+1, 64+1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {    1, 64, 64+1, 64+1, 64+1, 64+1,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {    1,  0,   64,   64,   64,   64,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {    1,  0,   64,   64,   64,   64,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {    1,  0,   64,   64,   64,   64,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0 },
      {    1,  0, 64+1,   64,   64, 64+1,    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0 },
      { 64+1,  0, 64+1,   64,   64, 64+1,    0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0, 64,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0, 64, 64 },
      {    1,  1,    1,    1,    1,    1,    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {    1,  1,    1,    1,    1,    1,    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};

const Mask mask_41_md =
{
   {
      {  1,  1,  1, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0,  0,  1,  1 },
      {  1,  1,  1, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0, 64, 64, 64, 64, 64, 64, 64,  0,  2,  0, 64, 64, 64, 64, 64, 64,  0, 64, 64, 64,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  1,  0,  0,  0, 64,  0, 64, 64,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  2,  2,  2,  2,  2,  2,  2,  2,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0, 16,  0,  0,  0,  2,  0,  1,  1 },
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
      {  1,  1,  1,  1,  0, 64,  0,  0,  0, 64, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,64+16, 64,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};

const Mask mask_02_md =
{
   {
      {  1,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
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
      {  1,  1,  0,  0,  0,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0, 64,  0,  0,  0,  0,  0,  8,  8,  0,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0, 64,  0,  0,  0,  0,  0,  8,  8,  0,  1,  1,  1,  1,  1,  1 },
      {  1,  1, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  8,  8,  0,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  2,  0,  0,  0,  1,  1,  1,  1,  1,  1,  2,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};


const Mask mask_42_md =
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


const Mask mask_33_md =
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
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  0,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  1,  1,  0,  0,  0,  1,  0,  0,  1,  1,  0,  0,  1,  0,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 68, 68,  1,  1, 68, 68, 68, 68, 68, 68,  1,  1, 68, 68, 68, 68,  1,  1,  1,  1,  1,  1 }
   }
};

const Mask mask_44_md =
{
   {
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  1,  1 },
      {  1,  1,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  1,  1 },
      {  1,  1,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  1,  1 },
      {  1,  1,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  1,  1 },
      {  1,  1,  0,  0, 64,  0,  0,  0,  0,  0,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
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


const Mask mask_05_md =
{
   {
      {  1,  1,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  0,  0,  0,  0,  0,  0, 64, 64,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  1,  1,  0,  0,  0,  0,  0,  0, 64, 64,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  1,  1,  0,  0,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 64,  0,  0,  0,  0,  0,  1,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64,  0,  0,  0,  0,  1,  1,  0,  0,  1,  1 },
      {  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  0,  0,  0,  0, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,64+1,64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,64+1, 1,  1,  1,  1,  1,  1,  1,  1,  1 },
      {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
   }
};




const Room room_00_md = { (Image*) &room_00_f_md, NULL,                   (Objects*) &objects_null,  (Mask*) &mask_00_all, (Image*) &text_00_md, (Music*) &music_00_all,         room_null };
const Room room_01_md = { (Image*) &room_01_f_md, (Image*) &room_01_b_md, (Objects*) &objects_01_md, (Mask*) &mask_01_md,  (Image*) &text_01_md, (Music*) &music_08_all, room_funct_01_all };
const Room room_02_md = { (Image*) &room_02_f_md, (Image*) &room_02_b_md, (Objects*) &objects_02_md, (Mask*) &mask_02_md,  (Image*) &text_02_md, (Music*) &music_02_all, room_funct_02_all };
const Room room_03_md = { (Image*) &room_03_f_md, (Image*) &room_03_b_md, (Objects*) &objects_03_md, (Mask*) &mask_03_all, (Image*) &text_03_md, (Music*) &music_02_all, room_funct_03_all };
const Room room_04_md = { (Image*) &room_04_f_md, (Image*) &room_04_b_md, (Objects*) &objects_04_md, (Mask*) &mask_04_all, (Image*) &text_04_md, (Music*) &music_02_all, room_funct_04_all };
const Room room_05_md = { (Image*) &room_05_f_md, (Image*) &room_05_b_md, (Objects*) &objects_null,  (Mask*) &mask_05_md,  (Image*) &text_40_md, (Music*) &music_02_all,         room_null };

const Room room_10_md = { (Image*) &room_10_f_md, (Image*) &room_10_b_md, (Objects*) &objects_10_md, (Mask*) &mask_10_all, (Image*) &text_10_md, (Music*) &music_10_all, room_funct_10_all };
const Room room_11_md = { (Image*) &room_11_f_md, (Image*) &room_11_b_md, (Objects*) &objects_11_md, (Mask*) &mask_11_all, (Image*) &text_11_md, (Music*) &music_08_all, room_funct_11_all };
const Room room_12_md = { (Image*) &room_12_f_md, (Image*) &room_12_b_md, (Objects*) &objects_12_md, (Mask*) &mask_12_all, (Image*) &text_12_md, (Music*) &music_02_all, room_funct_12_all };
const Room room_13_md = { (Image*) &room_13_f_md, (Image*) &room_13_b_md, (Objects*) &objects_13_md, (Mask*) &mask_13_all, (Image*) &text_13_md, (Music*) &music_02_all, room_funct_13_all };
const Room room_14_md = { (Image*) &room_14_f_md, NULL,                   (Objects*) &objects_14_md, (Mask*) &mask_14_all, (Image*) &text_14_md, (Music*) &music_03_all, room_funct_14_all };

const Room room_20_md = { (Image*) &room_20_f_md, (Image*) &room_20_b_md, (Objects*) &objects_20_md, (Mask*) &mask_20_all, (Image*) &text_20_md, (Music*) &music_01_all, room_funct_20_all };
const Room room_21_md = { (Image*) &room_21_f_md, (Image*) &room_21_b_md, (Objects*) &objects_21_md, (Mask*) &mask_21_all, (Image*) &text_21_md, (Music*) &music_01_all, room_funct_21_all };
const Room room_22_md = { (Image*) &room_22_f_md, (Image*) &room_22_b_md, (Objects*) &objects_22_md, (Mask*) &mask_22_all, (Image*) &text_22_md, (Music*) &music_01_all, room_funct_22_all };
const Room room_23_md = { (Image*) &room_23_f_md, (Image*) &room_23_b_md, (Objects*) &objects_23_md, (Mask*) &mask_23_all, (Image*) &text_23_md, (Music*) &music_01_all, room_funct_23_all };
const Room room_24_md = { (Image*) &room_24_f_md, (Image*) &room_24_b_md, (Objects*) &objects_24_md, (Mask*) &mask_24_all, (Image*) &text_24_md, (Music*) &music_03_all, room_funct_24_all };

const Room room_30_md = { (Image*) &room_30_f_md, (Image*) &room_30_b_md, (Objects*) &objects_30_md, (Mask*) &mask_30_all, (Image*) &text_30_md, (Music*) &music_01_all, room_funct_30_all };
const Room room_31_md = { (Image*) &room_31_f_md, (Image*) &room_31_b_md, (Objects*) &objects_31_md, (Mask*) &mask_31_all, (Image*) &text_31_md, (Music*) &music_01_all, room_funct_31_all };
const Room room_32_md = { (Image*) &room_32_f_md, (Image*) &room_32_b_md, (Objects*) &objects_32_md, (Mask*) &mask_32_all, (Image*) &text_32_md, (Music*) &music_01_all, room_funct_32_all };
const Room room_33_md = { (Image*) &room_33_f_md, (Image*) &room_33_b_md, (Objects*) &objects_33_md, (Mask*) &mask_33_md,  (Image*) &text_33_md, (Music*) &music_04_all, room_funct_33_all };
const Room room_34_md = { (Image*) &room_34_f_md, (Image*) &room_34_b_md, (Objects*) &objects_34_md, (Mask*) &mask_34_all, (Image*) &text_34_md, (Music*) &music_03_all, room_funct_34_all };

const Room room_40_md = { (Image*) &room_40_f_md, (Image*) &room_40_b_md, (Objects*) &objects_40_md, (Mask*) &mask_40_all, (Image*) &text_40_md, (Music*) &music_00_all, room_funct_40_all };
const Room room_41_md = { (Image*) &room_41_f_md, (Image*) &room_41_b_md, (Objects*) &objects_41_md, (Mask*) &mask_41_md,  (Image*) &text_41_md, (Music*) &music_11_all, room_funct_41_all };
const Room room_42_md = { (Image*) &room_42_f_md, (Image*) &room_42_b_md, (Objects*) &objects_42_md, (Mask*) &mask_42_md,  (Image*) &text_42_md, (Music*) &music_02_all, room_funct_42_all };
const Room room_43_md = { (Image*) &room_43_f_md, (Image*) &room_43_b_md, (Objects*) &objects_43_md, (Mask*) &mask_43_all, (Image*) &text_43_md, (Music*) &music_02_all, room_funct_43_all };
const Room room_44_md = { (Image*) &room_44_f_md, NULL,                   (Objects*) &objects_44_md, (Mask*) &mask_44_md,  (Image*) &text_44_md, (Music*) &music_04_all, room_funct_44_all };
