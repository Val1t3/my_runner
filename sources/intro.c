/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** intro
*/

#include "../include/my_runner.h"

variable_t intro(variable_t var)
{
    if (sfSprite_getPosition(var.player).x > 860)
        sfSprite_setPosition(var.player, var.pos_player);
    if (sfSprite_getPosition(var.player).x == 200)
        var.jump = 1;
    if (sfSprite_getPosition(var.player).x == 600)
        var.jump = 1;
    return var;
}
