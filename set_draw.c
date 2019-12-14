/*
** EPITECH PROJECT, 2019
** set_draw
** File description:
** set_draw
*/

#include "./include/my.h"

void set_pa(int size_actu_2, val_t *j, int y)
{
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

void set_pb(val_t *j)
{
    pb(j);
    j->buffer[j->buffer_int] = 'p';
    j->buffer_int++;
    j->buffer[j->buffer_int] = 'b';
    j->buffer_int++;
    j->buffer[j->buffer_int] = ' ';
    j->buffer_int++;
    initialisation_buffer(j);
}

int set_verification(val_t *j)
{
    int finish = 0;

    j->size = j->list_a + j->list_b;
    for (int verif = j->size, z = 0; verif != 1; verif--, z++)
        if (j->l_a[z] > j->l_a[z+1]) {
            finish = 1;
            return (1);
        }
    write(1, "\n", 1);
    return (0);
}

void set_struct(val_t *val, int a)
{
    for (int o = 0; o != val->list_a; o++, a++)
        val->l_a[o] = val->array_bubble[a];
    for (int o = 0; o != val->list_b; o++, a++)
        val->l_b[o] = val->array_bubble[a];
}