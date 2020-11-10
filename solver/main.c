/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** exemple
*/

#include "include/my.h"

char **check_arg(int ac, char **av, char **maze)
{
    if (ac != 2) {
        printf("Bad Usage, use './solver -h', for more information.\n");
        return (NULL);
    } else if (ac == 2 && my_strcmp(av[1], "-h") == 1) {
        printf("USAGE :\n\t./solver maze\n\tmaze\t");
        printf("your maze with only * and X, that made a rectangle maze\n");
        maze = malloc(sizeof(char *) * 2);
        if (maze == NULL)
            return (NULL);
        maze[0] = my_strdup("-h");
        return (maze);
    }
    maze = load_2d_arr_from_file(av[1], get_nbr_line(av[1]));
    if (maze == NULL) {
        printf("Bad Usage, use './solver -h', for more information.\n");
        return (NULL);
    }
    return (maze);
}

void print_maze(char **maze, int height)
{
    for (int i = 0; i < height; i++)
        printf("%s", maze[i]);
    printf("\n");
}

int main(int ac, char **av)
{
    char **maze = check_arg(ac, av, maze);
    int width = 0;
    int height = 0;

    if (maze == NULL)
        return (84);
    else if (my_strcmp(maze[0], "-h") == 1)
        return (0);
    width = get_width(maze);
    height = get_height(maze);
    run_solving(maze, width, height);
    return (0);
}
