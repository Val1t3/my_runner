/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** collision
*/

#include "../include/my_runner.h"

variable_t colli_texture(variable_t var)
{
    if (var.race == 0)
        sfSprite_setTexture(var.player, var.man_hurt, sfFalse);
    if (var.race == 1)
        sfSprite_setTexture(var.player, var.woman_hurt, sfFalse);
    if (var.race == 2)
        sfSprite_setTexture(var.player, var.dwarf_hurt, sfFalse);
    var.hurt = 0;
    var = death(var);
    return var;
}

variable_t collision(variable_t var)
{
    var.player_box = sfSprite_getGlobalBounds(var.player);
    var.ennemi1_box = sfSprite_getGlobalBounds(var.ennemie1);
    var.ennemi2_box = sfSprite_getGlobalBounds(var.ennemie2);
    var.player_box.width -= 70;
    var.player_box.height -= 20;
    var.ennemi1_box.width -= 20;
    var.ennemi2_box.width -= 15;
    if (sfFloatRect_intersects(&var.player_box, &var.ennemi1_box, NULL))
        var = colli_texture(var);
    if (sfFloatRect_intersects(&var.player_box, &var.ennemi2_box, NULL))
        var = colli_texture(var);
    return var;
}
