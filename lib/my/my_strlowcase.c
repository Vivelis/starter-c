/*
** EPITECH PROJECT, 2021
** task09
** File description:
** mr_strlowcase
*/

char *my_strlowcase(char *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (str[index] >= 'A' && str[index] <= 'Z') {
            str[index] += 'A' - 'a';
        }
        index++;
    }
    return str;
}
