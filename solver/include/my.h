/*
** EPITECH PROJECT, 2019
** include
** File description:
** exemple
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char *mem_alloc(char const *, char const *);
int my_strcmp(char *, char *);
int get_height(char **maze);
int get_width(char **maze);
char **load_2d_arr_from_file(char const *filepath, int nb_rows);
char *my_strdup(char *src);
char *my_strcpy(char *, char *);
int my_strlen(char const *str);
int get_nbr_line(char *filepath);
int solver(char **maze, int width, int height, int y_x[2]);
int run_solving(char **maze, int width, int height);
void print_maze(char **, int);

#endif /* !MY_H_ */
