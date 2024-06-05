/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-amazed-yanis.monte
** File description:
** main
*/

#include "../include/amazed.h"

int main(void)
{
    robot_t *robot = init_robot();
    node_t *graph = NULL;

    robot = parsing(robot);
    if (robot == NULL)
        return 84;
    if (!robot->error && robot->num_robot > 0)
        graph = create_graph(robot);
    if (robot->num_robot > 0)
        display(robot);
    if (graph == NULL)
        return 84;
    if (get_robots(robot, graph) == 84)
        return 84;
    free_graph(robot->node_list);
    free_robot(robot);
    return 0;
}
