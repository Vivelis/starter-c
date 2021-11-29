/*
** EPITECH PROJECT, 2021
** task04
** File description:
** an recursive fonction that returns the first argument raised
** to power p, where p is the second argument.
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0) {
        return 1;
    }
    if (p < 0) {
        return 0;
    }
    nb *= my_compute_power_rec(nb, p - 1);
    return nb;
}
