/*
** EPITECH PROJECT, 2021
** B-PSU-100-TLS-1-1-myprintf-maceo.jalbert
** File description:
** my_printf_us_int.c
*/

#include "../../headers/my.h"
#include <stdarg.h>

/* display the unsigned int nbr parameter in octal
and return the nb of characters displayed. */
int conv_us_printf(unsigned int nbr, unsigned int base)
{
    int printed = 0;

    if (nbr == 0) {
        return 0;
    }
    printed += conv_us_printf(nbr / base, base);
    nbr %= base;
    if (nbr > 9)
        nbr += 7;
    my_putchar(nbr + '0');
    printed++;
    return printed;
}

int disp_o_usint(va_list ap)
{
    int printed = 0;
    unsigned int nbr;

    nbr = va_arg(ap, unsigned int);
    printed = conv_us_printf(nbr, 8);
    return printed;
}

int disp_u_usint(va_list ap)
{
    int printed = 0;
    unsigned int nbr;

    nbr = va_arg(ap, unsigned int);
    if (nbr == 0) {
        my_putchar('0');
        printed = 1;
    }
    printed = conv_us_printf(nbr, 10);
    return printed;
}

int disp_majx_usint(va_list ap)
{
    int printed = 0;
    unsigned int nbr;

    nbr = va_arg(ap, unsigned int);
    if (nbr == 0) {
        my_putchar('0');
        printed = 1;
    }
    printed = conv_us_printf(nbr, 16);
    return printed;
}

int disp_binar(va_list ap)
{
    int printed = 0;
    unsigned int nbr;

    nbr = va_arg(ap, unsigned int);
    if (nbr == 0) {
        my_putchar('0');
        printed = 1;
    }
    printed = conv_us_printf(nbr, 2);
    return printed;
}
