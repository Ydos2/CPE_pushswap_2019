/*
** EPITECH PROJECT, 2019
** param_2
** File description:
** param_2
*/

#include "./include/my.h"

void ra(val_t *j)
{
    int a = j->l_a[0];
    int z = 1;

    for (int y = 0; j->l_a[z] != '\0'; y++, z++) {
        j->l_a[y] = j->l_a[z];
    }
    j->l_a[z-1] = a;
}

void rb(val_t *j)
{
    int a = j->l_b[0];
    int z = 1;

    for (int y = 0; j->l_b[z] != '\0'; y++, z++) {
        j->l_b[y] = j->l_b[z];
    }
    j->l_b[z-1] = a;
}

void rr(val_t *j)
{

}

void rra(val_t *j)
{

}

void rrb(val_t *j)
{

}