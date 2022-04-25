/*
** EPITECH PROJECT, 2021
** task07
** File description:
** a function that return the smallest prime number that is
** greater than or equal to the number given as a parameter.
*/

#include "../../headers/my.h"

int my_find_prime_sup(int nb)
{
    long temp = nb;

    if (temp++ > 2147483647) {
        return 0;
    }
    if (temp < 0) {
        temp = 0;
    }
    while (my_is_prime(temp) == 0) {
        temp++;
    }
    return nb;
}
