/*
** EPITECH PROJECT, 2023
** my_get_word
** File description:
** lib
*/

#include "../../include/lib.h"
#include <stdlib.h>

static int count_size(char *str, int place)
{
    int indice = 0;
    int i = 0;
    int j;

    while (indice != place) {
        if (str[i] == ' ') {
            indice++;
        }
        i++;
    }
    j = i;
    indice = 0;
    while (str[j] != ' ') {
        indice++;
        j++;
    }
    return (indice);
}

char *my_get_word(char *str, int place)
{
    char *word = malloc(count_size(str, place) + 1);
    int indice = 0;
    int i = 0;
    int j;

    word[count_size(str, place)] = '\0';
    while (indice != place) {
        if (str[i] == ' ') {
            indice++;
        }
        i++;
    }
    j = i;
    while (str[j] != ' ') {
        word[j - i] = str[j];
        j++;
    }
    return (word);
}
