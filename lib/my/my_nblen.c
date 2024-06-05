/*
** EPITECH PROJECT, 2023
** my_nblen
** File description:
** lib
*/

#include <stdio.h>

int my_nblen(int n)
{
    int result = 0;

    if (n < 0) {
        n = n * (-1);
        result++;
    }
    while (n >= 10) {
        n /= 10;
        result++;
    }
    return (result + 1);
}
