/*
** EPITECH PROJECT, 2021
** task02
** File description:
** display one by one the characters of a string
*/

#include "../../headers/my.h"
#include <unistd.h>

void my_putstr(char const *str)
{
    size_t len = 0;

    len = my_strlen(str);
    write(1, str, len);
}
