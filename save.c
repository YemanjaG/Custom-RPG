/*
** EPITECH PROJECT, 2019
** save.c my_rpg
** File description:
** save file for my_rpg
*/

#include "struct.h"

char **save_parser2(t_var *var, char **buff2)
{
    buff2 = save_in_tab(var->dia->p_intro_block, buff2, 15);
    buff2 = save_in_tab(var->dia->p_quete_block, buff2, 16);
    buff2 = save_in_tab(var->dia->p_seller_block, buff2, 17);
    buff2 = save_in_tab(var->dia->p_kehops_block, buff2, 18);
    buff2 = save_in_tab(var->dia->p_mage_block, buff2, 19);
    buff2 = save_in_tab(var->dia->p_boss_block, buff2, 20);
    buff2 = save_in_tab(var->va->money, buff2, 21);
    buff2 = save_in_tab(var->va->hp, buff2, 22);
    buff2 = save_in_tab(var->va3->livemage, buff2, 23);
    buff2 = save_in_tab(var->va3->liveboss, buff2, 24);
    buff2 = save_in_tab(var->dia->sells, buff2, 25);
    buff2 = save_in_tab(var->dia->test, buff2, 26);
    buff2 = save_in_tab(var->va->cin_f, buff2, 27);
    buff2 = save_in_tab(var->va->cin_d, buff2, 28);
    return (buff2);
}

char **save_parser(t_var *var, char **buff2)
{
    buff2 = save_in_tab(var->va3->armor, buff2, 0);
    buff2 = save_in_tab(var->va3->boots, buff2, 1);
    buff2 = save_in_tab(var->va3->nappot, buff2, 2);
    buff2 = save_in_tab(var->va3->nhpot, buff2, 3);
    buff2 = save_in_tab(var->va3->nsting, buff2, 4);
    buff2 = save_in_tab(var->va3->nvenom, buff2, 5);
    buff2 = save_in_tab(var->va3->nweb, buff2, 6);
    buff2 = save_in_tab(var->va2->map, buff2, 7);
    buff2 = save_in_tab(var->va->fight, buff2, 8);
    buff2 = save_in_tab(var->dia->p_intro, buff2, 9);
    buff2 = save_in_tab(var->dia->p_quete, buff2, 10);
    buff2 = save_in_tab(var->dia->p_seller, buff2, 11);
    buff2 = save_in_tab(var->dia->p_kehops, buff2, 12);
    buff2 = save_in_tab(var->dia->p_mage, buff2, 13);
    buff2 = save_in_tab(var->dia->p_boss, buff2, 14);
    buff2 = save_parser2(var, buff2);
    return (buff2);
}

int write_in_file(char **buff2, t_var *var)
{
    int fd = 0;
    fd = open(var->acc->name, O_CREAT | O_WRONLY, S_IRWXU);
    if (fd < 0) {
        write(1, "cannot save because can't open files\n", 38);
        return (84);
    }
    for (int i = 0; i < 29; i++) {
        write(fd, buff2[i], my_strlen(buff2[i]));
        write(fd, "\n", 1);
    }
    close(fd);
    return (0);
}

int save(t_var *var)
{
    char **buff2 = malloc(sizeof(char *) * 30);
    buff2[29] = NULL;
    buff2 = save_parser(var, buff2);
    return (write_in_file(buff2, var));
}