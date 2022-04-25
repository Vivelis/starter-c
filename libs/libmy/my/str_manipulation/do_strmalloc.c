/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** do_strmalloc.c
*/

#include <stdlib.h>
#include <stddef.h>
#include "../../headers/my.h"

int do_strmalloc(char **str, ssize_t size)
{
    *str = malloc(sizeof(char) * (size + 1));

    if (size <= 0) {
        *str = NULL;
        return my_puterror("error: bad size\n", 84);
    }
    if (!str) {
        *str = NULL;
        return my_puterror("error: malloc have failed\n", 84);
    }
    return 0;
}
