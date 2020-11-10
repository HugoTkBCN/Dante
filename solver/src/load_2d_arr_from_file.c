/*
** EPITECH PROJECT, 2018
** load 2d arr from file
** File description:
** bootstrap bsq
*/

#include "../include/my.h"

char **load_2d_arr_from_file(char const *filepath, int nb_rows)
{
    FILE *fd = fopen(filepath, "r");
    char **array = malloc(sizeof(char *) * (nb_rows + 1));
    char *tmp = NULL;
    size_t size = 0;
    int i = 0;

    if (array == NULL || fd == NULL)
        return (NULL);
    for (i = 0; getline(&tmp, &size, fd) != -1; i++) {
        array[i] = my_strdup(tmp);
    }
    array[i] = NULL;
    return (array);
}
