/*
** EPITECH PROJECT, 2023
** my_str_to_min
** File description:
** lib
*/

char *my_str_to_min(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    return (str);
}
