/*
** EPITECH PROJECT, 2023
** my_rev_str_word
** File description:
** lib
*/

#include "../../include/lib.h"
#include <stdlib.h>

char *my_rev_str_word(char *str)
{
    int count = 0;
    char *result = malloc(my_strlen(str));

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    for (int i = count - 1; i >= 0; i--) {
        result = my_strcat(result, my_get_word(str, i));
        result = my_strcat(result, " ");
    }
    return (result);
}
