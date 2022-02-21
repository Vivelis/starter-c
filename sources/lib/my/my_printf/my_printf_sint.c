/*
** EPITECH PROJECT, 2021
** B-PSU-100-TLS-1-1-myprintf-maceo.jalbert
** File description:
** my_printf_s_int.c
*/

#include "../../headers/my.h"
#include <stdarg.h>

/* display the int nbr parameter and
return the nb of characters displayed. */
int put_snbr_printf(int nbr)
{
    int printed = 0;

    if (nbr < 0) {
        my_putchar('-');
        nbr *= -1;
        printed++;
    }
    if (nbr == 0) {
        return 0;
    }
    printed += put_snbr_printf(nbr / 10);
    my_putchar(nbr % 10 + '0');
    printed++;
    return printed;
}

int disp_sint(va_list ap)
{
    int nbr = 0;
    int printed = 0;

    nbr = va_arg(ap, int);
    if (nbr == 0) {
        my_putchar('0');
        printed = 1;
    }
    printed = put_snbr_printf(nbr);
    return printed;
}
