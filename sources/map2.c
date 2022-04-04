/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** map2
*/

#include "../include/my_runner.h"

variable_t next_map1(variable_t var)
{
    if (var.map_level_1[var.map] == '5') {
        sfSprite_setTexture(var.ennemie1, var.centipede_walks, sfTrue);
        sfSprite_setPosition(var.ennemie1, var.pos_ennemie);
        sfSprite_setTexture(var.ennemie2, var.turtle_walks, sfTrue);
        sfSprite_setPosition(var.ennemie2, var.pos_ennemie);
    }
    if (var.map_level_1[var.map] == '9')
        var.screen = 6;
    return var;
}

variable_t next_map2(variable_t var)
{
    if (var.map_level_2[var.map] == '5') {
        sfSprite_setTexture(var.ennemie1, var.centipede_walks, sfTrue);
        sfSprite_setPosition(var.ennemie1, var.pos_ennemie);
        sfSprite_setTexture(var.ennemie2, var.turtle_walks, sfTrue);
        sfSprite_setPosition(var.ennemie2, var.pos_ennemie);
    }
    if (var.map_level_2[var.map] == '9')
        var.screen = 6;
    return var;
}
