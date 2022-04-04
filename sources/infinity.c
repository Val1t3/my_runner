/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** infinity
*/

#include "../include/my_runner.h"

variable_t next_map3(variable_t var)
{
    if (var.rand == 4 || var.rand == 9) {
        sfSprite_setTexture(var.ennemie1, var.turtle_walks, sfTrue);
        sfSprite_setPosition(var.ennemie1, var.pos_ennemie);
        sfSprite_setTexture(var.ennemie2, var.turtle_walks, sfTrue);
        sfSprite_setPosition(var.ennemie2, var.pos_ennemie);
    }
    if (var.rand == 5) {
        sfSprite_setTexture(var.ennemie1, var.centipede_walks, sfTrue);
        sfSprite_setPosition(var.ennemie1, var.pos_ennemie);
        sfSprite_setTexture(var.ennemie2, var.turtle_walks, sfTrue);
        sfSprite_setPosition(var.ennemie2, var.pos_ennemie);
    }
    return var;
}

variable_t make_infinity(variable_t var)
{
    if (var.map > 2)
        var.map = 0;
    if (var.map_level_3[var.map] != '0') {
        var.rand = rand() % 9;
        if (var.rand == 1 || var.rand == 6) {
            sfSprite_setPosition(var.ennemie1, var.pos_ennemie);
            sfSprite_setTexture(var.ennemie1, var.centipede_walks, sfTrue);
        }
        if (var.rand == 2 || var.rand == 7) {
            sfSprite_setPosition(var.ennemie2, var.pos_ennemie);
            sfSprite_setTexture(var.ennemie2, var.turtle_walks, sfTrue);
        }
        if (var.rand == 3 || var.rand == 8) {
            sfSprite_setTexture(var.ennemie1, var.centipede_walks, sfTrue);
            sfSprite_setPosition(var.ennemie1, var.pos_ennemie);
            sfSprite_setTexture(var.ennemie2, var.centipede_walks, sfTrue);
            sfSprite_setPosition(var.ennemie2, var.pos_ennemie);
        }
        var = next_map3(var);
    }
    return var;
}
