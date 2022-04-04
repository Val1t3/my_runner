/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** loop2
*/

#include "../include/my_runner.h"

variable_t clock_down_loop(variable_t var)
{
    var.seconds_down = var.time_down.microseconds / 1000000.0;
    var.time_down = sfClock_getElapsedTime(var.clock_down);
    if (var.seconds_down > 0.01 && var.jump == 0 &&\
    sfSprite_getPosition(var.player).y < 420) {
        sfSprite_move(var.player, var.move_down);
        sfClock_restart(var.clock_down);
    }
    return var;
}

variable_t clock_intro_loop(variable_t var)
{
    var.seconds_intro = var.time_intro.microseconds / 1000000.0;
    var.time_intro = sfClock_getElapsedTime(var.clock_intro);
    if (var.seconds_intro > 0.02 && var.screen == 0) {
        sfSprite_move(var.player, var.move_right);
        sfClock_restart(var.clock_intro);
    }
    return var;
}

variable_t clock_boss_loop(variable_t var)
{
    var.seconds_boss = var.time_boss.microseconds / 1000000.0;
    var.time_boss = sfClock_getElapsedTime(var.clock_boss);
    if (var.seconds_boss > 0.1) {
        var = boss_move(var);
        sfClock_restart(var.clock_boss);
    }
    return var;
}

variable_t clock_jump_loop(variable_t var)
{
    var.seconds_jump = var.time_jump.microseconds / 1000000.0;
    var.time_jump = sfClock_getElapsedTime(var.clock_jump);
    if (var.seconds_jump > 0.01 && var.jump == 1) {
        sfSprite_move(var.player, var.move_up);
        if (sfSprite_getPosition(var.player).y < 220)
            var.jump = 0;
        sfClock_restart(var.clock_jump);
    }
    return var;
}

variable_t clock_map_loop(variable_t var)
{
    var.seconds_map = var.time_map.microseconds / 1000000.0;
    var.time_map = sfClock_getElapsedTime(var.clock_map);
    if (var.seconds_map > 2 && var.screen == 1) {
        if (var.level == 0)
            var = do_map_1(var);
        if (var.level == 1)
            var = do_map_2(var);
        if (var.level == 2)
            var = make_infinity(var);
        var.map++;
        sfClock_restart(var.clock_map);
    }
    return var;
}
