/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** text2
*/

#include "../include/my_runner.h"

variable_t text_var_5_3(variable_t var)
{
    float angle = 0;

    sfText_setRotation(var.text2, angle);
    sfText_setColor(var.text6, var.color_base);
    sfText_setColor(var.text7, var.color_base);
    sfText_setString(var.text8, var.res1);
    sfText_setScale(var.text8, var.scalex0_85);
    var.pos_text4.x = 270;
    var.pos_text4.y = 420;
    sfText_setPosition(var.text8, var.pos_text4);
    sfText_setString(var.text9, var.res2);
    sfText_setScale(var.text9, var.scalex0_85);
    var.pos_text4.x = 400;
    var.pos_text4.y = 420;
    sfText_setPosition(var.text9, var.pos_text4);
    return var;
}

variable_t text_var_5_2(variable_t var)
{
    sfText_setString(var.text4, var.screen_str);
    sfText_setScale(var.text4, var.scalex1);
    var.pos_text4.x = 325;
    var.pos_text4.y = 350;
    sfText_setPosition(var.text4, var.pos_text4);
    sfText_setScale(var.text5, var.scalex0_85);
    var.pos_text5.x = 370;
    var.pos_text5.y = 270;
    sfText_setPosition(var.text5, var.pos_text5);
    sfText_setString(var.text6, var.less);
    sfText_setScale(var.text6, var.scalex1);
    var.pos_text4.x = 345;
    var.pos_text4.y = 265;
    sfText_setPosition(var.text6, var.pos_text4);
    sfText_setString(var.text7, var.more);
    sfText_setScale(var.text7, var.scalex1);
    var.pos_text4.x = 425;
    var.pos_text4.y = 268;
    sfText_setPosition(var.text7, var.pos_text4);
    var = text_var_5_3(var);
    return var;
}

variable_t text_var_screen5(variable_t var)
{
    sfText_setScale(var.text1, var.scalex2);
    sfText_setString(var.text1, var.settings_str);
    var.pos_text1.x = 287;
    var.pos_text1.y = 50;
    sfText_setPosition(var.text1, var.pos_text1);
    sfText_setString(var.text2, var.escape_str);
    sfText_setScale(var.text2, var.scalex1);
    var.pos_text2.x = 570;
    var.pos_text2.y = 550;
    sfText_setPosition(var.text2, var.pos_text2);
    sfText_setString(var.text3, var.volume_str);
    sfText_setScale(var.text3, var.scalex1);
    var.pos_text3.x = 330;
    var.pos_text3.y = 200;
    sfText_setPosition(var.text3, var.pos_text3);
    var = text_var_5_2(var);
    return var;
}

variable_t text_screen3_next(variable_t var)
{
    sfText_setPosition(var.text3, var.pos_text3);
    sfText_setScale(var.text3, var.scalex1);
    sfText_setColor(var.text2, var.color_sel);
    sfText_setColor(var.text3, var.color_sel);
    sfText_setColor(var.text4, var.color_sel);
    sfText_setColor(var.text5, var.color_sel);
    sfText_setString(var.text4, var.to_replay);
    var.pos_text4.x = 630;
    var.pos_text4.y = 500;
    sfText_setPosition(var.text4, var.pos_text4);
    sfText_setScale(var.text4, var.scalex1);
    sfText_setString(var.text5, var.go_menu);
    var.pos_text5.x = 15;
    var.pos_text5.y = 500;
    sfText_setPosition(var.text5, var.pos_text5);
    sfText_setScale(var.text5, var.scalex1);
    sfSprite_setScale(var.icon_boss_s, var.scalex5);
    return var;
}

variable_t text_var_screen3(variable_t var)
{
    if (var.race == 0)
        sfSprite_setTexture(var.player, var.man_death, sfFalse);
    if (var.race == 1)
        sfSprite_setTexture(var.player, var.woman_death, sfFalse);
    if (var.race == 2)
        sfSprite_setTexture(var.player, var.dwarf_death, sfFalse);
    sfText_setString(var.text1, var.bad_str);
    var.pos_text1.x = 225;
    var.pos_text1.y = 300;
    sfText_setPosition(var.text1, var.pos_text1);
    sfText_setScale(var.text1, var.scalex1);
    sfText_setString(var.text2, var.space_key_str);
    var.pos_text2.x = 600;
    var.pos_text2.y = 450;
    sfText_setPosition(var.text2, var.pos_text2);
    sfText_setScale(var.text2, var.scalex1);
    sfText_setString(var.text3, var.escape_str);
    var.pos_text3.x = 35;
    var.pos_text3.y = 450;
    var = text_screen3_next(var);
    return var;
}
