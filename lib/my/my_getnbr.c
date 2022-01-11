/*
** EPITECH PROJECT, 2021
** task05
** File description:
** a fonction that return a number, sent to the fct as a string.
*/

static int my_cond(int cmpt, char const *str)
{
    long unit = 1;
    int result = 0;

    while ((str[cmpt] >= '0' && str[cmpt] <= '9') || str[cmpt] == '-') {
        if (str[cmpt] == '-') {
            result *= -1;
            return result;
        }
        if (result + unit >= 2147483646 || result + unit <= -2147483647) {
            return 0;
        }
        result += unit * (str[cmpt] - 48);
        unit *= 10;
        cmpt--;
    }
    return result;
}

int my_getnbr(char const *str)
{
    int cmpt = 0;

    while (!(str[cmpt] >= '0' && str[cmpt] <= '9')) {
        if (str[cmpt] == '\0')
            return 0;
        else
            cmpt++;
    }
    while (str[cmpt] >= '0' && str[cmpt] <= '9') {
        cmpt++;
    }
    cmpt--;
    return my_cond(cmpt, str);
}
