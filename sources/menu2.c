/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** menu2
*/

#include "../include/my_runner.h"

variable_t menu4(variable_t var)
{
    sfVector2f pos = {-100, 700};

    var.pos_player.x = 10;
    sfSprite_setPosition(var.player, var.pos_player);
    sfSprite_setPosition(var.ennemie1, pos);
    sfSprite_setPosition(var.ennemie2, pos);
    var.life = 1;
    var.score = 0;
    var.map = 0;
    var.screen = 1;
    return var;
}

variable_t menu_screen4_next(variable_t var)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) && var.menu == 0) {
        var.level = 0;
        var = make_map_normal(var);
        var = menu4(var);
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace) && var.menu == 1) {
        var.level = 1;
        var = make_map_hard(var);
        var = menu4(var);
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace) && var.menu == 2) {
        var.level = 2;
        var = menu4(var);
    }
    return var;
}

variable_t menu_screen4(variable_t var)
{
    if (var.screen == 4) {
        if (var.menu == 0) {
            sfText_setColor(var.text2, var.color_sel);
            sfText_setColor(var.text3, var.color_base);
            sfText_setColor(var.text4, var.color_base);
        }
        if (var.menu == 1) {
            sfText_setColor(var.text2, var.color_base);
            sfText_setColor(var.text3, var.color_sel);
            sfText_setColor(var.text4, var.color_base);
        }
        if (var.menu == 2) {
            sfText_setColor(var.text2, var.color_base);
            sfText_setColor(var.text3, var.color_base);
            sfText_setColor(var.text4, var.color_sel);
        }
        var = menu_screen4_next(var);
    }
    return var;
}

variable_t menu_screen5_next(variable_t var)
{
    if (var.menu == 1 && var.menu2 == 0) {
        sfText_setColor(var.text8, var.color_sel);
        sfText_setColor(var.text9, var.color_base);
    }
    if (var.menu == 1 && var.menu2 == 1) {
        sfText_setColor(var.text8, var.color_base);
        sfText_setColor(var.text9, var.color_sel);
    }
    return var;
}

variable_t menu_screen5(variable_t var)
{
    if (var.screen == 5) {
        if (var.menu == 0) {
            sfText_setColor(var.text3, var.color_sel);
            sfText_setColor(var.text4, var.color_base);
            sfText_setColor(var.text5, var.color_sel);
            sfText_setColor(var.text8, var.color_base);
            sfText_setColor(var.text9, var.color_base);
        }
        if (var.menu == 1) {
            sfText_setColor(var.text4, var.color_sel);
            sfText_setColor(var.text3, var.color_base);
            sfText_setColor(var.text5, var.color_base);
        }
        var = menu_screen5_next(var);
    }
    return var;
}
