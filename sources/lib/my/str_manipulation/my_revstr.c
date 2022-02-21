/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** reverses a string.
*/

#include "../../headers/my.h"

char *my_revstr(char *str)
{
    char temp;
    int cmpt = 0;
    int rev_cmpt;
    int len;

    len = my_strlen(str);
    rev_cmpt = len - 1;
    while (rev_cmpt - cmpt > 0) {
        temp = str[cmpt];
        str[cmpt] = str[rev_cmpt];
        str[rev_cmpt] = temp;
        cmpt++;
        rev_cmpt--;
    }
    return str;
}
