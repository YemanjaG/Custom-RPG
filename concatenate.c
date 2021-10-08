/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** concatenates two strings
*/

#include "struct.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int a = 0;
    while (dest[i] != '\0') {
        i++;
    }
    while (src[a] != '\0') {
        dest[i] = src[a];
        a++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

void concatenate(t_var *var)
{
    char *name = var->acc->name;
    char *new = my_memset(new, '\0', (7 + my_strlen(name)));
    new = my_strcat(new, "save/");
    new = my_strcat(new, name);
    var->acc->name = new;
}