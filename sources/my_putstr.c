/*
** EPITECH PROJECT, 2021
** Task 02 - my_putstr
** File description:
** This fonction displays, one-by-one, the characters of a string
*/

#include "../include/my_runner.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
