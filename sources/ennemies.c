/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** ennemies
*/

#include "../include/my_runner.h"

variable_t var_ennemies(variable_t var)
{
    sfVector2f pos_start = {-100, 700};

    var.ennemie1 = sfSprite_create();
    var.ennemie2 = sfSprite_create();
    var.centipede_walks = sfTexture_createFromFile("res/ennemies/centipede/Centipede_walk.png", NULL);
    sfSprite_setTexture(var.ennemie1, var.centipede_walks, sfTrue);
    sfSprite_setScale(var.ennemie1, var.scalex2);
    sfSprite_setPosition(var.ennemie1, pos_start);
    var.turtle_walks = sfTexture_createFromFile("res/ennemies/turtle/Battle_turtle_walk.png", NULL);
    sfSprite_setTexture(var.ennemie2, var.turtle_walks, sfTrue);
    sfSprite_setScale(var.ennemie2, var.scalex2);
    sfSprite_setPosition(var.ennemie2, pos_start);
    sfSprite_setTextureRect(var.ennemie2, var.rect_turtle);
    return var;
}

variable_t ennemies_management(variable_t var)
{
    if (var.screen == 1) {
        if (var.map_level_1[var.map] != '4' || var.map_level_1[var.map] != '5') {
            sfSprite_move(var.ennemie1, var.move_centipede);
            sfSprite_move(var.ennemie2, var.move_turtle);
        }
        if (var.map_level_1[var.map] == '4') {
            sfSprite_move(var.ennemie1, var.move_centipede);
            sfSprite_move(var.ennemie2, var.move_centipede);
        }
        if (var.map_level_1[var.map] == '5') {
            sfSprite_move(var.ennemie1, var.move_turtle);
            sfSprite_move(var.ennemie2, var.move_turtle);
        }
    }
    return var;
}
