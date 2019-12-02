/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** push_swap
*/

#include "./include/my.h"

void choose(val_t *j)
{
    j->size = j->list_a + j->list_b;
    int size_actu_2 = j->size;

    for (; j->size != 0; j->size--) {
        parssing_min(j);
    }
    for (int y = 0; size_actu_2 != y; y++) {
        pa(j);
        write(1, "pa", 2);
        if (size_actu_2 != y+1)
            write(1, " ", 1);
    }
    write(1, "\n", 1);
}

void parssing_min(val_t *j)
{
    int min_size = 2147483647;
    int actu_size = 2147483647;
    int nbr_turn = 0;
    int size_actu = j->size;

    min_size = 2147483647;
    for (int z = 0; z != size_actu; z++) {
        actu_size = j->l_a[z];
        if (actu_size < min_size) {
            min_size = actu_size;
            nbr_turn = z;
        }
    }
    for (; j->l_a[0] != min_size;) {
        ra(j);
        write(1, "ra ", 3);
    }
    pb(j);
    write(1, "pb ", 3);
    size_actu--;
}

void create_struc(val_t *val, int argc)
{
    val->array_bubble = malloc(sizeof(int) * argc);
    val->l_a = malloc(sizeof(int) * argc);
    val->l_b = malloc(sizeof(int) * argc);
    val->list_a = argc-1;
    val->list_b = 0;
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