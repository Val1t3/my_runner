/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** portrait
*/

#include "../include/my_runner.h"

variable_t var_next2(variable_t var)
{
    var.icon_boss_t =\
    sfTexture_createFromFile("res/portrait/boss.png", NULL);
    var.icon_boss_s = sfSprite_create();
    sfSprite_setTexture(var.icon_boss_s, var.icon_boss_t, sfTrue);
    sfSprite_setScale(var.icon_boss_s, var.scalex5);
    sfSprite_setPosition(var.icon_boss_s, var.pos_icon_boss);
    return var;
}

variable_t var_portrait(variable_t var)
{
    var.icon_man_t =\
    sfTexture_createFromFile("res/portrait/male.png", NULL);
    var.icon_woman_t =\
    sfTexture_createFromFile("res/portrait/female.png", NULL);
    var.icon_dwarf_t =\
    sfTexture_createFromFile("res/portrait/dwarf.png", NULL);
    var.icon_man_s = sfSprite_create();
    var.icon_woman_s = sfSprite_create();
    var.icon_dwarf_s = sfSprite_create();
    sfSprite_setTexture(var.icon_man_s, var.icon_man_t, sfTrue);
    sfSprite_setTexture(var.icon_woman_s, var.icon_woman_t, sfTrue);
    sfSprite_setTexture(var.icon_dwarf_s, var.icon_dwarf_t, sfTrue);
    sfSprite_setScale(var.icon_dwarf_s, var.scalex5);
    sfSprite_setScale(var.icon_man_s, var.scalex5);
    sfSprite_setScale(var.icon_woman_s, var.scalex5);
    sfSprite_setPosition(var.icon_man_s, var.pos_icon_man);
    sfSprite_setPosition(var.icon_woman_s, var.pos_icon_woman);
    sfSprite_setPosition(var.icon_dwarf_s, var.pos_icon_dwarf);
    var = var_next2(var);
    return var;
}
