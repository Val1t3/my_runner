/*
** EPITECH PROJECT, 2021
** Task 0
** File description:
** Print char
*/

#include "../include/my_runner.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
