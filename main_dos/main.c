/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "../include/my.h"

int main (int argc, char **argv)
{
    int z = 0;
    int a = 0;

    val_t *val = NULL;
    val = malloc(sizeof(val_t));
    val->array_bubble = malloc(sizeof(int) * argc);
    val->l_a = malloc(sizeof(int) * argc);
    val->l_b = malloc(sizeof(int) * argc);
    val->list_a = 2;
    val->list_b = 4;
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
    argc--;
    //choose(val);
    rb(val);
    a = 0;
    for (int o = 0; o != val->list_a; o++, a++)
        val->array_bubble[a] = val->l_a[o];
    for (int o = 0; o != val->list_b; o++, a++)
        val->array_bubble[a] = val->l_b[o];
    for (int i = 0; i != argc; i++)
        my_put_nbr(val->array_bubble[i]);
    return (0);
}