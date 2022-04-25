/*
** EPITECH PROJECT, 2021
** task06
** File description:
** a function that sort an integer in ascending order.
*/

#include "../../headers/my.h"

static int condition(int *array, int size, int *cmpt)
{
    int temp;

    if (*cmpt <= (size - 1)) {
        if (array[*cmpt] > array[*cmpt + 1]) {
            temp = array[*cmpt];
            array[*cmpt] = array[*cmpt + 1];
            array[*cmpt + 1] = temp;
        }
        (*cmpt)++;
        return 1;
    } else {
        *cmpt = 0;
        return 0;
    }
}

void my_sort_int_array(int *array, int size)
{
    int cmpt = 0;
    char error;

    while ((cmpt <= (size - 2) && error == 1)) {
        error = condition(array, size, &cmpt);
    }

}
