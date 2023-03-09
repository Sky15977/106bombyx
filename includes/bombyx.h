/*
** EPITECH PROJECT, 2022
** sokoban.h
** File description:
** dico func
*/

#include <stdio.h>

#include "my.h"
#include <unistd.h>
#include <stdlib.h>

#ifndef BOMBYX_H
    #define BOMBYX_H

    typedef struct bombyx_s {
        int n;
        double k;
        int i_first;
        int i_scd;
    } bombyx_t;

//error.c
    int manage_error(void);
    int manage_usage(void);

//process.c
    void scd_option(bombyx_t *bom);
    void first_option(bombyx_t *bom);
    void process(int ac, char **av);

//init.c
    int check_decimal_point(char const *str);
    void get_param(bombyx_t *bom, int ac, char **av);
    void check_param(bombyx_t *bom, int ac, char **av);
    void init_struct(bombyx_t *bom);

#endif
