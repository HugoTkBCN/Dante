/*
** EPITECH PROJECT, 2019
** utils for creation maze
** File description:
** dante
*/

#include "../include/my.h"

void add_way(char *maze, var_t *var, int width, int height)
{
    var->y1 = var->y1 < 0 ? 0 : var->y1;
    var->y2 = var->y2 < 0 ? 0 : var->y2;
    if (var->x2 >= 0 && var->x2 < width && var->y2 >= 0 &&
        var->y2 < height && maze[var->y1 * width + var->x1] == 1 &&
        maze[var->y2 * width + var->x2] == 1) {
        maze[var->y1 * width + var->x1] = 0;
        maze[var->y2 * width + var->x2] = 0;
        var->x = var->x2;
        var->y = var->y2;
        var->dir = rand() % 4;
        var->count = 0;
    } else {
        var->dir = (var->dir + 1) % 4;
        var->count += 1;
    }
}

void do_maze(char *maze, int width, int height, var_t *var)
{
    while (var->count < 4) {
        var->dx = 0;
        var->dy = 0;
        var->dx = var->dir == 0 ? 1 : var->dx;
        var->dy = var->dir == 1 ? 1 : var->dy;
        var->dx = var->dir == 2 ? -1 : var->dx;
        var->dy = var->dir == 3 ? -1 : var->dy;
        var->x1 = var->x + var->dx;
        var->y1 = var->y + var->dy;
        var->x2 = var->x1 + var->dx;
        var->y2 = var->y1 + var->dy;
        add_way(maze, var, width, height);
    }
}

void init_var(var_t *var)
{
    var->x = 0;
    var->y = 0;
    var->x1 = 0;
    var->x2 = 0;
    var->y1 = 0;
    var->y2 = 0;
    var->dx = 0;
    var->dy = 0;
    var->dir = rand() % 4;
    var->count = 0;
}
