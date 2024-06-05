/*
** EPITECH PROJECT, 2023
** my_str_to_word_array
** File description:
** lib
*/

#include "../../include/lib.h"

static int get_nb_of_word(char *str, char *del)
{
    int nb = 1;

    for (int i = 0; str[i + 1] != '\0'; i++) {
        if (my_char_in_str(str[i], del) && !my_char_in_str(str[i + 1], del))
            nb++;
    }
    if (my_char_in_str(str[0], del))
        nb--;
    return (nb);
}

static int count_size_of_word(char *str, int i, char *del)
{
    int nb = i;

    while (!my_char_in_str(str[nb], del) && str[nb] != '\0')
        nb++;
    return (nb - i);
}

static int change_i(int i, char *str, char *del)
{
    while (my_char_in_str(str[i], del))
        i++;
    return (i);
}

static char **my_str_to_word_array_malloc(int nb_of_word)
{
    char **word_array;

    if (nb_of_word == 0)
        return (NULL);
    word_array = malloc((nb_of_word + 1) * sizeof(char *));
    if (word_array == NULL)
        return (NULL);
    word_array[nb_of_word] = 0;
    return (word_array);
}

char **my_str_to_word_array(char *str, char *del)
{
    int size = my_strlen(str);
    char **word_array = my_str_to_word_array_malloc(get_nb_of_word(str, del));
    int ind = 0;
    int word_size;

    if (word_array == NULL)
        return (NULL);
    for (int i = 0; i < size; i += my_strlen(word_array[ind - 1]) + 1) {
        i = change_i(i, str, del);
        word_size = count_size_of_word(str, i, del);
        if (word_size == 0)
            break;
        word_array[ind] = my_str_malloc(word_size);
        if (word_array[ind] == NULL)
            return (NULL);
        for (int j = i; (j - i) < word_size; j++)
            word_array[ind][j - i] = str[j];
        ind++;
    }
    return (word_array);
}
