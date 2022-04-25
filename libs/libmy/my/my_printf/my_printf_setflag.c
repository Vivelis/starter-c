/*
** EPITECH PROJECT, 2021
** B-PSU-100-TLS-1-1-myprintf-maceo.jalbert
** File description:
** my_printf_setflag.c
*/

#include <stddef.h>
#include <stdlib.h>
#include "../../headers/printf_header.h"
#include "../../headers/my.h"

static int setflag(const char *format, int *i, int *printed, va_list ap)
{
    char *flag = NULL;

    if (format[(*i)] == '%') {
        (*i) += 1;
        flag = find_flag_type(format, i);
        if (!flag)
            return my_puterror("error: bad flag\n", -1);
        (*printed) += call_converter(flag, ap);
        free(flag);
        return 0;
    } else {
        my_putchar(format[(*i)]);
        (*printed) += 1;
        return 0;
    }
}

int find_flag(const char *format, va_list ap)
{
    int printed = 0;

    for (int i = 0; format[i] != '\0'; i++) {
        if (setflag(format, &i, &printed, ap) == 84)
            return -1;
    }
    return printed;
}
