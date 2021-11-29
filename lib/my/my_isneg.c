/*
** EPITECH PROJECT, 2021
** my_isneg
** File description:
** a function that displays either Nif the integer passed
** as parameter is negative or P, if positive or null.
*/

#include "../headers/my.h"

int my_isneg(int n)
{
    char when_neg = 78;
    char when_pos = 80;

    if (n < 0) {
        my_putchar(when_neg);
    } else {
        my_putchar(when_pos);
    }
    return 0;
}
