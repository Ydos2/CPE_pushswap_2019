/*
** EPITECH PROJECT, 2019
** set_main
** File description:
** set_main
*/

#include "my.h"

void set_main(int argc, char **argv)
{
    int a = 0;
    int verif = 0;

    val_t *val = NULL;
    val = malloc(sizeof(val_t));
    create_struc(val, argc);
    initialise_struc(val, argc, argv, a);
    argc--;
    val->buffer_int = 0;
    verif = set_verification(val);
    if (argc != 1 && verif == 1) {
        choose(val);
        write(1, val->buffer, val->buffer_int);
    } else if (verif == 1)
        write(1, "\n", 1);
    free(val->array_bubble);
    free(val->l_a);
    free(val->l_b);
    free (val);
}