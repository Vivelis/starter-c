/*
** EPITECH PROJECT, 2021
** my_inttos
** File description:
** integer to string
*/

#include "../../headers/my.h"
#include <stddef.h>
#include <stdlib.h>

int my_intlen(int nbr)
{
    if (nbr == 0)
        return nbr;
    return (my_intlen(nbr / 10) + 1);
}

static char *rec_inttos(int nbr, int index, char *str)
{
    if (nbr == 0) {
        return "0";
    }
    rec_inttos(nbr / 10, index + 1, str);
    str[index] = nbr % 10 + '0';
    return str;
}

char *my_inttos(int nbr)
{
    char *str = NULL;
    int length = 0;

    length = my_intlen(nbr);
    if (nbr == 0) {
        return "0";
    }
    if (nbr < 0)
        length++;
    str = malloc(sizeof(char) * length);
    my_memset(str, '0', length);
    if (nbr < 0) {
        str[length - 1] = '-';
        nbr *= -1;
    }
    str = rec_inttos(nbr, 0, str);
    str = my_revstr(str);
    return str;
}
