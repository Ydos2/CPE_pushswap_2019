/*
** EPITECH PROJECT, 2019
** criterion
** File description:
** criterion
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(set_main, test_one_number, .init=redirect_all_stdout)
{
    int argc = 2;
    char *argv[2] = {
        "./push_swap",
        "-3"
    };

    set_main(argc, argv);
    cr_assert_stdout_eq_str("\n", "");
}