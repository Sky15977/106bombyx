/*
** EPITECH PROJECT, 2023
** process.c
** File description:
** process
*/

#include "bombyx.h"

//./106bombyx 30 30 30

void scd_option(bombyx_t *bom)
{
    double x = bom->n;
    int i = 1;

    for (bom->k = 1; bom->k <= 4; bom->k += 0.01) {
        x = bom->n;
        i = 1;
        if (bom->i_first == 1)
            printf("%.2f %.2f\n", bom->k, x);
        for (i = 2; i <= bom->i_scd; i++) {
            x = (bom->k * x) * ((1000 - x) / 1000);
            if (x < 0)
                x = 0;
            if (i >= bom->i_first)
                printf("%.2f %.2f\n", bom->k, x);
        }
    }
}

void first_option(bombyx_t *bom)
{
    double x = bom->n;
    int i = 1;

    printf("%d %.2f\n", i, x);
    for (i = 2; i < 101; i++) {
        x = (bom->k * x) * ((1000 - x) / 1000);
        if (x < 0)
            x = 0;
        printf("%d %.2f\n", i, x);
    }
}

void process(int ac, char **av)
{
    bombyx_t *bom = malloc(sizeof(bombyx_t));

    init_struct(bom);
    check_param(bom, ac, av);
    if (ac == 3)
        first_option(bom);
    if (ac == 4)
        scd_option(bom);
}
