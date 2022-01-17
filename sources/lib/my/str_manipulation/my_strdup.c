/*
** EPITECH PROJECT, 2021
** task01
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "../../headers/my.h"

char *my_strdup(char const *src)
{
    char *res = NULL;
    int lenght = 0;

    if (src == NULL)
        return NULL;
    lenght = my_strlen(src);
    if ((res = malloc(sizeof(char) * (lenght + 1))) == NULL)
        return NULL;
    for (int i = 0; i <= lenght; i++)
        res[i] = src[i];
    return res;
}
