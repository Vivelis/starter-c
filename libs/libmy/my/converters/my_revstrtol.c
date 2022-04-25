/*
** EPITECH PROJECT, 2021
** my_revstrtol
** File description:
** rev string to int
*/

#include "../../headers/my.h"
#include <stddef.h>

static int conv_nbr(char *str_nbr)
{
    if (str_nbr[0] == '-') {
        free(str_nbr);
        return (unsigned_nbr_to_int(&str_nbr[1]) * -1);
    } else {
        free(str_nbr);
        return (unsigned_nbr_to_int(str_nbr));
    }
}

int my_revstrtol(char *str, int *start)
{
    int len = 1;
    char *str_nbr = NULL;

    while (is_number(str[*start]) == 'n')
        *start -= 1;
    while (*start > 0 && is_number(str[*start]) == 'y') {
        *start -= 1;
        len++;
    }
    if (*start > 0) {
        if (str[*start] == '-' &&
            (str[*start - 1] == ' ' || str[*start - 1] == '('))
            *start -= 1;
    }
    str_nbr = dup_nchar(&str[*start], len);
    return (conv_nbr(str_nbr));
}
