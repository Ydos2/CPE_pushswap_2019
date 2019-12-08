/*
** EPITECH PROJECT, 2019
** my
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>
typedef struct val {
    int *array_bubble;
    int *l_a;
    int *l_b;
    int list_a;
    int list_b;
    int size;
} val_t;

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
int my_put_nbr_pos(int nbr);
int my_put_nbr_neg(int nbr);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strdup(char const *src);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
char **my_str_to_word_array(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_int_to_str(int nb);
int my_atoi(char *str);
int my_intlen(int nb);
int my_put_nbr_base(int nbr, char *base);
char *my_itoa(int nb);

void choose(val_t *j);

void sa(val_t *j);
void sb(val_t *j);
void sc(val_t *j);
void pa(val_t *j);
void pb(val_t *j);

void ra(val_t *j);
void rb(val_t *j);
void rra(val_t *j);

void create_struc(val_t *val, int argc);
void initialise_struc(val_t *val, int argc, char **argv, int a);
void parssing_min(val_t *j);
#endif /* !MY_H_ */