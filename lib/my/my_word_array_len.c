/*
** EPITECH PROJECT, 2023
** B-PSU-200-LIL-2-1-minishell1-yanis.monte
** File description:
** my_word_array_len.c
*/

int my_word_array_len(char **word_array)
{
    int size = 0;

    while (word_array[size] != 0) {
        size++;
    }
    return (size);
}
