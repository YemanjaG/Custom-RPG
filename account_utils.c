/*
** EPITECH PROJECT, 2019
** main my_rpg
** File description:
** main my_rpg
*/

#include "struct.h"

char *add_extention(char *name)
{
    char *new = my_memset(new, '\0', (5+my_strlen(name)));
    new = my_strcat(new, name);
    new = my_strcat(new, ".txt");
    return (new);
}

int compare_file(char *name, t_acc *acc)
{
    acc->dir = opendir("save");
    if (acc->dir == NULL) {
        if (ENOENT == errno)
            write(2, "Le dossier n'existe pas\n", 24);
        else
            write(2, "Erreur à l'ouverture du dossier\n", 32);
        return (1);
    }
    char *file_name;
    name = add_extention(name);
    while ((acc->directory = readdir(acc->dir)) != NULL) {
        file_name = acc->directory->d_name;
        if (my_strcmp(file_name, name) == 0){
            acc->name = name;
            return (0);
        }
    }
    return (1);
}
