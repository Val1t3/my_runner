/*
** EPITECH PROJECT, 2022
** my_runner
** File description:
** loop
*/

#include "../include/my_runner.h"

variable_t clock_player_loop(variable_t var)
{
    var.seconds_player = var.time_player.microseconds / 1000000.0;
    var.time_player = sfClock_getElapsedTime(var.clock_player);
    if (var.seconds_player > 0.07) {
        var = anim_walk(var);
        var = anim_hurt(var);
        var = anim_centi(var);
        var = anim_turtle(var);
        if (var.screen == 1) {
            var.score += 1;
            var = make_text_score(var);
        }
        sfClock_restart(var.clock_player);
    }
    return var;
}

variable_t clock_loop(variable_t var)
{
    var.seconds = var.time.microseconds / 1000000.0;
    var.time = sfClock_getElapsedTime(var.clock);
    if (var.seconds > 0.01) {
        var = mov_back(var);
        if (var.screen == 1) {
            var = event_player(var);
            var = collision(var);
        }
        var = ennemies_management(var);
        sfClock_restart(var.clock);
    }
    return var;
}

variable_t event_loop_next(variable_t var)
{
    var = event_settings(var);
    var = make_better_score(var);
    var = event_death(var);
    var = event_victory(var);
    draw_story(var);
    var = event_pause(var);
    return var;
}

variable_t event_loop(variable_t var)
{
    var = analyse_event(var);
    var = clock_loop_add(var);
    if (var.screen == 0)
        var = intro(var);
    var = menu_screen0(var);
    var = menu_screen2(var);
    var = menu_screen4(var);
    var = menu_screen5(var);
    var = event_menu2_screen5(var);
    var = event_screen(var);
    var = event_volume(var);
    var = make_text_volume(var);
    var = do_map_1(var);
    var = do_map_2(var);
    if (var.screen == 0 || var.screen == 5)
        var = event_menu(var);
    if (var.screen == 2 || var.screen == 4)
        var = event_menu_sel(var);
    var = event_loop_next(var);
    return var;
}

void infinite_loop(variable_t var)
{
    while (sfRenderWindow_isOpen(var.window)) {
        var.window_size = sfRenderWindow_getSize(var.window);
        var = event_loop(var);
        if (var.window_size.x < 800 || var.window_size.x > 1920\
        || var.window_size.y < 600 || var.window_size.y > 1080) {
            var.window_size.x = 800;
            var.window_size.y = 600;
            sfRenderWindow_setSize(var.window, var.window_size);
        }
        sfRenderWindow_clear(var.window, sfBlack);
        draw_all(var);
        sfRenderWindow_display(var.window);
    }
}
