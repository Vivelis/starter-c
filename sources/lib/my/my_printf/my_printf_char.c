/*
** EPITECH PROJECT, 2021
** B-PSU-100-TLS-1-1-myprintf-maceo.jalbert
** File description:
** my_printf_s_int.c
*/

#include "../../headers/my.h"
#include <stdarg.h>
#include <stddef.h>

static void put_octal(char c)
{
    int coef = 64;
    int unit = 0;

    my_putchar('\\');
    for (int count = 3; count > 0; count--) {
        if (c / coef >= 1) {
            unit = c / coef;
            c %= coef;
        }
        my_putchar(unit + '0');
        unit = 0;
        coef /= 8;
    }
}

int putstr_printable(char *str)
{
    int printed = 0;

    for (int index = 0; str[index] != '\0'; index++) {
        if (str[index] >= 32 && str[index] < 127) {
            my_putchar(str[index]);
            printed++;
        } else {
            put_octal(str[index]);
            printed += 4;
        }
    }
    return printed;
}

int disp_char(va_list ap)
{
    char c = 0;

    c = va_arg(ap, int);
    my_putchar(c);
    return 1;
}

int disp_string(va_list ap)
{
    char *str = NULL;
    int printed = 0;

    str = va_arg(ap, char *);
    my_putstr(str);
    printed = my_strlen(str);
    return printed;
}

int disp_printable_str(va_list ap)
{
    char *str = NULL;
    int printed = 0;

    str = va_arg(ap, char *);
    printed = putstr_printable(str);
    return printed;
}
