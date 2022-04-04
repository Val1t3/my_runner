/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** animation
*/

#include "../include/my_runner.h"

variable_t anim_walk(variable_t var)
{
    if (var.anim == 0)
        var.rect_pla.left = 0;
    if (var.anim == 1 || var.anim == 4)
        var.rect_pla.left = 48;
    if (var.anim == 2 || var.anim == 5)
        var.rect_pla.left = 96;
    if (var.anim == 3)
        var.rect_pla.left = 144;
    if (!(var.anim == 3 && var.life == 0))
        var.anim++;
    if (var.anim > 5)
        var.anim = 0;
    sfSprite_setTextureRect(var.player, var.rect_pla);
    return var;
}

variable_t anim_centi(variable_t var)
{
    if (var.anim == 0)
        var.rect_enne.left = 24;
    if (var.anim == 1 || var.anim == 4)
        var.rect_enne.left = 96;
    if (var.anim == 2 || var.anim == 5)
        var.rect_enne.left = 168;
    if (var.anim == 3)
        var.rect_enne.left = 240;
    sfSprite_setTextureRect(var.ennemie1, var.rect_enne);
    return var;
}

variable_t anim_turtle(variable_t var)
{
    if (var.anim == 0)
        var.rect_turtle.left = 10;
    if (var.anim == 1 || var.anim == 4)
        var.rect_turtle.left = 82;
    if (var.anim == 2 || var.anim == 5)
        var.rect_turtle.left = 154;
    if (var.anim == 3)
        var.rect_turtle.left = 226;
    sfSprite_setTextureRect(var.ennemie2, var.rect_turtle);
    return var;
}

variable_t anim_texture(variable_t var)
{
    if (var.race == 0)
        sfSprite_setTexture(var.player, var.man_walks, sfTrue);
    if (var.race == 1)
        sfSprite_setTexture(var.player, var.woman_walks, sfTrue);
    if (var.race == 2)
        sfSprite_setTexture(var.player, var.dwarf_walks, sfTrue);
    return var;
}

variable_t anim_hurt(variable_t var)
{
    if (var.hurt == 0 || var.hurt == 2)
        var.rect_pla.left = 0;
    if (var.hurt == 1 || var.hurt == 3)
        var.rect_pla.left = 48;
    if (var.hurt > 3)
        var = anim_texture(var);
    var.hurt++;
    sfSprite_setTextureRect(var.player, var.rect_pla);
    return var;
}
