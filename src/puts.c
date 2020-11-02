/*
** EPITECH PROJECT, 2019
** bistro
** File description:
** puts.c
*/

#include "my.h"

void error(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        my_put_nbr(147483648);
    } else {
        if (nb < 0) {
            nb *= -1;
            my_putchar('-');
        }
    }
}

int my_put_nbr(int nb)
{
    long long decimal = 1;

    error(nb);
    while (nb / decimal / 10)
        decimal *=10;
    while (decimal) {
        my_putchar(nb / decimal + 48);
        nb %= decimal;
        decimal /= 10;
    }
    return (0);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int nb = 0;

    while (str[nb] != '\0') {
        my_putchar(str[nb]);
        nb = nb + 1;
    }
    return (0);
}

int my_putarray(char **tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}