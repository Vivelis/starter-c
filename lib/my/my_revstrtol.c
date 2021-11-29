/*
** EPITECH PROJECT, 2021
** my_revstrtol
** File description:
** rev string to int
*/

#include "../headers/my.h"
#include <stddef.h>

int my_revstrtol(char *str, int *start)
{
    int result = 0;
    int len = 1;
    char *str_nbr = NULL;

    while (is_number(str[*start]) == 0)
        *start -= 1;
    while (*start > 0 && is_number(str[*start]) == 1) {
        *start -= 1;
        len++;
    }
    if (*start > 0) {
        if (str[*start] == '-' &&
            (str[*start - 1] == ' ' || str[*start - 1] == '('))
            *start -= 1;
    }
    str_nbr = dup_nchar(&str[*start], len);
    if (str_nbr[0] == '-')
        result = unsigned_nbr_to_int(&str_nbr[1]) * -1;
    else
        result = unsigned_nbr_to_int(str_nbr);
    return result;
}
