/*
** EPITECH PROJECT, 2023
** my_nb_to_str
** File description:
** lib
*/

#include "../../include/lib.h"
#include <stdlib.h>

char *my_nb_to_str(int nb)
{
    int len = my_nblen(nb);
    int multiple = my_compute_power_it(10, len - 1);
    char *str = my_str_malloc(len);

    for (int i = 0; i < len; i++) {
        str[i] = nb / multiple + 48;
        if (str[i] == 58) {
            str[i] = 49;
            i++;
            str[i] = 48;
        }
        nb = nb % multiple;
        multiple = multiple / 10;
    }
    return (str);
}
