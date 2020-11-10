/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** exemple
*/

#include "include/my.h"

void print_maze(const char *maze, int width, int height)
{
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            switch (maze[y * width + x]) {
            case 1:
                printf("X");
                break;
            case 2:
                printf("o");
                break;
            default:
                printf("*");
                break;
            }
        }
        if (y + 1 < height)
            printf("\n");
    }
}

int check_error(int ac, char **av, int height, int width)
{
    if (ac != 3 && ac != 4) {
        printf("usage: ./generator width height [perfect]\n");
        return (84);
    }
    width = atoi(av[1]);
    height = atoi(av[2]);
    if (width < 1 || height < 1) {
        printf("error: Bad Maze size\n");
        return (84);
    } else if (ac == 4 && my_strcmp(av[3], "perfect") == 0) {
        printf("error: invalid argument\n");
        printf("usage: ./generator width height [perfect]\n");
        return (84);
    }
    return (0);
}

int main(int ac, char **av)
{
    int width = 0;
    int height = 0;
    char *maze = NULL;

    if (check_error(ac, av, height, width) == 84)
        return (84);
    width = atoi(av[1]);
    height = atoi(av[2]);
    maze = malloc((width * height) * sizeof(char));
    if (maze == NULL)
        return (84);
    else if (ac == 4)
        create_maze(maze, width, height);
    else
        create_imperfect_maze(maze, width, height);
    print_maze(maze, width, height);
    free(maze);
    return (0);
}
