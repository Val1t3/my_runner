/*
** EPITECH PROJECT, 2022
** my_runner
** File description:
** main
*/

#include "../include/my_runner.h"

variable_t create_clock(variable_t var)
{
    var.clock = sfClock_create();
    var.clock_player = sfClock_create();
    var.clock_jump = sfClock_create();
    var.clock_down = sfClock_create();
    var.clock_intro = sfClock_create();
    var.clock_boss = sfClock_create();
    var.clock_map = sfClock_create();
    return var;
}

variable_t declare_all(variable_t var)
{
    var = normal_var(var);
    var = var_background(var);
    var = var_player(var);
    var = var_ennemies(var);
    var = var_menu(var);
    var = var_portrait(var);
    var = var_text(var);
    var = var_music(var);
    return var;
}

int main(int ac, char **av)
{
    variable_t var;

    var = declare_all(var);
    if (ac == 1) {
        var = create_clock(var);
        var.window = sfRenderWindow_create(var.video_mode, "MOA",\
        sfDefaultStyle, NULL);
        sfRenderWindow_setFramerateLimit(var.window, 144);
        sfMusic_play(var.music);
        srand(time(NULL));
        infinite_loop(var);
    } else if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        explain();
    return 0;
}
