/*
** EPITECH PROJECT, 2023
** B-PSU-200-LIL-2-1-minishell1-yanis.monte
** File description:
** my_word_array_dup.c
*/

#include "../../include/lib.h"

char **my_word_array_dup(char **word_array)
{
    int size = my_word_array_len(word_array);
    char **cpy = malloc(sizeof(char *) * (size + 1));

    cpy[size] = 0;
    for (int i = 0; i < size; i++) {
        cpy[i] = my_strdup(word_array[i]);
    }
    return (cpy);
}
