/*
** EPITECH PROJECT, 2021
** my_strcpy
** File description:
** a function that copies a string into another.
*/

#include "../../headers/my.h"

int my_strcpy(char **dest, char *src)
{
    int i = 0;

    if (dest == NULL || src == NULL)
        return my_puterror("error:my_strcpy: input is NULL", 84);
    while (src[i] != '\0') {
        (*dest[i]) = src[i];
        i++;
    }
    (*dest[i]) = '\0';
    return 0;
}
