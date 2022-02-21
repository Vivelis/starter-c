/*
** EPITECH PROJECT, 2021
** my_str_isprintable
** File description:
** fonction for my library
*/

#include "../../headers/my.h"

char my_str_isprintable(char *str)
{
    if (!str) {
        my_puterror("error: my_str_isprintable: str is NULL", 84);
        return 'e';
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > ' ')
            return 'n';
    }
    return 'y';
}
