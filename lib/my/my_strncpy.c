/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** copies n characters from a string into another.
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int cmpt;

    for (cmpt = 0; cmpt < n; cmpt++)
        dest[cmpt] = src[cmpt];
    dest[cmpt] = '\0';
    return dest;
}
