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
    int e = 0;
    int temp_actu = 2147483647;
    int temp_result = 2147483647;

    for (; j->size != 0;) {
        for (int t = 0; t != j->size; t++) {
            temp_actu = j->array_bubble[t];
            if (temp_actu <= temp_result)
                temp_result = temp_actu;
                e = t;
        }
        for (int u = 0; u != e; u++) {
            
        }
    }
}