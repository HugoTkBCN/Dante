/*
** EPITECH PROJECT, 2019
** include
** File description:
** exemple
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

typedef struct variable_creation_s {
    int x;
    int y;
    int x1;
    int x2;
    int y1;
    int y2;
    int dx;
    int dy;
    int dir;
    int count;
} var_t;

int my_strcmp(char *, char *);
void create_maze(char *maze, int width, int height);
void create_imperfect_maze(char *maze, int width, int height);
void add_way(char *maze, var_t *var, int width, int height);
void do_maze(char *maze, int width, int height, var_t *var);
void init_var(var_t *var);
void print_maze(const char *maze, int width, int height);
int check_error(int ac, char **av, int height, int width);

#endif /* !MY_H_ */
