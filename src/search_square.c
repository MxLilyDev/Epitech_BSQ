/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** search_square.c
*/

#include "my.h"

char **search_square(char **tab)
{
    int size_square = 0;
    int bsq = 0;
    int pos_x = 0;
    int pos_y = 0;
    int i = 0;
    int j = 0;

    while (tab[j] != NULL) {
        i = 0;
        while (tab[j][i] != '\0') {
            size_square = cal_size_square(tab, i, j);
            if (size_square > bsq) {
                pos_x = i;
                pos_y = j;
                bsq = size_square;
            }
            i++;
        }
        j++;
    }
    my_putarray(my_bsq(tab, pos_x, pos_y, bsq));
    return (tab);
}

int cal_size_square(char **tab, int pos_x, int pos_y)
{
    int size = 1;

    while (tab[pos_y][pos_x + (size - 1)] != '\0' &&
    tab[pos_y + (size - 1)] != NULL) {
        if (check_square(tab, pos_x, pos_y, size) == 0)
            return (size - 1);
        size++;
    }
    return (size - 1);
}

int check_square(char **tab, int pos_x, int pos_y, int size)
{
    int i = pos_x + (size - 1);
    int j = pos_y;

    while (j < (pos_y + size)) {
        if (tab[j][i] == 'o')
            return (0);
        j++;
    }
    j = pos_y + (size - 1);
    while (i >= pos_x) {
        if (tab[j][i] == 'o')
            return (0);
        i--;
    }
    return (1);
}

char **my_bsq(char **tab, int pos_x, int pos_y, int bsq)
{
    int i = pos_x;
    int j = pos_y;

    while (j < (pos_y + bsq)) {
        i = pos_x;
        while (i < pos_x + bsq) {
            tab[j][i] = 'x';
            i++;
        }
        j++;
    }
    return (tab);
}