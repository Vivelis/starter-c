/*
** EPITECH PROJECT, 2021
** task08
** File description:
** my_strupcase
*/

char *my_strupcase(char *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (str[index] >= 'a' && str[index] <= 'z') {
            str[index] += 'a' - 'A';
        }
        index++;
    }
    return str;
}
