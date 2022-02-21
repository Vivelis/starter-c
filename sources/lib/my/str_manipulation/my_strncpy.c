/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** copies n characters from a string into another.
*/

#include "../../headers/my.h"

int my_strncpy(char **dest, char *src, int n)
{
    int cmpt;

    if (dest == NULL || src == NULL)
        return my_puterror("error:my_strncpy: input is NULL", 84);
    for (cmpt = 0; cmpt < n; cmpt++)
        (*dest[cmpt]) = src[cmpt];
    (*dest[cmpt]) = '\0';
    return 0;
}
