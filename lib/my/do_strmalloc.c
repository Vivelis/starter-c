/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** do_strmalloc.c
*/

#include <stdlib.h>

void do_strmalloc(char *str, ssize_t size)
{
    str = malloc(sizeof(char) * (size + 1));
    if (!str)
        my_puterror("error: malloc have failed");
}