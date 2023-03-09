/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "bombyx.h"

int main(int ac, char **av)
{
    if (ac == 2 && (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == 0))
        manage_usage();
    if (ac < 3 || ac > 4)
        manage_error();
    process(ac, av);
    return 0;
}
