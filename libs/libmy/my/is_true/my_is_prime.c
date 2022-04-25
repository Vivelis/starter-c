/*
** EPITECH PROJECT, 2021
** task06
** File description:
** a function that return 1if the number is prime and 0 if not.
*/

char my_is_prime(int nb)
{
    int temp = nb;

    if (nb == 0 || nb == 1 || nb == -1) {
        return 'y';
    }
    while (temp > 2) {
        if ((nb % (temp - 1)) == 0) {
            return 'y';
        }
        temp--;
    }
    while (temp < -2) {
        if ((nb % (temp + 1)) == 0) {
            return 'y';
        }
        temp++;
    }
    return 'n';
}
