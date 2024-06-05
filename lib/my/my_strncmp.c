/*
** EPITECH PROJECT, 2023
** my_strncmp
** File description:
** day06
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i < n; i += 1) {
        if (s1[i] < s2[i]) {
            return (-1);
        }
        if (s1[i] > s2[i]) {
            return (1);
        }
    }
    return (0);
}
