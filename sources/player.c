/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** palyer
*/

#include "../include/my_runner.h"

variable_t var_player_2(variable_t var)
{
    var.man_death =\
    sfTexture_createFromFile("res/player/man/Man_death.png", NULL);
    var.woman_death =\
    sfTexture_createFromFile("res/player/woman/Woman_death.png", NULL);
    var.dwarf_death =\
    sfTexture_createFromFile("res/player/dwarf/Boy_death.png", NULL);
    return var;
}

variable_t var_player(variable_t var)
{
    var.player = sfSprite_create();
    var.man_walks =\
    sfTexture_createFromFile("res/player/man/Man_walk.png", NULL);
    var.woman_walks =\
    sfTexture_createFromFile("res/player/woman/Woman_walk.png", NULL);
    var.dwarf_walks =\
    sfTexture_createFromFile("res/player/dwarf/Boy_walk.png", NULL);
    sfSprite_setTexture(var.player, var.man_walks, sfTrue);
    sfSprite_setScale(var.player, var.scalex3);
    sfSprite_setTextureRect(var.player, var.rect_pla);
    sfSprite_setPosition(var.player, var.pos_player);
    var.man_hurt =\
    sfTexture_createFromFile("res/player/man/Man_hurt.png", NULL);
    var.woman_hurt =\
    sfTexture_createFromFile("res/player/woman/Woman_hurt.png", NULL);
    var.dwarf_hurt =\
    sfTexture_createFromFile("res/player/dwarf/Boy_hurt.png", NULL);
    var = var_player_2(var);
    return var;
}
