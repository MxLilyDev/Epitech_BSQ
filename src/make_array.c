/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** make_array.c
*/

#include "my.h"

char **read_array(char **av)
{
    char** tab = NULL;
    struct stat st;
    char *str;
    int size = 0;
    int fd = 0;
    int size_read = 0;

    fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return (NULL);
    stat(av[1], &st);
    size = st.st_size;
    str = malloc(sizeof(char) * (size + 1));
    size_read = read(fd, str, size);
    str[size_read] = '\0';
    close(fd);
    tab = str_to_tab(str);
    return (tab);
}

char **str_to_tab(char *str)
{
    int nb_rl = nb_return_line(str);
    char **tab = malloc(sizeof(char *) * (nb_rl + 2));
    int nbOnLine = 0;
    int i = 0;
    int j = 0;

    while (str[i]) {
        nbOnLine = nb_carac_line(&str[i]);
        tab[j] = malloc(sizeof(char) * (nbOnLine + 1));
        tab[j] = my_strncpy(tab[j], &str[i], nbOnLine);
        i = i + nbOnLine;
        if (str[i])
            i++;
        j++;
    }
    tab[j] = NULL;
    return (tab);
}

int nb_return_line(char *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            nb++;
        i++;
    }
    return (nb);
}

int nb_carac_line(char *str)
{
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n')
        i++;
    return (i);
}
