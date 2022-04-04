/*
** EPITECH PROJECT, 2022
** my_runner
** File description:
** draw
*/

#include "../include/my_runner.h"

void draw_screen3(variable_t var)
{
    var = text_var_screen3(var);
    var = better_score_death(var);
    var.pos_icon_boss.x = 315;
    var.pos_icon_boss.y = 100;
    sfSprite_setPosition(var.icon_boss_s, var.pos_icon_boss);
    sfRenderWindow_drawSprite(var.window, var.icon_boss_s, NULL);
    sfRenderWindow_drawText(var.window, var.text1, NULL);
    sfRenderWindow_drawSprite(var.window, var.player, NULL);
    sfRenderWindow_drawText(var.window, var.text2, NULL);
    sfRenderWindow_drawText(var.window, var.text3, NULL);
    sfRenderWindow_drawText(var.window, var.text4, NULL);
    sfRenderWindow_drawText(var.window, var.text5, NULL);
}

void draw_screen2(variable_t var)
{
    var = text_var_screen2(var);
    sfRenderWindow_drawSprite(var.window, var.icon_man_s, NULL);
    sfRenderWindow_drawSprite(var.window, var.icon_woman_s, NULL);
    sfRenderWindow_drawSprite(var.window, var.icon_dwarf_s, NULL);
    sfRenderWindow_drawText(var.window, var.text1, NULL);
    sfRenderWindow_drawText(var.window, var.text2, NULL);
}

void draw_screen1(variable_t var)
{
    var = make_better_score(var);
    sfRenderWindow_drawSprite(var.window, var.ennemie1, NULL);
    sfRenderWindow_drawSprite(var.window, var.ennemie2, NULL);
    sfRenderWindow_drawSprite(var.window, var.player, NULL);
    var.pos_text1.x = 330;
    var.pos_text1.y = 30;
    sfText_setPosition(var.text1, var.pos_text1);
    sfText_setString(var.text1, var.score_str);
    if (var.level == 2)
        sfRenderWindow_drawText(var.window, var.text1, NULL);
}

void draw_screen0(variable_t var)
{
    var = text_var_screen0(var);
    sfRenderWindow_drawSprite(var.window, var.title_s, NULL);
    sfRenderWindow_drawSprite(var.window, var.player, NULL);
    sfRenderWindow_drawSprite(var.window, var.play_s, NULL);
    sfRenderWindow_drawSprite(var.window, var.settings_s, NULL);
    sfRenderWindow_drawText(var.window, var.text1, NULL);
    sfRenderWindow_drawText(var.window, var.text2, NULL);
}

void draw_all(variable_t var)
{
    sfRenderWindow_drawSprite(var.window, var.background1_s, NULL);
    sfRenderWindow_drawSprite(var.window, var.background2_1_s, NULL);
    sfRenderWindow_drawSprite(var.window, var.background2_2_s, NULL);
    sfRenderWindow_drawSprite(var.window, var.background3_1_s, NULL);
    sfRenderWindow_drawSprite(var.window, var.background3_2_s, NULL);
    sfRenderWindow_drawSprite(var.window, var.ground_1_s, NULL);
    sfRenderWindow_drawSprite(var.window, var.ground_2_s, NULL);
    var = draw_all_next(var);
}
