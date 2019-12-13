/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "../include/my.h"

int main (int argc, char **argv)
{
    int a = 0;

    if (argc == 1)
        return (84);
    val_t *val = NULL;
    val = malloc(sizeof(val_t));
    create_struc(val, argc);
    initialise_struc(val, argc, argv, a);
    argc--;
    val->buffer_int = 0;
    if (argc != 1) {
        choose(val);
        write(1, val->buffer, val->buffer_int);
    } else
        write(1, "\n", 1);
    free(val->array_bubble);
    free(val->l_a);
    free(val->l_b);
    free (val);
    return (0);
}