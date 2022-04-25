/*
** EPITECH PROJECT, 2021
** B-PSU-100-TLS-1-1-myprintf-maceo.jalbert
** File description:
** my_printf_s_int.c
*/

#include "../../headers/my.h"
#include <stdarg.h>
#include <stddef.h>

static int show_pointer(long nbr)
{
    int printed = 0;

    if (nbr == 0) {
        return 0;
    }
    printed += show_pointer(nbr / 16);
    nbr %= 16;
    if (nbr > 9)
        nbr += 39;
    my_putchar(nbr + '0');
    printed++;
    return printed;
}

int disp_pointer(va_list ap)
{
    void *ptr = NULL;
    int printed = 0;

    ptr = va_arg(ap, void *);
    my_putstr("0x");
    printed = show_pointer((long)ptr) + 2;
    return printed;
}

int disp_pourcent(va_list ap)
{
    my_putchar('%');
    return 1;
}
