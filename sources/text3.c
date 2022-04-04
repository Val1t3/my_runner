/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** text3
*/

#include "../include/my_runner.h"

variable_t var_text_3(variable_t var)
{
    var.go_menu = "to go to the menu";
    var.strong_str = "Arggh your're too strong for me !!!";
    var.victory_str = "Victory !";
    var.care_str = "Oh oh, take care of yourself !";
    return var;
}

variable_t text_var_screen6(variable_t var)
{
    sfText_setString(var.text1, var.strong_str);
    var.pos_text1.x = 150;
    var.pos_text1.y = 450;
    sfText_setPosition(var.text1, var.pos_text1);
    sfText_setColor(var.text1, var.color_sel);
    sfText_setScale(var.text1, var.scalex1);
    sfText_setString(var.text2, var.victory_str);
    var.pos_text2.x = 280;
    var.pos_text2.y = 100;
    sfText_setPosition(var.text2, var.pos_text2);
    sfText_setColor(var.text2, var.color_sel);
    sfText_setScale(var.text2, var.scalex2);
    var.pos_icon_boss.y = 225;
    sfSprite_setPosition(var.icon_boss_s, var.pos_icon_boss);
    sfSprite_setScale(var.icon_boss_s, var.scalex5);
    sfText_setString(var.text3, var.escape_str);
    var.pos_text3.x = 570;
    var.pos_text3.y = 550;
    sfText_setPosition(var.text3, var.pos_text3);
    sfText_setColor(var.text3, var.color_sel);
    return var;
}
