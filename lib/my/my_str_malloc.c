/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_str_malloc.c
*/

#include <stdlib.h>
#include "../../include/lib.h"

char *my_str_malloc(int size)
{
    char *str = malloc(sizeof(char) * (size + 1));

    if (str == NULL) {
        return (str);
    }
    my_memset(str, 0, size);
    str[size] = '\0';
    for (int i = 0; i < size; i++) {
        str[i] = ' ';
    }
    return (str);
}
