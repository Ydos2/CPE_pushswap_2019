/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** push_swap
*/

#include "./include/my.h"

void choose(val_t *j)
{

}

void create_struc(val_t *val, int argc)
{
    val->array_bubble = malloc(sizeof(int) * argc);
    val->l_a = malloc(sizeof(int) * argc);
    val->l_b = malloc(sizeof(int) * argc);
    val->list_a = 2;
    val->list_b = 4;
}

void initialise_struc(val_t *val, int argc, char **argv, int a)
{
    int z = 0;

    for (int i = 1, j = 0; i != argc; i++, j++) {
        z = 0;
        for (int t = 0; argv[i][t] != '\0'; t++) {
            z = z * 10;
            z += argv[i][t] - 48;
        }
        val->array_bubble[j] = z;
    }
    for (int o = 0; o != val->list_a; o++, a++)
        val->l_a[o] = val->array_bubble[a];
    for (int o = 0; o != val->list_b; o++, a++)
        val->l_b[o] = val->array_bubble[a];
}