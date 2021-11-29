/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** compare the n first bytes of two strings.
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int s1_value = 0;
    int s2_value = 0;

    for (int i = 0; s1[i] != '\0' && i < n; i++) {
        s1_value += (int)s1[i];
    }
    for (int j = 0; s2[j] != '\0' && j < n; j++) {
        s2_value += (int)s2[j];
    }
    return (s1_value - s2_value);
}
