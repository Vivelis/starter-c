/*
** EPITECH PROJECT, 2021
** task01
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "../headers/my.h"

char *my_strdup(char const *src)
{
    char *res;
    int lenght;

    lenght = my_strlen(src);
    res = malloc(sizeof(char) * (lenght + 1));
    for (int i = 0; i < lenght; i++) {
        res[i] = src[i];
    }
    return res;
}
