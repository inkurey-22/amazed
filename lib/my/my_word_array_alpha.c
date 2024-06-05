/*
** EPITECH PROJECT, 2023
** my_word_array_alpha
** File description:
** lib
*/

#include "../../include/lib.h"
#include <stdlib.h>

static int compare_word(char *word, char *compare)
{
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] < compare[i]) {
            return (0);
        }
        if (word[i] > compare[i]) {
            return (1);
        }
    }
    if (my_strlen(word) < my_strlen(compare)) {
        return (0);
    } else {
        return (1);
    }
}

static char *get_in_order(int *order, char *str, int size_of_list)
{
    char *result = malloc(my_strlen(str));
    int j = 0;

    for (int i = 0; i < size_of_list; i++) {
        while (order[j] != i) {
            j++;
        }
        result = my_strcat(result, my_get_word(str, j));
        result = my_strcat(result, " ");
        j = 0;
    }
    return (result);
}

char *my_word_array_alpha(char *str)
{
    int *order;
    int size_of_list = 0;

    str = my_str_to_min(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            size_of_list++;
        }
    }
    order = malloc(sizeof(int) * size_of_list);
    for (int i = 0; i < size_of_list; i++) {
        for (int j = 0; j < size_of_list; j++) {
            order[i] += compare_word(my_get_word(str, i), my_get_word(str, j));
        }
        order[i]--;
    }
    return (get_in_order(order, str, size_of_list));
}
