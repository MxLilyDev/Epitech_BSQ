/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** my.h
*/

#pragma once

#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

// main
int manage_error(int ac);

//puts
void error(int nb);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_putarray(char **tab);

//utils
char *my_strncpy(char *dest ,char const *src, int n);

//make array
char **read_array(char **av);
int nb_carac_line(char *str);
int nb_return_line(char *str);
char **str_to_tab(char *str);

//search_square
char **search_square(char **tab);
int cal_size_square(char **tab, int i, int j);
char **my_bsq(char **tab, int size_x, int size_y, int bsq);
int check_square(char **tab, int pos_x, int pos_y, int size);