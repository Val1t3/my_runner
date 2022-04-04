/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** event2
*/

#include "../include/my_runner.h"

variable_t event_menu2_screen5(variable_t var)
{
    if (var.screen == 5 && var.menu == 1) {
        if (sfKeyboard_isKeyPressed(sfKeyLeft))
            var.menu2 = 0;
        if (sfKeyboard_isKeyPressed(sfKeyRight))
            var.menu2 = 1;
    }
    return var;
}

variable_t event_screen(variable_t var)
{
    sfVector2u window800 = {800, 600};
    sfVector2u window1920 = {1920, 1080};

    if (var.screen == 5 && var.menu == 1 && var.menu2 == 0) {
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            sfRenderWindow_setSize(var.window, window800);
    }
    if (var.screen == 5 && var.menu == 1 && var.menu2 == 1) {
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            sfRenderWindow_setSize(var.window, window1920);
    }
    return var;
}

variable_t event_volume(variable_t var)
{
    if (var.screen == 5 && var.menu == 0) {
        if (sfKeyboard_isKeyPressed(sfKeyLeft) && var.volume >= 1)
            var.volume--;
        if (sfKeyboard_isKeyPressed(sfKeyRight) && var.volume <= 100)
            var.volume++;
        sfMusic_setVolume(var.music, var.volume);
    }
    return var;
}

variable_t event_death(variable_t var)
{
    if (var.screen == 3 && sfKeyboard_isKeyPressed(sfKeySpace)) {
        var.life = 1;
        var.screen = 2;
    }
    if (var.screen == 3 && sfKeyboard_isKeyPressed(sfKeyEscape)) {
        var.life = 1;
        var.screen = 0;
    }
    return var;
}

variable_t event_victory(variable_t var)
{
    if (var.screen == 6 && sfKeyboard_isKeyPressed(sfKeyEscape))
        var.screen = 0;
    return var;
}
