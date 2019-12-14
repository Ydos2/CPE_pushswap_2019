/*
** EPITECH PROJECT, 2019
** param_2
** File description:
** param_2
*/

#include "my.h"

void ra(val_t *j)
{
    int a = j->l_a[0];
    int z = 1;

    for (int y = 0; j->l_a[z] != '\0'; y++, z++) {
        j->l_a[y] = j->l_a[z];
    }
    j->l_a[z-1] = a;
    j->buffer[j->buffer_int] = 'r';
    j->buffer_int++;
    j->buffer[j->buffer_int] = 'a';
    j->buffer_int++;
    j->buffer[j->buffer_int] = ' ';
    j->buffer_int++;
    initialisation_buffer(j);
}

void rb(val_t *j)
{
    int a = j->l_b[0];
    int z = 1;

    for (int y = 0; j->l_b[z] != '\0'; y++, z++) {
        j->l_b[y] = j->l_b[z];
    }
    j->l_b[z-1] = a;
    j->buffer[j->buffer_int] = 'r';
    j->buffer_int++;
    j->buffer[j->buffer_int] = 'b';
    j->buffer_int++;
    j->buffer[j->buffer_int] = ' ';
    j->buffer_int++;
    initialisation_buffer(j);
}

void rra(val_t *j)
{
    int a = 0;
    int b = 0;

    for (b = 0; j->l_a[b] != '\0'; b++);
    a = j->l_a[b-1];
    b--;
    for (int k = b-1; b != 0;  b--, k--)
        j->l_a[b] = j->l_a[k];
    j->l_a[0] = a;
    j->buffer[j->buffer_int] = 'r';
    j->buffer_int++;
    j->buffer[j->buffer_int] = 'r';
    j->buffer_int++;
    j->buffer[j->buffer_int] = 'a';
    j->buffer_int++;
    j->buffer[j->buffer_int] = ' ';
    j->buffer_int++;
    initialisation_buffer(j);
}