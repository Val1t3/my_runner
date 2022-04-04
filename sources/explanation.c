/*
** EPITECH PROJECT, 2021
** B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
** File description:
** explanation
*/

#include "../include/my_runner.h"

void explain(void)
{
    my_putstr("This is a My_Runner project created with CSFML by");
    my_putstr(" Valentin WOEHREL.\n\n");
    my_putstr("   ***USAGE***\n");
    my_putstr("./my_runner    -> starting the game\n\n");
    my_putstr("   ***OPTIONS***\n");
    my_putstr("-h print the usage and quit.\n\n");
    my_putstr("   ***INTERACTIONS***\n");
    my_putstr("UP_ARROW       -> jump.\n");
    my_putstr("LEFT/RIGHT_KEY -> run at left/right.\n");
    my_putstr("F1/F2/F3...    -> interact in menu.\n");
    my_putstr("CTRL + C       -> quit game.\n");
}
