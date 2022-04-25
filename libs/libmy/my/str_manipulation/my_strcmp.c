/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** return 0 if s1 equal s2; return negative value if s1 less than s2;
** return positive value if s1 greater than s2.
*/

int my_strcmp(char const *s1, char const *s2)
{
    int s1_value = 0;
    int s2_value = 0;

    for (int i = 0; s1[i] != '\0'; i++) {
        s1_value += (int)s1[i];
    }
    for (int j = 0; s2[j] != '\0'; j++) {
        s2_value += (int)s2[j];
    }
    return (s1_value - s2_value);
}
