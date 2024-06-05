/*
** EPITECH PROJECT, 2023
** my_compute_power_it
** File description:
** day05
*/

int my_compute_power_it(int nb, int p)
{
    int result = 1;

    if (p > 12) {
        return (0);
    }
    if (p == 0) {
        return (1);
    } else if (p < 0) {
        return (0);
    }
    for (int i = 0; i < p; i += 1) {
        result = result * nb;
    }
    return (result);
}
