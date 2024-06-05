/*
** EPITECH PROJECT, 2024
** amazed
** File description:
** amazed
*/

#ifndef AMAZED_H_
    #define AMAZED_H_

    #include "lib.h"

/* Begin of Parsing */

typedef struct link_list_s {
    char *data;
    struct link_list_s *next;
} link_list_t;

typedef struct rooms_s {
    char ***alR;
    int indiceAllrooms;
    char **link_s;
    char **link_e;
    int indiceLinks;
} rooms_t;

typedef struct robot_s {
    int num_robot;
    char **room_start;
    char **room_end;
    int indice_start;
    int indice_end;
    rooms_t *room;
    bool error;
    char *index;
    struct node_link_list *node_list;
}robot_t;

robot_t *init_robot(void);
robot_t *parsing(robot_t *robot);

char **supprimer_comments(char **liste);
char **do_my_text(link_list_t *list);

link_list_t *create_list(char *data);

int check_error(robot_t *robot);
int find_bad_comment(char **text);
int find_rooms(char **text, robot_t *robot);
int parse_my_text(char **text, robot_t *robot, char *line);
int find_number_of_robot(char **text, robot_t *robot);

void my_error_putstr(char *str);
void free_robot(robot_t *robot);
void supprimer_null_strings(char **liste);
void room_start(char **text, robot_t *robot);
void room_end(char **text, robot_t *robot);
void connect_list(link_list_t *list, link_list_t *next);

/* End of Parsing */

/* Begin of Graph */

typedef struct node_s {
    char *room;
    int dist_to_end;
    bool pres;
    struct node_link_list *link_list;
} node_t;

typedef struct node_link_list {
    node_t *link;
    struct node_link_list *next;
} node_link_list_t;

node_t *create_node(int dist_to_end, char *room);
node_t *get_node(node_link_list_t *node_list, char *room);

void connect_node(node_t *node1, node_t *node2);

void remove_link(node_link_list_t *link, char *room);

int is_link(node_t *node, node_t *node_link);


node_t *create_graph(robot_t *robot);

void add_link(robot_t *robot, node_link_list_t *node_list, node_t *last);

void free_graph(node_link_list_t *node_list);

/* End of Graph */

void display(robot_t *robot);

/* Begin of Walking */

typedef struct walk_bot_s {
    node_t *room;
} walk_bot_t;

int get_robots(robot_t *robot, node_t *graph);

/* End of Walking */

#endif /* !AMAZED_H_ */
