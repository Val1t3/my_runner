/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** boss
*/

#include "../include/my_runner.h"

variable_t boss_move(variable_t var)
{
    if (sfSprite_getPosition(var.icon_boss_s).x <= 310\
    || sfSprite_getPosition(var.icon_boss_s).y <= 90) {
        sfSprite_move(var.icon_boss_s, var.move_right);
        sfSprite_move(var.icon_boss_s, var.move_up);
    }
    else {
        sfSprite_move(var.icon_boss_s, var.move_left);
        sfSprite_move(var.icon_boss_s, var.move_down);
    }
    return var;
}
