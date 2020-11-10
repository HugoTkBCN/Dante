/*
** EPITECH PROJECT, 2019
** get
** File description:
** dante
*/

#include "../include/my.h"

int get_height(char **maze)
{
    int y = 0;

    for (y = 0; maze[y]; y++) {
        for (int i = 0; maze[y][i]; i++);
    }
    if (my_strlen(maze[y - 1]) == 0)
        y--;
    return (y);
}

int get_width(char **maze)
{
    int i = 0;

    for (i = 0; maze[0][i]; i++);
    if (maze[0][i - 1] == '\n')
        i--;
    return (i);
}

int get_nbr_line(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char buff[2];
    int line = 1;

    if (fd == -1)
        return (-1);
    while (read(fd, buff, 1) != 0) {
        buff[1] = '\0';
        if (buff[0] == '\n')
            line++;
    }
    close(fd);
    return (line);
}
