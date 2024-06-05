/*
** EPITECH PROJECT, 2023
** my_char_in_str
** File description:
** lib
*/

#include "../../include/lib.h"

int my_char_in_str(char c, char *str)
{
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] == c) {
            return (1);
        }
    }
    return (0);
}
