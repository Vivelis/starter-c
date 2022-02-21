/*
** EPITECH PROJECT, 2021
** B-PSU-100-TLS-1-1-myprintf-maceo.jalbert
** File description:
** my_printf_fct_array_manipulation.c
*/

#include "../../headers/printf_header.h"
#include "../../headers/my.h"
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

int insert(fct_array_t *fct_array, char flag, int (*fct) (va_list))
{
    ffct_t *new = malloc(sizeof(*new));

    if (fct_array == NULL || new == NULL) {
        return (84);
    }
    new->flag = flag;
    new->fct = fct;
    new->next = fct_array->first;
    fct_array->first = new;
    return 0;
}

fct_array_t *initialisation(void)
{
    fct_array_t *fct_array = malloc(sizeof(*fct_array));
    ffct_t *ffct = malloc(sizeof(*ffct));

    if (fct_array == NULL || ffct == NULL) {
        return NULL;
    }
    ffct->flag = 'd';
    ffct->fct = disp_sint;
    ffct->next = NULL;
    fct_array->first = ffct;
    return fct_array;
}

fct_array_t *init_fct_array(void)
{
    fct_array_t *fct_array = initialisation();

    if (!fct_array)
        return NULL;
    insert(fct_array, 'd', &disp_sint);
    insert(fct_array, 'i', &disp_sint);
    insert(fct_array, 'o', &disp_o_usint);
    insert(fct_array, 'u', &disp_u_usint);
    insert(fct_array, 'x', &disp_x_usint);
    insert(fct_array, 'X', &disp_majx_usint);
    insert(fct_array, 'b', &disp_binar);
    insert(fct_array, 'c', &disp_char);
    insert(fct_array, 's', &disp_string);
    insert(fct_array, 'S', &disp_printable_str);
    insert(fct_array, 'p', &disp_pointer);
    insert(fct_array, '%', &disp_pourcent);
    return fct_array;
}

void free_fct_array(fct_array_t *fct_array)
{
    ffct_t *last = fct_array->first;

    while (fct_array->first != NULL) {
        fct_array->first = last->next;
        free(last);
        last = fct_array->first;
    }
}
