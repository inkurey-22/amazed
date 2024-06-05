/*
** EPITECH PROJECT, 2024
** text
** File description:
** text
*/

#include "../../include/amazed.h"

int find_lenght(link_list_t *list)
{
    link_list_t *temp = list;
    int i = 0;

    while (temp->next != NULL) {
        temp = temp->next;
        i++;
    }
    return i;
}

void connect_list(link_list_t *list, link_list_t *next)
{
    link_list_t *temp = list;

    next->next = temp;
    list = next;
}

link_list_t *create_list(char *data)
{
    link_list_t *list = malloc(sizeof(link_list_t));

    list->data = my_strdup(data);
    list->next = NULL;
    return list;
}

char **do_my_text(link_list_t *list)
{
    link_list_t *temp = list->next;
    int size = find_lenght(list);
    char **text = malloc(sizeof(char *) * size);
    int i = 0;

    if (temp == NULL)
        return NULL;
    while (temp->next != NULL) {
        text[i] = temp->data;
        temp = temp->next;
        i++;
    }
    text[size - 1] = NULL;
    return text;
}
