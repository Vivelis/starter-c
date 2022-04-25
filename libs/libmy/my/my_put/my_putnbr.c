/*
** EPITECH PROJECT, 2021
** my_putnbr
** File description:
** fonction for my library
*/

#include "../../headers/my.h"

static int my_putnbr_rec(int nbr)
{
    if (nbr < 0) {
        my_putchar('-');
        nbr *= -1;
    }
    if (nbr == 0) {
        return 0;
    }
    my_putnbr_rec(nbr / 10);
    my_putchar(nbr % 10 + '0');
    return 0;
}

int my_putnbr(int nbr)
{
    if (nbr == 0) {
        my_putchar('0');
        return 0;
    }
    my_putnbr_rec(nbr);
    return 0;
}
