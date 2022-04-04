/*
** EPITECH PROJECT, 2022
** my_runner
** File description:
** background
*/

#include "../include/my_runner.h"
variable_t mov_back(variable_t var)
{
    if (var.life == 1) {
        sfSprite_move(var.background2_1_s, var.back2_mov);
        sfSprite_move(var.background2_2_s, var.back2_mov);
        sfSprite_move(var.background3_1_s, var.back3_mov);
        sfSprite_move(var.background3_2_s, var.back3_mov);
        sfSprite_move(var.ground_1_s, var.ground_mov);
        sfSprite_move(var.ground_2_s, var.ground_mov);
    }
    if (sfSprite_getPosition(var.background2_1_s).x < -801.4)
        sfSprite_setPosition(var.background2_1_s, var.back_pos);
    if (sfSprite_getPosition(var.background2_2_s).x < -801.4)
        sfSprite_setPosition(var.background2_2_s, var.back_pos);
    if (sfSprite_getPosition(var.background3_1_s).x < -801.4)
        sfSprite_setPosition(var.background3_1_s, var.back_pos);
    if (sfSprite_getPosition(var.background3_2_s).x < -801.4)
        sfSprite_setPosition(var.background3_2_s, var.back_pos);
    if (sfSprite_getPosition(var.ground_1_s).x < -801.4)
        sfSprite_setPosition(var.ground_1_s, var.ground_pos);
    if (sfSprite_getPosition(var.ground_2_s).x < -801.4)
        sfSprite_setPosition(var.ground_2_s, var.ground_pos);
    return var;
}

variable_t var_background_2(variable_t var)
{
    sfVector2f scale = {6, 6};

    sfSprite_setPosition(var.background2_2_s, var.back_pos);
    sfSprite_setPosition(var.background3_2_s, var.back_pos);
    var.ground_t = sfTexture_createFromFile("res/background/4.png", NULL);
    var.ground_1_s = sfSprite_create();
    var.ground_2_s = sfSprite_create();
    sfSprite_setTexture(var.ground_1_s, var.ground_t, sfTrue);
    sfSprite_setTexture(var.ground_2_s, var.ground_t, sfTrue);
    sfSprite_setScale(var.ground_1_s, scale);
    sfSprite_setScale(var.ground_2_s, scale);
    sfSprite_setPosition(var.ground_1_s, var.ground_pos1);
    sfSprite_setPosition(var.ground_2_s, var.ground_pos);
    return var;
}

variable_t var_background(variable_t var)
{
    var.background1_t = sfTexture_createFromFile("res/background/1.png", NULL);
    var.background1_s = sfSprite_create();
    sfSprite_setTexture(var.background1_s, var.background1_t, sfTrue);
    sfSprite_setScale(var.background1_s, var.scalex2);
    var.background2_t = sfTexture_createFromFile("res/background/2.png", NULL);
    var.background2_1_s = sfSprite_create();
    var.background2_2_s = sfSprite_create();
    sfSprite_setTexture(var.background2_1_s, var.background2_t, sfTrue);
    sfSprite_setTexture(var.background2_2_s, var.background2_t, sfTrue);
    sfSprite_setScale(var.background2_1_s, var.scalex1_4);
    sfSprite_setScale(var.background2_2_s, var.scalex1_4);
    var.background3_t = sfTexture_createFromFile("res/background/3.png", NULL);
    var.background3_1_s = sfSprite_create();
    var.background3_2_s = sfSprite_create();
    sfSprite_setTexture(var.background3_1_s, var.background3_t, sfTrue);
    sfSprite_setTexture(var.background3_2_s, var.background3_t, sfTrue);
    sfSprite_setScale(var.background3_1_s, var.scalex1_4);
    sfSprite_setScale(var.background3_2_s, var.scalex1_4);
    var = var_background_2(var);
    return var;
}
