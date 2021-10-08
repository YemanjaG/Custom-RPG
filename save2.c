/*
** EPITECH PROJECT, 2019
** save2.c my_rpg
** File description:
** save file for my_rpg
*/

#include "struct.h"

int my_atoi(char *str)
{
    int i = 0;
    int ret = 0;
    int isneg = 0;
    if (str[0] == '-'){
        i++;
        isneg++;
    }
    while (str[i] != '\0'){
        ret = ret * 10 + str[i] - 48;
        i++;
    }
    if (isneg != 0)
        return -ret;
    return (ret);
}

void init_var2(t_var *var, char **buff)
{
    var->dia->p_intro_block = my_atoi(buff[15]);
    var->dia->p_quete_block = my_atoi(buff[16]);
    var->dia->p_seller_block = my_atoi(buff[17]);
    var->dia->p_kehops_block = my_atoi(buff[18]);
    var->dia->p_mage_block = my_atoi(buff[19]);
    var->dia->p_boss_block = my_atoi(buff[20]);
    var->va->money = my_atoi(buff[21]);
    var->va->hp = my_atoi(buff[22]);
    var->va3->livemage = my_atoi(buff[23]);
    var->va3->liveboss = my_atoi(buff[24]);
    var->dia->sells = my_atoi(buff[25]);
    var->dia->test = my_atoi(buff[26]);
    var->va->cin_d = my_atoi(buff[27]);
    var->va->cin_f = my_atoi(buff[28]);
}

void init_var(t_var *var, char **buff)
{
    var->va3->armor = my_atoi(buff[0]);
    var->va3->boots = my_atoi(buff[1]);
    var->va3->nappot = my_atoi(buff[2]);
    var->va3->nhpot = my_atoi(buff[3]);
    var->va3->nsting = my_atoi(buff[4]);
    var->va3->nvenom = my_atoi(buff[5]);
    var->va3->nweb = my_atoi(buff[6]);
    var->va2->map = 0;
    var->va->fight = my_atoi(buff[8]);
    var->dia->p_intro = my_atoi(buff[9]);
    var->dia->p_quete = my_atoi(buff[10]);
    var->dia->p_seller = my_atoi(buff[11]);
    var->dia->p_kehops = my_atoi(buff[12]);
    var->dia->p_mage = my_atoi(buff[13]);
    var->dia->p_boss = my_atoi(buff[14]);
    init_var2(var, buff);
}

int charger_save(t_var *var)
{
    int i = 0;
    concatenate(var);
    char **buff = malloc(sizeof(char *) * 30);
    buff[29] = NULL;
    int fd = 0;
    if ((fd = open(var->acc->name, O_RDONLY | O_CREAT, S_IRWXU)) < 0) {
        write(2, "cannot save because can't open files\n", 37);
        return (84);
    }
    if (var->acc->type != 2)
        return (0);
    for (; i < 29; i++)
        buff[i] = get_next_line(fd);
    init_var(var, buff);
    close(fd);
    return (0);
}