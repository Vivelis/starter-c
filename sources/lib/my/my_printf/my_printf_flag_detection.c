/*
** EPITECH PROJECT, 2021
** B-PSU-100-TLS-1-1-myprintf-maceo.jalbert
** File description:
** my_printf_flag_detection.c
*/

#include "../../headers/printf_header.h"
#include "../../headers/my.h"
#include <stddef.h>
#include <stdlib.h>

static int browse_flagarray(char *flag, int f, fct_array_t *fct_a, va_list ap)
{
    ffct_t *last = fct_a->first;
    int printed = 0;

    if (last == NULL)
        return 0;
    while (last->next != NULL) {
        if (flag[f] == last->flag) {
            printed = last->fct(ap);
            free_fct_array(fct_a);
            return printed;
        }
        last = last->next;
    }
    my_putchar('%');
    return 1;
}

int call_converter(char *flag, va_list ap)
{
    fct_array_t *fct_array = init_fct_array();
    int printed = 0;

    if (flag == NULL)
        return my_puterror("error: flag is NULL\n", -1);
    if (!fct_array)
        return my_puterror("error: can't initialize fct_array\n", -1);
    for (int f = 0; flag[f] != '\0'; f++) {
        printed += browse_flagarray(flag, f, fct_array, ap);
    }
    free_fct_array(fct_array);
    return printed;
}

int isflag(char c)
{
    const char flags_array[] = "#0- +%diouxXbcsSp";

    for (int index = 0; flags_array[index] != '\0'; index++) {
        if (flags_array[index] == c) {
            return index;
        }
    }
    return -1;
}

char *find_flag_type(const char *str, int *index)
{
    char *flag = NULL;
    int flag_index = 0;
    int len = 1;

    flag_index = isflag(str[*index]);
    if (flag_index == -1 ) {
        flag = malloc(sizeof(char) * 2);
        flag[0] = str[*index];
        return flag;
    }
    if (flag_index < 5)
        len++;
    flag = malloc(sizeof(char) * (len + 1));
    if (flag == NULL)
        return NULL;
    for (int x = 0; x < len; x++) {
        *index = *index + x;
        flag[x] = str[(*index)];
    }
    return flag;
}
