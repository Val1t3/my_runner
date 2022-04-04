/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** death
*/

#include "../include/my_runner.h"

variable_t death(variable_t var)
{
    var.life = 0;
    var.screen = 3;
    return var;
}
