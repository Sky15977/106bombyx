/*
** EPITECH PROJECT, 2023
** init.c
** File description:
** init
*/

#include "bombyx.h"

int check_decimal_point(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
            return 1;
    return 0;
}

void get_param(bombyx_t *bom, int ac, char **av)
{
    bom->n = atoi(av[1]);
    if (bom->n < 0)
        manage_error();
    if (ac == 3) {
        bom->k = atof(av[2]);
        if (bom->k < 1 || bom->k > 4)
            manage_error();
    }
    if (ac == 4) {
        bom->i_first = atoi(av[2]);
        bom->i_scd = atoi(av[3]);
        if (bom->i_scd < bom->i_first)
            manage_error();
    }
}

void check_param(bombyx_t *bom, int ac, char **av)
{
    if (my_str_isnum(av[1]) != 0)
        manage_error();
    if (ac == 3 && (check_decimal_point(av[2]) != 0))
        manage_error();
    if (ac == 4 && (my_str_isnum(av[2]) != 0 || my_str_isnum(av[3]) != 0))
        manage_error();
    get_param(bom, ac, av);
}

void init_struct(bombyx_t *bom)
{
    bom->n = 0;
    bom->k = 0;
    bom->i_first = 0;
    bom->i_scd = 0;
}
