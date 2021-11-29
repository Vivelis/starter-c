/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** fonction for my library
*/

#include "../headers/my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb == 0) {
        return 0;
    }
    my_put_nbr(nb / 10);
    my_putchar(nb % 10 + '0');
    return 0;
}
