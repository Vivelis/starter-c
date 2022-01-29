/*
** EPITECH PROJECT, 2021
** my_putnbr
** File description:
** fonction for my library
*/

#include "../../headers/my.h"

int my_putnbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb == 0) {
        return 0;
    }
    my_putnbr(nb / 10);
    my_putchar(nb % 10 + '0');
    return 0;
}
