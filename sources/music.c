/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** music
*/

#include "../include/my_runner.h"

variable_t var_music(variable_t var)
{
    var.music = sfMusic_createFromFile("res/music/music.wav");
    sfMusic_setLoop(var.music, sfTrue);
    sfMusic_setVolume(var.music, var.volume);
    var.jump_music = sfMusic_createFromFile("res/music/jump.wav");
    sfMusic_setVolume(var.jump_music, 100);
    return var;
}
