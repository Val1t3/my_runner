/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** better_score
*/

#include "../include/my_runner.h"

variable_t make_better_score(variable_t var)
{
    var.fd = open("score.txt", O_RDONLY);
    var.buffer = malloc(sizeof(char) * 5);
    var.char_better_score = malloc(sizeof(char) * 5);
    read(var.fd, var.buffer, 4);
    if (var.fd == -1) {
        close(var.fd);
        my_putstr("Better score don't find\n");
        var.char_better_score[0] = '0';
        var.char_better_score[1] = '0';
        var.char_better_score[2] = '0';
        var.char_better_score[3] = '0';
        var.char_better_score[4] = '\0';
    }
    else if (var.buffer[0] == '\0') {
        var.char_better_score[0] = '0';
        var.char_better_score[1] = '0';
        var.char_better_score[2] = '0';
        var.char_better_score[3] = '0';
        var.char_better_score[4] = '\0';
    }
    else {
        var.char_better_score[0] = var.buffer[0];
        var.char_better_score[1] = var.buffer[1];
        var.char_better_score[2] = var.buffer[2];
        var.char_better_score[3] = var.buffer[3];
        var.char_better_score[4] = '\0'; 
    }
    close(var.fd);
    return var;
}

variable_t better_score_2(variable_t var)
{
    var.fd = open("score.txt", O_RDWR | O_TRUNC);
    write(var.fd, var.score_str, 4);
    close(var.fd);
    return var;
}

variable_t better_score_death(variable_t var)
{
    if (var.level == 2 && var.screen == 3) {
        var.int_better_score = ((var.char_better_score[0] - 48) * 1000)\
        + ((var.char_better_score[1] - 48) * 100) + ((var.char_better_score[2]\
        - 48) * 10) + (var.char_better_score[3] - 48);
        if (var.score > var.int_better_score)
            var = better_score_2(var);
    }
    return var;
}
