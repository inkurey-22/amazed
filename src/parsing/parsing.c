/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-amazed-yanis.monte
** File description:
** parsing
*/

#include "../../include/amazed.h"

int parse_my_text(char **text, robot_t *robot, char *line)
{
    if (find_number_of_robot(text, robot) == 84) {
        robot->error = true;
        return 84;
    }
    if (find_rooms(text, robot) == 84) {
        robot->error = true;
        return 84;
    }
    free(line);
    free(text);
    return 0;
}

link_list_t *loop_while_parsing(ssize_t read, char *line,
    size_t len, link_list_t *list)
{
    while (read != -1) {
        read = getline(&line, &len, stdin);
        if (line[0] != '\0') {
            list->next = create_list(line);
            list = list->next;
        }
    }
    free(line);
    return list;
}

robot_t *parsing(robot_t *robot)
{
    char *line = NULL;
    char **text;
    size_t len = 0;
    ssize_t read = 0;
    link_list_t *list = malloc(sizeof(link_list_t));
    link_list_t *list_origin = list;

    list->next = NULL;
    list = loop_while_parsing(read, line, len, list);
    text = do_my_text(list_origin);
    if (find_bad_comment(text) == 84)
        return NULL;
    if (parse_my_text(supprimer_comments(text), robot, line) == 84)
        return NULL;
    check_error(robot);
    return robot;
}
