/*
** EPITECH PROJECT, 2021
** starter-c
** File description:
** test.c
*/

#include <criterion/criterion.h>
#include "includes/header.h"

Test(test, first_test)
{
    int result = 0;

    cr_assert_eq(result, 42);
}
