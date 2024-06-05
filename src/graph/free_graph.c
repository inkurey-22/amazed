/*
** EPITECH PROJECT, 2023
** B-CPE-200-LIL-2-1-amazed-yanis.monte
** File description:
** free_graph.c
*/

#include "../../include/amazed.h"

static void free_node_list(node_link_list_t *node_list)
{
    node_link_list_t *tmp;

    while (node_list) {
        tmp = node_list;
        node_list = node_list->next;
        free(tmp);
    }
}

void free_graph(node_link_list_t *node_list)
{
    node_link_list_t *tmp;

    while (node_list) {
        tmp = node_list;
        free_node_list(node_list->link->link_list);
        if (node_list->link != NULL)
            free(node_list->link);
        node_list = node_list->next;
        free(tmp);
    }
    free(node_list);
}
