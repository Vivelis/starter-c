/*
** EPITECH PROJECT, 2021
** my_memset
** File description:
** fill the first n bytes of s with c
*/

#include "../../headers/my.h"

void my_memset(char *s, char c, int n)
{
    for (int i = 0; i < n; i++) {
        s[i] = c;
    }
}
