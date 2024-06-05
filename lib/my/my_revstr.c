/*
** EPITECH PROJECT, 2023
** my_revstr
** File description:
** day06
*/

#include "../../include/lib.h"

char *my_revstr(char *str)
{
    char temp;

    for (int i = 0; i < my_strlen(str) / 2; i += 1) {
        temp = str[my_strlen(str) - i - 1];
        str[my_strlen(str) - i - 1] = str[i];
        str[i] = temp;
    }
    return (str);
}
