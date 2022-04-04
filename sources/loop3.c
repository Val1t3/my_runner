/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** loop3
*/

#include "../include/my_runner.h"

variable_t clock_loop_add(variable_t var)
{
    var = clock_loop(var);
    var = clock_player_loop(var);
    var = clock_jump_loop(var);
    var = clock_down_loop(var);
    var = clock_intro_loop(var);
    var = clock_boss_loop(var);
    if (var.screen == 1)
        var = clock_map_loop(var);
    return var;
}
