/*
** EPITECH PROJECT, 2021
** B-PSU-100-TLS-1-1-myprintf-maceo.jalbert
** File description:
** my_printf_usint2.c
*/

#include "../../headers/my.h"
#include <stdarg.h>

/* display the unsigned int nbr parameter in hexadecimal
and return the nb of characters displayed. */
int conv_hex_printf(unsigned int nbr)
{
    int printed = 0;

    if (nbr == 0) {
        return 0;
    }
    printed += conv_hex_printf(nbr / 16);
    nbr %= 16;
    if (nbr > 9)
        nbr += 39;
    my_putchar(nbr + '0');
    printed++;
    return printed;
}

int disp_x_usint(va_list ap)
{
    int printed = 0;
    unsigned int nbr;

    nbr = va_arg(ap, unsigned int);
    if (nbr == 0) {
        my_putchar('0');
        printed = 1;
    }
    printed = conv_hex_printf(nbr);
    return printed;
}
