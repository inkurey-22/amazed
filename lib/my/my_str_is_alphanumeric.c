/*
** EPITECH PROJECT, 2023
** B-PSU-200-LIL-2-1-minishell1-yanis.monte
** File description:
** my_str_isalphanumeric.c
*/

int my_str_is_alpha(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z'))
            return (1);
    }
    return (0);
}

int my_str_is_alphanumeric(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z')
        && (str[i] < '0' || str[i] > '9'))
            return (1);
    }
    return (0);
}
