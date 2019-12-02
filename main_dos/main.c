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

    val_t *val = NULL;
    val = malloc(sizeof(val_t));
    create_struc(val, argc);
    initialise_struc(val, argc, argv, a);
    argc--;
    choose(val);
    rb(val);
    for (int o = 0; o != val->list_a; o++, a++)
        val->array_bubble[a] = val->l_a[o];
    for (int o = 0; o != val->list_b; o++, a++)
        val->array_bubble[a] = val->l_b[o];
    for (int i = 0; i != argc; i++)
        my_put_nbr(val->array_bubble[i]);
    return (0);
}