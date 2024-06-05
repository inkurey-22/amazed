/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_str_realloc.c
*/

#include "../../include/lib.h"
#include <stdlib.h>

char *my_str_realloc(char *str, int size)
{
    char *new_str = my_str_malloc(size);
    int old_size = my_strlen(str);

    if (new_str == NULL)
        return (NULL);
    for (int i = 0; i < size; i++) {
        if (i < old_size) {
            new_str[i] = str[i];
        } else {
            new_str[i] = ' ';
        }
    }
    free(str);
    return (new_str);
}
