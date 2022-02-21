/*
** EPITECH PROJECT, 2021
** B-PSU-100-TLS-1-1-myprintf-maceo.jalbert
** File description:
** my_printf.c
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../headers/my.h"
#include "../../headers/printf_header.h"

int my_printf(const char *format, ...)
{
    int printed = 0;
    va_list ap;

    va_start(ap, format);
    printed = find_flag(format, ap);
    if (printed <= -1)
        return 84;
    return printed;
}
