/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** event3
*/

#include "../include/my_runner.h"

variable_t event_pause(variable_t var)
{
    if (var.screen == 1 && sfKeyboard_isKeyPressed(sfKeyEscape))
        var.screen = 8;
    if (var.screen == 8 && sfKeyboard_isKeyPressed(sfKeySpace))
        var.screen = 1;
    return var;
}
