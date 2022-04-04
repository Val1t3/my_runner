/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** draw2
*/

#include "../include/my_runner.h"

void draw_screen4(variable_t var)
{
    var = text_var_screen4(var);
    sfRenderWindow_drawText(var.window, var.text1, NULL);
    sfRenderWindow_drawText(var.window, var.text2, NULL);
    sfRenderWindow_drawText(var.window, var.text3, NULL);
    sfRenderWindow_drawText(var.window, var.text4, NULL);
    sfRenderWindow_drawText(var.window, var.text5, NULL);
}

void draw_screen5(variable_t var)
{
    var = text_var_screen5(var);
    sfRenderWindow_drawText(var.window, var.text1, NULL);
    sfRenderWindow_drawText(var.window, var.text2, NULL);
    sfRenderWindow_drawText(var.window, var.text3, NULL);
    sfRenderWindow_drawText(var.window, var.text4, NULL);
    sfRenderWindow_drawText(var.window, var.text5, NULL);
    sfRenderWindow_drawText(var.window, var.text6, NULL);
    sfRenderWindow_drawText(var.window, var.text7, NULL);
    sfRenderWindow_drawText(var.window, var.text8, NULL);
    sfRenderWindow_drawText(var.window, var.text9, NULL);
}

void draw_screen6(variable_t var)
{
    var = text_var_screen6(var);
    sfRenderWindow_drawText(var.window, var.text1, NULL);
    sfRenderWindow_drawText(var.window, var.text2, NULL);
    sfRenderWindow_drawSprite(var.window, var.icon_boss_s, NULL);
    sfRenderWindow_drawText(var.window, var.text3, NULL);
}

void draw_story(variable_t var)
{
    if (var.screen == 1 && var.level != 2 && var.map_level_1[var.map] == '8') {
        sfText_setString(var.text1, var.care_str);
        sfText_setScale(var.text1, var.scalex1);
        var.pos_text1.x = 150;
        var.pos_text1.y = 100;
        sfText_setPosition(var.text1, var.pos_text1);
        var.pos_icon_boss.x = 605;
        var.pos_icon_boss.y = 85;
        sfSprite_setPosition(var.icon_boss_s, var.pos_icon_boss);
        sfSprite_setScale(var.icon_boss_s, var.scalex2);
        sfRenderWindow_drawText(var.window, var.text1, NULL);
        sfRenderWindow_drawSprite(var.window, var.icon_boss_s, NULL);
    }
}

variable_t draw_screen8(variable_t var)
{
    var.pause_str = "PAUSE";
    sfText_setString(var.text1, var.pause_str);
    sfText_setScale(var.text1, var.scalex2);
    var.pos_text1.x = 300;
    var.pos_text1.y = 250;
    sfText_setPosition(var.text1, var.pos_text1);
    sfText_setString(var.text2, var.space_key_str);
    sfText_setScale(var.text2, var.scalex1);
    var.pos_text2.x = 600;
    var.pos_text2.y = 550;
    sfText_setPosition(var.text2, var.pos_text2);
    sfRenderWindow_drawText(var.window, var.text2, NULL);
    sfRenderWindow_drawText(var.window, var.text1, NULL);
}

variable_t draw_all_next(variable_t var)
{
    if (var.screen == 0)
        draw_screen0(var);
    if (var.screen == 1)
        draw_screen1(var);
    if (var.screen == 2)
        draw_screen2(var);
    if (var.screen == 3)
        draw_screen3(var);
    if (var.screen == 4)
        draw_screen4(var);
    if (var.screen == 5)
        draw_screen5(var);
    if (var.screen == 6)
        draw_screen6(var);
    draw_story(var);
    if (var.screen == 8)
        draw_screen8(var);
    return var;
}
