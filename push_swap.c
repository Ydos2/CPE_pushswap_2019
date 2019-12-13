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

    for (; j->size != 0; j->size--)
        parssing_min(j);
    for (int y = 0; size_actu_2 != y; y++) {
        pa(j);
        if (size_actu_2 != y+1) {
            j->buffer[j->buffer_int] = 'p';
            j->buffer_int++;
            j->buffer[j->buffer_int] = 'a';
            j->buffer_int++;
            j->buffer[j->buffer_int] = ' ';
            j->buffer_int++;
            initialisation_buffer(j);
        } else {
            j->buffer[j->buffer_int] = 'p';
            j->buffer_int++;
            j->buffer[j->buffer_int] = 'a';
            j->buffer_int++;
            j->buffer[j->buffer_int] = '\n';
            j->buffer_int++;
            initialisation_buffer(j);
        }
    }
}

void parssing_min(val_t *j)
{
    int min_size = 2147483647, actu_size = 2147483647;
    int nbr_turn = 0, middle = 0, z = 0;
    int size_actu = j->size;

    for (z = 0; z != size_actu; z++) {
        actu_size = j->l_a[z];
        if (actu_size < min_size) {
            min_size = actu_size;
            nbr_turn = z;
        }
    }
    middle = z/2;
    for (; j->l_a[0] != min_size;)
        if (nbr_turn <= middle)
            ra(j);
        else
            rra(j);
    set_pb(j);
    size_actu--;
}

void initialisation_buffer(val_t *j)
{
    if (j->buffer_int >= 795) {
        write(1, j->buffer, j->buffer_int);
        j->buffer_int = 0;
    }
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
    int z = 0, t = 0, mult_moins = 0;

    for (int i = 1, j = 0; i != argc; i++, j++, z = 0) {
        t = 0, mult_moins = 0;
        if (argv[i][0] == '-')
            t = 1, mult_moins = 1;
        for (; argv[i][t] != '\0'; t++) {
            z = z * 10;
            z += argv[i][t] - 48;
        }
        if (mult_moins == 1)
            z = z * -1;
        val->array_bubble[j] = z;
    }
    for (int o = 0; o != val->list_a; o++, a++)
        val->l_a[o] = val->array_bubble[a];
    for (int o = 0; o != val->list_b; o++, a++)
        val->l_b[o] = val->array_bubble[a];
}