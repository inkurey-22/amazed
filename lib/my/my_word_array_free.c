/*
** EPITECH PROJECT, 2023
** B-PSU-200-LIL-2-1-minishell1-yanis.monte
** File description:
** my_word_array_free.c
*/

#include "../../include/lib.h"

void my_word_array_free(char **word_array)
{
    if (word_array == NULL)
        return;
    for (int i = 0; word_array[i] != 0; i++) {
        if (word_array[i] != NULL)
            free(word_array[i]);
    }
    free(word_array);
}
