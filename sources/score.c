/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** score
*/

#include "../include/my_runner.h"

variable_t make_next(variable_t var)
{
    if (var.score >= 100 && var.score <= 999) {
        var.score_str[0] = '0';
        var.score_str[1] = (var.score / 100) + 48;
        var.score_str[2] = ((var.score / 10) % 10) + 48;
        var.score_str[3] = (var.score % 10) + 48;
    }
    if (var.score > 999) {
        var.score_str[0] = (var.score / 1000) + 48;
        var.score_str[1] = ((var.score / 100) % 10) + 48;
        var.score_str[2] = ((var.score / 10) % 10) + 48;
        var.score_str[3] = (var.score % 10) + 48;
    }
    return var;
}

variable_t make_text_score(variable_t var)
{
    if (var.score <= 9) {
        var.score_str[0] = '0';
        var.score_str[1] = '0';
        var.score_str[2] = '0';
        var.score_str[3] = var.score + 48;
    }
    if (var.score >= 10 && var.score <= 99) {
        var.score_str[0] = '0';
        var.score_str[1] = '0';
        var.score_str[2] = (var.score / 10) + 48;
        var.score_str[3] = (var.score % 10) + 48;
    }
    var = make_next(var);
    return var;
}

variable_t make_text_volume(variable_t var)
{
    if (var.volume <= 9) {
        var.int_volume_str[0] = ' ';
        var.int_volume_str[1] = var.volume + 48;
        var.int_volume_str[2] = ' ';
    }
    if (var.volume >= 10 && var.volume <= 99) {
        var.int_volume_str[0] = ' ';
        var.int_volume_str[1] = (var.volume / 10) + 48;
        var.int_volume_str[2] = (var.volume % 10) + 48;
    }
    if (var.volume == 100) {
        var.int_volume_str[0] = '1';
        var.int_volume_str[1] = '0';
        var.int_volume_str[2] = '0';
    }
    if (var.screen == 5)
        sfText_setString(var.text5, var.int_volume_str);
    return var;
}
