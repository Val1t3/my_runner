/*
** EPITECH PROJECT, 2022
** my_runner
** File description:
** normal_var
*/

#include "../include/my_runner.h"

variable_t normal_var_5(variable_t var)
{
    var.pos_icon_boss.x = 315;
    var.pos_icon_boss.y = 100;
    var.ibm = 0;
    var.volume = 50;
    var.pos_text3.x = 360;
    var.pos_text3.y = 350;
    var.pos_text4.x = 340;
    var.pos_text4.y = 400;
    var.int_volume_str = malloc(sizeof(char) * 3);
    var.scalex0_85.x = 0.85;
    var.scalex0_85.y = 0.85;
    var.menu2 = 0;
    var.map_level_1 = malloc(sizeof(char) * 30);
    var.map_level_2 = malloc(sizeof(char) * 30);
    var.map = 0;
    var.map_level_3 = "007";
    return var;
}

variable_t normal_var_4(variable_t var)
{
    var.move_centipede.x = -5;
    var.move_turtle.x = -9;
    var.scalex5.x = 5;
    var.scalex5.y = 5;
    var.pos_icon_man.x = 100;
    var.pos_icon_man.y = 250;
    var.pos_icon_woman.x = 325;
    var.pos_icon_woman.y = 250;
    var.pos_icon_dwarf.x = 550;
    var.pos_icon_dwarf.y = 250;
    var.hurt = 0;
    var.race = 0;
    var.scalex1.x = 1;
    var.scalex1.y = 1;
    var.scalex0_1.x = 0.1;
    var.scalex0_1.y = 0.1;
    var.life = 1;
    var.score = 0;
    var.score_str = malloc(sizeof(char) * 4);
    var = normal_var_5(var);
    return var;
}

variable_t normal_var_3(variable_t var)
{
    var.scalex0_4.x = 0.4;
    var.scalex0_4.y = 0.4;
    var.pos_title.x = 200;
    var.scalex0_25.x = 0.25;
    var.scalex0_25.y = 0.25;
    var.pos_play.x = 270;
    var.pos_play.y = 300;
    var.pos_settings.x = 270;
    var.pos_settings.y = 400;
    var.menu = 0;
    var.color_base.r = 255;
    var.color_base.g = 255;
    var.color_base.b = 255;
    var.color_base.a = 150;
    var.color_sel.r = 255;
    var.color_sel.g = 255;
    var.color_sel.b = 255;
    var.color_sel.a = 255;
    var = normal_var_4(var);
    return var;
}

variable_t normal_var_2(variable_t var)
{
    var.anim = 0;
    var.pos_player.x = -60;
    var.pos_player.y = 420;
    var.rect_enne.width = 48;
    var.rect_enne.height = 48;
    var.rect_enne.top = 24;
    var.rect_enne.left = 24;
    var.pos_ennemie.x = 860;
    var.pos_ennemie.y = 470;
    var.rect_turtle.top = 24;
    var.rect_turtle.left = 10;
    var.rect_turtle.height = 48;
    var.rect_turtle.width = 62;
    var.move_right.x = 5;
    var.move_left.x = -5;
    var.move_down.y = 12;
    var.move_up.y = -12;
    var.jump = 0;
    var.screen = 0;
    var = normal_var_3(var);
    return var;
}

variable_t normal_var(variable_t var)
{
    var.video_mode.height = 600;
    var.video_mode.width = 800;
    var.video_mode.bitsPerPixel = 32;
    var.scalex2.x = 2;
    var.scalex2.y = 2;
    var.scalex1_4.x = 1.4;
    var.scalex1_4.y = 1.9;
    var.back2_mov.x = -1;
    var.back3_mov.x = -2;
    var.back_pos.x = 806.4;
    var.ground_pos.x = 806.4;
    var.ground_pos.y = 530;
    var.ground_pos1.y = 530;
    var.ground_mov.x = -2.5;
    var.scalex3.x = 3;
    var.scalex3.y = 3;
    var.rect_pla.width = 48;
    var.rect_pla.height = 48;
    var.rect_pla.top = 0;
    var.rect_pla.left = 0;
    var = normal_var_2(var);
    return var;
}   
