/*
** EPITECH PROJECT, 2023
** my_get_number
** File description:
** lib
*/

#include "../../include/lib.h"

int my_get_number(char *nb_in_str)
{
    int result = 0;

    for (int i = 0; i < my_strlen(nb_in_str); i++) {
        result *= 10;
        result += nb_in_str[i] - 48;
    }
    return (result);
}
