/*
** EPITECH PROJECT, 2019
** solver
** File description:
** dante
*/

#include "../include/my.h"

int check_solver(char **maze, int width, int height, int y_x[2])
{
    int y = y_x[0];
    int x = y_x[1];

    if (solver(maze, width, height, (int[2]){y + 1, x}) == 1)
            return (1);
    else if (solver(maze, width, height, (int[2]){y, x + 1}) == 1)
        return (1);
    y = y;
    if (solver(maze, width, height, (int[2]){y - 1, x}) == 1)
        return (1);
    else if (solver(maze, width, height, (int[2]){y, x - 1}) == 1)
        return (1);
    return (0);
}

int solver(char **maze, int width, int height, int y_x[2])
{
    int y = y_x[0];
    int x = y_x[1];

    if ((y == width - 1) && (x == height - 1)) {
        maze[y][x] = 'o';
        return (1);
    } else if (y >= 0 && x >= 0 && y < width && x < height &&
            maze[y][x] == '*' && maze[y][x] == '*') {
        maze[y][x] = 'o';
        if (check_solver(maze, width, height, (int[2]){y, x}) == 1)
            return (1);
        maze[y][x] = '*';
        return (0);
    }
    return (0);
}

void free_maze(char **maze, int height)
{
    for (int i = height - 1; i >= 0; i--)
        free(maze[i]);
}

int run_solving(char **maze, int width, int height)
{
    int possible = 0;

    possible = solver(maze, width, height, (int[2]){0, 0});
    if (possible == 1)
        print_maze(maze, height);
    else
        printf("no solution found\n");
    free_maze(maze, height);
    return (0);
}
