/*
** EPITECH PROJECT, 2022
** my_runner
** File description:
** event
*/

#include "../include/my_runner.h"

variable_t analyse_event(variable_t var)
{
    while (sfRenderWindow_pollEvent(var.window, &var.event)) {
        if (var.event.type == sfEvtClosed)
            sfRenderWindow_close(var.window);
        if (sfKeyboard_isKeyPressed(sfKeyLControl) &&\
        sfKeyboard_isKeyPressed(sfKeyC))
            sfRenderWindow_close(var.window);
    }
    return var;
}

variable_t event_player(variable_t var)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight) &&\
    sfSprite_getPosition(var.player).x < 720)
        sfSprite_move(var.player, var.move_right);
    if (sfKeyboard_isKeyPressed(sfKeyLeft) &&\
    sfSprite_getPosition(var.player).x > 10)
        sfSprite_move(var.player, var.move_left);
    if (sfKeyboard_isKeyPressed(sfKeyUp) &&\
    sfSprite_getPosition(var.player).y == 420) {
        var.jump = 1;
        sfMusic_play(var.jump_music);
    }
    return var;
}

variable_t event_menu(variable_t var)
{
    if (sfKeyboard_isKeyPressed(sfKeyF1))
        var.menu = 0;
    if (sfKeyboard_isKeyPressed(sfKeyF2))
        var.menu = 1;
    return var;
}

variable_t event_menu_sel(variable_t var)
{
    if (sfKeyboard_isKeyPressed(sfKeyF1))
        var.menu = 0;
    if (sfKeyboard_isKeyPressed(sfKeyF2))
        var.menu = 1;
    if (sfKeyboard_isKeyPressed(sfKeyF3))
        var.menu = 2;
    return var;
}

variable_t event_settings(variable_t var)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape) && var.screen == 5)
        var.screen = 0;
    return var;
}
