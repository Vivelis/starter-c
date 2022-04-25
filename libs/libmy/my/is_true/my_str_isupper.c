/*
** EPITECH PROJECT, 2021
** my_str_isupper
** File description:
** fonction for my library
*/

#include "../../headers/my.h"

char my_str_isupper(char *str)
{
    if (!str) {
        my_puterror("error: my_str_isprintable: str is NULL", 84);
        return 'e';
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'A')
            return 'n';
        if (str[i] > 'Z')
            return 'n';
    }
    return 'y';
}
