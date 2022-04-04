/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** text
*/

#include "../include/my_runner.h"

variable_t var_text_2(variable_t var)
{
    var.hard_str = "Hard";
    var.infinity_str = "Infinity";
    var.escape_str = "Press Escape";
    var.volume_str = "VOLUME";
    var.screen_str = "SCREEN";
    var.rules_str = "RULES";
    var.text6 = sfText_create();
    var.text7 = sfText_create();
    var.text8 = sfText_create();
    var.text9 = sfText_create();
    sfText_setFont(var.text6, var.font);
    sfText_setFont(var.text7, var.font);
    sfText_setFont(var.text8, var.font);
    sfText_setFont(var.text9, var.font);
    var.less = "-";
    var.more = "+";
    var.res1 = "800x600";
    var.res2 = "1920x1080";
    var.to_replay = "to replay";
    var = var_text_3(var);
    return var;
}

variable_t var_text(variable_t var)
{
    var.font = sfFont_createFromFile("res/text/Minecraft.ttf");
    var.text1 = sfText_create();
    var.text2 = sfText_create();
    var.text3 = sfText_create();
    var.text4 = sfText_create();
    var.text5 = sfText_create();
    sfText_setFont(var.text1, var.font);
    sfText_setFont(var.text2, var.font);
    sfText_setFont(var.text3, var.font);
    sfText_setFont(var.text4, var.font);
    sfText_setFont(var.text5, var.font);
    var.selection_str = "Hero selection";
    var.space_key_str = "Press Space";
    var.up_key_str = "Press Up";
    var.bad_str = " Hahaha, you're so bad !";
    var.settings_str = "Settings";
    var.difficulty_str = "Difficulty";
    var.normal_str = "Normal";
    var = var_text_2(var);
    return var;
}

variable_t text_var_screen2(variable_t var)
{
    float angle = 0;

    sfText_setRotation(var.text2, angle);
    sfText_setScale(var.text1, var.scalex2);
    sfText_setString(var.text1, var.selection_str);
    var.pos_text1.x = 200;
    var.pos_text1.y = 100;
    sfText_setPosition(var.text1, var.pos_text1);
    sfText_setScale(var.text2, var.scalex1);
    sfText_setString(var.text2, var.up_key_str);
    var.pos_text1.x = 650;
    var.pos_text1.y = 550;
    sfText_setPosition(var.text2, var.pos_text1);
    return var;
}

variable_t text_var_screen4(variable_t var)
{
    sfText_setString(var.text1, var.difficulty_str);
    sfText_setString(var.text2, var.normal_str);
    sfText_setString(var.text3, var.hard_str);
    sfText_setString(var.text4, var.infinity_str);
    sfText_setString(var.text5, var.space_key_str);
    sfText_setScale(var.text1, var.scalex2);
    sfText_setScale(var.text5, var.scalex1);
    var.pos_text1.x = 270;
    var.pos_text1.y = 100;
    var.pos_text2.x = 340;
    var.pos_text2.y = 300;
    var.pos_text5.x = 600;
    var.pos_text5.y = 550;
    sfText_setPosition(var.text1, var.pos_text1);
    sfText_setPosition(var.text2, var.pos_text2);
    sfText_setPosition(var.text3, var.pos_text3);
    sfText_setPosition(var.text4, var.pos_text4);
    sfText_setPosition(var.text5, var.pos_text5);
    return var;
}

variable_t text_var_screen0(variable_t var)
{
    float angle = -25;

    sfText_setString(var.text1, var.space_key_str);
    sfText_setScale(var.text1, var.scalex1);
    var.pos_text1.x = 600;
    var.pos_text1.y = 550;
    sfText_setPosition(var.text1, var.pos_text1);
    sfText_setString(var.text2, var.char_better_score);
    sfText_setScale(var.text2, var.scalex2);
    var.pos_text2.x = 210;
    var.pos_text2.y = 300;
    sfText_setPosition(var.text2, var.pos_text2);
    sfText_setRotation(var.text2, angle);
    sfText_setColor(var.text2, var.color_sel);
    return var;
}
