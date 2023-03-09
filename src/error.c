/*
** EPITECH PROJECT, 2023
** error.c
** File description:
** error
*/

#include "bombyx.h"

int manage_error(void)
{
    my_putstr("./106bombyx: bad arguments\n");
    my_putstr("retry with -h\n");
    exit(84);
}

int manage_usage(void)
{
    my_putstr("USAGE\n   ./106bombyx n [k | i0 i1]\n\nDESCRIPTION\n");
    my_putstr("   n\t   number of first generation individuals\n");
    my_putstr("   k\t   growth rate from 1 to 4\n");
    my_putstr("   i0\t   initial generation (included)\n");
    my_putstr("   i1\t   final generation (included)\n");
    exit(0);
}
