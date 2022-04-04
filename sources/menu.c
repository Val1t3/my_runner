/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** menu
*/

#include "../include/my_runner.h"

variable_t var_menu(variable_t var)
{
    var.title_t = sfTexture_createFromFile("res/icons/title.png", NULL);
    var.title_s = sfSprite_create();
    sfSprite_setTexture(var.title_s, var.title_t, sfTrue);
    sfSprite_setScale(var.title_s, var.scalex0_4);
    sfSprite_setPosition(var.title_s, var.pos_title);
    var.play_t = sfTexture_createFromFile("res/icons/play.png", NULL);
    var.play_s = sfSprite_create();
    sfSprite_setTexture(var.play_s, var.play_t, sfTrue);
    sfSprite_setScale(var.play_s, var.scalex0_25);
    sfSprite_setPosition(var.play_s, var.pos_play);
    var.settings_t = sfTexture_createFromFile("res/icons/settings.png", NULL);
    var.settings_s = sfSprite_create();
    sfSprite_setTexture(var.settings_s, var.settings_t, sfTrue);
    sfSprite_setScale(var.settings_s, var.scalex0_25);
    sfSprite_setPosition(var.settings_s, var.pos_settings);
    return var;
}

variable_t menu_screen2_next(variable_t var)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp) && var.menu == 0) {
        var.race = 0;
        var.screen = 4;
        sfSprite_setTexture(var.player, var.man_walks, sfFalse);
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp) && var.menu == 1) {
        var.race = 1;
        var.screen = 4;
        sfSprite_setTexture(var.player, var.woman_walks, sfFalse);
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp) && var.menu == 2) {
        var.race = 2;
        var.screen = 4;
        sfSprite_setTexture(var.player, var.dwarf_walks, sfFalse);
    }
    return var;
}

variable_t menu_screen2(variable_t var)
{
    if (var.screen == 2) {
        if (var.menu == 0) {
            sfSprite_setColor(var.icon_man_s, var.color_sel);
            sfSprite_setColor(var.icon_woman_s, var.color_base);
            sfSprite_setColor(var.icon_dwarf_s, var.color_base);
        }
        if (var.menu == 1) {
            sfSprite_setColor(var.icon_man_s, var.color_base);
            sfSprite_setColor(var.icon_woman_s, var.color_sel);
            sfSprite_setColor(var.icon_dwarf_s, var.color_base);
        }
        if (var.menu == 2) {
            sfSprite_setColor(var.icon_man_s, var.color_base);
            sfSprite_setColor(var.icon_woman_s, var.color_base);
            sfSprite_setColor(var.icon_dwarf_s, var.color_sel);
        }
        var = menu_screen2_next(var);
    }
    return var;
}

variable_t menu_screen0(variable_t var)
{
    if (var.screen == 0) {
        if (var.menu == 0) {
            sfSprite_setColor(var.play_s, var.color_sel);
            sfSprite_setColor(var.settings_s, var.color_base);
        }
        if (var.menu == 1) {
            sfSprite_setColor(var.play_s, var.color_base);
            sfSprite_setColor(var.settings_s, var.color_sel);
        }
        if (sfKeyboard_isKeyPressed(sfKeySpace) && var.menu == 0)
            var.screen = 2;
        if (sfKeyboard_isKeyPressed(sfKeySpace) && var.menu == 1) {
            var.screen = 5;
            var.menu = 0;
        }
    }
    return var;
}
