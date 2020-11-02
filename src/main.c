/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** main.c
*/

#include "my.h"

int main (int ac, char **av)
{
    char **tab = NULL;

    if (manage_error(ac) == 84)
        return (84);
    tab = read_array(av);
    if (tab == NULL)
        return (84);
    search_square(&tab[1]);
    return (0);
}

int manage_error(int ac)
{
    if (ac != 2)
        return (84);
    return (0);
}