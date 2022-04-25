/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** fonction for my library
*/

#include "../../headers/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int index_src = 0;
    int index_dest = 0;
    int dest_lenght;

    dest_lenght = my_strlen(dest);
    index_dest = dest_lenght;
    while (src[index_src] != '\0' && nb > 0) {
        dest[index_dest] = src[index_src];
        index_src++;
        index_dest++;
        nb--;
    }
    dest[index_dest] = '\0';
    return dest;
}
