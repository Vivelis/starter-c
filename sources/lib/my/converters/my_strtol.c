/*
** EPITECH PROJECT, 2021
** my_strtol
** File description:
** transform char to int
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../headers/my.h"

char is_number(char input)
{
    if (input <= '9') {
        if (input >= '0') {
            return 'y';
        }
    }
    return 'n';
}

char *dup_nchar(char *str, int n)
{
    char *str_nbr = NULL;

    str_nbr = malloc(sizeof(char) * (n + 1));
    while (n > 0) {
        str_nbr[n - 1] = str[n - 1];
        n--;
    }
    return str_nbr;
}

int unsigned_nbr_to_int(char *str_nbr)
{
    int indent = 1;
    int result = 0;
    int length = 0;

    length = my_strlen(str_nbr);
    for (length -= 1; length >= 0; length--) {
        result += (str_nbr[length] - '0') * indent;
        indent *= 10;
    }
    return result;
}

int my_strtol(char *str, int *end_index)
{
    int start = 0;
    int i = 0;
    char *str_nbr = NULL;

    while (is_number(str[start]) == 'n' && str[start] != '-')
        start++;
    if (str[i + start] == '-')
        i++;
    while (is_number(str[i + start]) == 'y') {
        i++;
    }
    *end_index += (i + start - 1);
    str_nbr = dup_nchar(&str[start], i);
    if (str_nbr[0] == '-') {
        i = unsigned_nbr_to_int(&str_nbr[1]) * -1;
    } else {
        i = unsigned_nbr_to_int(str_nbr);
    }
    free(str_nbr);
    return i;
}
