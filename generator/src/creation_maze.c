/*
** EPITECH PROJECT, 2019
** creation maze
** File description:
** dante
*/

#include "../include/my.h"

void create_maze(char *maze, int width, int height)
{
    int random = 0;
    var_t *var = malloc(sizeof(var_t) * 1);

    var == NULL ? exit(84) : 0;
    for (int x = 0; x < width * height; x++)
        maze[x] = 1;
    srand(time(0));
    for (int y = -2; y < height; y += 2) {
        for (int x = -1; x < width; x += 2) {
            init_var(var);
            var->x = x;
            var->y = y;
            do_maze(maze, width, height, var);
        }
    }
    maze[0] = 0;
    maze[(height - 1) * width + (width - 1)] = 0;
}

void create_imperfect_maze(char *maze, int width, int height)
{
    create_maze(maze, width, height);
    srand(time(0));
    for (int i = 0; i <= (height - 1) * width + (width - 1); i++) {
        if (maze[i] == 1 && (rand() % 4) == 1)
            maze[i] = 0;
    }
}
