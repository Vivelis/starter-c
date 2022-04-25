/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** reproduce strstr
*/

#include "../../headers/my.h"

char *my_strstr(char *str, char const *to_find)
{
    int cmpt = 0;
    int to_find_lenght;
    int res;

    to_find_lenght = my_strlen(to_find);
    while (str[cmpt] != '\0') {
        res = my_strncmp(&str[cmpt], to_find, to_find_lenght);
        if (res == 0) {
            return &str[cmpt];
        }
        cmpt++;
    }
    return 0;
}
