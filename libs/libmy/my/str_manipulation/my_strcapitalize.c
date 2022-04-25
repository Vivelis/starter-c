/*
** EPITECH PROJECT, 2021
** task10
** File description:
** my_strcapitalize
*/

#include "../../headers/my.h"

static int toend(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char *my_strcapitalize(char *str)
{
    int index;

    my_strlowcase(str);
    index = toend(str) - 2;
    while (index > 1) {
        if (!_LOW_CHAR_ && !_NUM_) {
            str[index] += 'A' - 'a';
        }
        index--;
    }
    return str;
}
