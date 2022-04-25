/*
** EPITECH PROJECT, 2021
** task05
** File description:
** write a function that returns the square root of the number given
** as argument.
*/

int my_compute_square_root(int nb)
{
    int square_root = 1;

    if (nb == 1) {
        return 1;
    }
    while (square_root < nb) {
        if (square_root * square_root == nb) {
            return square_root;
        }
        square_root++;
    }
    return 0;
}
