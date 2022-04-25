/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** dup_nchar.c
*/

#include <stdlib.h>

char *dup_nchar(char *str, int n)
{
    char *str_nbr = NULL;

    str_nbr = malloc(sizeof(char) * (n + 1));
    while (n > 0 && str[n - 1] != '\0') {
        str_nbr[n - 1] = str[n - 1];
        n--;
    }
    return str_nbr;
}
