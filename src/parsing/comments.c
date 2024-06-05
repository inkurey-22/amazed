/*
** EPITECH PROJECT, 2024
** comments
** File description:
** comments
*/

#include "../../include/amazed.h"

void supprimer_null_strings(char **liste)
{
    int i = 0;
    int j = 0;

    while (liste[i] != NULL) {
        if (liste[i][0] != '\0' && liste[i][0] != '\n') {
            liste[j] = liste[i];
            j++;
        } else
            free(liste[i]);
        i++;
    }
    liste[j] = NULL;
}

char **supprimer_comments(char **liste)
{
    int i = 0;

    while (liste[i] != NULL) {
            if (liste[i][0] == '#' && liste[i][0 + 1] != '#') {
                liste[i][0] = '\n';
                liste[i][1] = '\0';
            }
        i++;
    }
    supprimer_null_strings(liste);
    return liste;
}
