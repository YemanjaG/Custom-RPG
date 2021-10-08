/*
** EPITECH PROJECT, 2019
** main my_rpg
** File description:
** main my_rpg
*/

#include "struct.h"

int create_new_account(t_acc *acc)
{
    int choice = 0;
    int entry = 0;
    char *pseudo = "";
    write(1, "Choisissez un pseudo ['^D' to quit]: ", 37);
    if ((pseudo = get_next_line(0)) == NULL)
        return (1);
    while ((choice = compare_file(pseudo, acc)) != 1){
        entry = 1;
        if (choice == 0 && entry == 1) {
            write(1, "Ce pseudo existe deja\n", 22);
        }
        write(1, "Choisissez un pseudo ['^D' to quit]: ", 37);
        if ((pseudo = get_next_line(0)) == NULL){
            return (1);
        }
    }
    acc->name = pseudo;
    acc->name = add_extention(acc->name);
    acc->type = 1;
    return (0);
}

int connection_account(t_acc *acc)
{
    int choice = 1;
    char *pseudo = "";
    while ((choice = compare_file(pseudo, acc)) != 0){
        write(1, "Quel est votre pseudo ['^D' to quit]: ", 38);
        if ((pseudo = get_next_line(0)) == NULL){
            return (1);
        }
    }
    acc->type = 2;
    return (0);
}

int want_to_connect(t_acc *acc)
{
    int create_account = 0;
    char *s = NULL;
    int ret = 0;
    while (create_account == 0) {
        write(1, "Se connecter [y/n]: ", 20);
        if ((s = get_next_line(0)) == NULL)
            return (1);
        if (my_strlen(s) != 1) {
            create_account = 0;
            s = NULL;
        }
        else if (my_strlen(s) == 1 && s[0] == 'y')
            create_account = 1;
        else if (my_strlen(s) == 1 && s[0] == 'n')
            create_account = 2;
    }
    if (create_account == 1)
        ret = connection_account(acc);
    else if (create_account == 2 && (ret = 1) != 1);
    return (ret);
}

int account(t_acc *acc)
{
    int create_account = 0;
    char *s = NULL;
    int ret = 0;
    while (create_account == 0) {
        write(1, "Creer un compte [y/n]: ", 23);
        if ((s = get_next_line(0)) == NULL)
            return (1);
        if (my_strlen(s) != 1) {
            create_account = 0;
            s = NULL;
        }
        else if (my_strlen(s) == 1 && s[0] == 'y')
            create_account = 1;
        else if (my_strlen(s) == 1 && s[0] == 'n')
            create_account = 2;
    }
    if (create_account == 1)
        ret = create_new_account(acc);
    else if (create_account == 2 && (ret = want_to_connect(acc)) != ret);
    return (ret);
}