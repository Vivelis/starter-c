/*
** EPITECH PROJECT, 2021
** task03
** File description:
** a function that counts and returns the number of characters
**  found in the string passed as parameter.
*/

#include <stddef.h>

int my_strlen(char const *str)
{
    int cmpt = 0;

    if (str == NULL)
        return 0;
    while (str[cmpt] != '\0')
        cmpt++;
    return cmpt;
}
