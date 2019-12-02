/*
** EPITECH PROJECT, 2019
** param_1
** File description:
** param_1
*/

#include "./include/my.h"

void sa(val_t *j)
{
    int a = j->l_a[0];
    int b = j->l_a[1];

    j->l_a[0] = b;
    j->l_a[1] = a;
}

void sb(val_t *j)
{
    int a = j->l_b[0];
    int b = j->l_b[1];

    j->l_b[0] = b;
    j->l_b[1] = a;
}

void sc(val_t *j)
{
    int a = j->l_a[0];
    int b = j->l_a[1];
    int c = j->l_b[0];
    int d = j->l_b[1];

    j->l_a[0] = b;
    j->l_a[1] = a;
    j->l_b[0] = d;
    j->l_b[1] = c;
}

void pa(val_t *j)
{
    int i = j->list_a+1;

    if (j->list_b == 0)
        return;
    for (int k = i-1; i != 0; i--, k--)
        j->l_a[i] = j->l_a[k];
    j->l_a[0] = j->l_b[0];
    for (int p = 1, i = 0; i != j->list_b; i++, p++)
        j->l_b[i] = j->l_b[p];
    j->list_b -= 1;
    j->list_a += 1;
}

void pb(val_t *j)
{
    int i = j->list_b+1;

    if (j->list_a == 0)
        return;
    for (int k = i-1; i != 0; i--, k--)
        j->l_b[i] = j->l_b[k];
    j->l_b[0] = j->l_a[0];
    for (int p = 1, i = 0; i != j->list_a; i++, p++)
        j->l_a[i] = j->l_a[p];
    j->list_a -= 1;
    j->list_b += 1;
}