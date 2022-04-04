/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** map
*/

#include "../include/my_runner.h"

variable_t make_map_normal(variable_t var)
{
    var.fd2 = open("map1.txt", O_RDONLY);
    read(var.fd2, var.map_level_1, 30);
    close(var.fd2);
    return var;
}

variable_t make_map_hard(variable_t var)
{
    var.fd2 = open("map2.txt", O_RDONLY);
    read(var.fd2, var.map_level_2, 30);
    close(var.fd2);
    return var;
}

variable_t do_map_1(variable_t var)
{
    if (var.screen == 1) {
        if (var.map_level_1[var.map] == '1') {
            sfSprite_setPosition(var.ennemie1, var.pos_ennemie);
            sfSprite_setTexture(var.ennemie1, var.centipede_walks, sfTrue);
        }
        if (var.map_level_1[var.map] == '2')
            sfSprite_setPosition(var.ennemie2, var.pos_ennemie);
        if (var.map_level_1[var.map] == '3') {
            sfSprite_setTexture(var.ennemie1, var.centipede_walks, sfTrue);
            sfSprite_setPosition(var.ennemie1, var.pos_ennemie);
            sfSprite_setTexture(var.ennemie2, var.centipede_walks, sfTrue);
            sfSprite_setPosition(var.ennemie2, var.pos_ennemie);
        }
        if (var.map_level_1[var.map] == '4') {
            sfSprite_setTexture(var.ennemie1, var.turtle_walks, sfTrue);
            sfSprite_setPosition(var.ennemie1, var.pos_ennemie);
            sfSprite_setTexture(var.ennemie2, var.turtle_walks, sfTrue);
            sfSprite_setPosition(var.ennemie2, var.pos_ennemie);
        }
        var = next_map1(var);
    }
    return var;
}

variable_t do_map_2(variable_t var)
{
    if (var.screen == 1) {
        if (var.map_level_2[var.map] == '1') {
            sfSprite_setPosition(var.ennemie1, var.pos_ennemie);
            sfSprite_setTexture(var.ennemie1, var.centipede_walks, sfTrue);
        }
        if (var.map_level_2[var.map] == '2') {
            sfSprite_setPosition(var.ennemie2, var.pos_ennemie);
            sfSprite_setTexture(var.ennemie2, var.turtle_walks, sfTrue);
        }
        if (var.map_level_2[var.map] == '3') {
            sfSprite_setTexture(var.ennemie1, var.centipede_walks, sfTrue);
            sfSprite_setPosition(var.ennemie1, var.pos_ennemie);
            sfSprite_setTexture(var.ennemie2, var.centipede_walks, sfTrue);
            sfSprite_setPosition(var.ennemie2, var.pos_ennemie);
        }
        if (var.map_level_2[var.map] == '4') {
            sfSprite_setTexture(var.ennemie1, var.turtle_walks, sfTrue);
            sfSprite_setPosition(var.ennemie1, var.pos_ennemie);
            sfSprite_setTexture(var.ennemie2, var.turtle_walks, sfTrue);
            sfSprite_setPosition(var.ennemie2, var.pos_ennemie);
        }
        var = next_map2(var);
    }
    return var;
}
