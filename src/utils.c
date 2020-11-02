/*
** EPITECH PROJECT, 2019
** bistro
** File description:
** utils.c
*/

#include "my.h"

char *my_strncpy(char *dest ,char const *src, int n)
{
    int replace = 0;

    while (replace != n && src[replace] != '\0') {
        dest[replace] = src[replace];
        replace++;
    }
    dest[replace] = '\0';
    return (dest);
}