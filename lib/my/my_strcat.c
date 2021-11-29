/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** concatenate two strings
*/

char *my_strcat(char *dest, char const *src)
{
    int index_dest = 0;
    int index_src = 0;

    while (dest[index_dest] != '\0') {
        index_dest++;
    }
    while (src[index_src] != '\0') {
        dest[index_dest] = src[index_src];
        index_dest++;
        index_src++;
    }
    dest[index_dest] = '\0';
    return dest;
}
