/*
** EPITECH PROJECT, 2021
** task01
** File description:
** swaps content of 2 integers
*/

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
