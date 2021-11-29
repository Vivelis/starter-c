/*
** EPITECH PROJECT, 2021
** my_puterror
** File description:
** print the str in param in the error output
*/

#include "../headers/my.h"
#include <unistd.h>

void my_puterror(char *str)
{
    int len = 0;

    len = my_strlen(str);
    write(2, str, len);
    exit(84);
}
