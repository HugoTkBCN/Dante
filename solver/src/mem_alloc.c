/*
** EPITECH PROJECT, 2018
** mem alloc
** File description:
** bootstrap bsq
*/

#include "../include/my.h"

char *mem_alloc(char const *a, char const *b)
{
    int len_a = strlen(a);
    int len_b = strlen(b);
    char *new_str = malloc(sizeof(char) * (len_a + len_b) + 1);
    int i;

    for (i = 0; a[i]; i++) {
        new_str[i] = a[i];
    }
    for (int y = 0; b[y]; y++) {
        new_str[i++] = b[y];
    }
    return (new_str);
}
