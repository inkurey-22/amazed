/*
** EPITECH PROJECT, 2023
** my_strdup
** File description:
** lib
*/

#include "../../include/lib.h"

char *my_strdup(char *str)
{
    int size = my_strlen(str);
    char *dup = my_str_malloc(sizeof(char) * (size + 1));

    if (dup == NULL)
        return (NULL);
    dup[size] = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        dup[i] = str[i];
    }
    return (dup);
}
