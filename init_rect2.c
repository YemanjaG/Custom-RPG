/*
** EPITECH PROJECT, 2019
** init_rect2 my_rpg
** File description:
** rect2 initialisations file for my_rpg
*/
#include "struct.h"

void init_rect6_bis(sfRenderWindow* wd, t_re6 *re6)
{
    re6->re_cin_d.height = 1080;
    re6->re_cin_d.width = 1920;
    re6->re_cin_d.top = 0;
    re6->re_cin_d.left = 0;
    re6->re_cin_f.left = 0;
    re6->re_cin_f.top = 0;
    re6->re_cin_f.width = 1920;
    re6->re_cin_f.height= 1080;
}

t_re6 *init_rect6(sfRenderWindow* wd)
{
    t_re6 *re6 = malloc(sizeof(t_re6));
    re6->re_armor.height = 210;
    re6->re_armor.width = 280;
    re6->re_armor.top = 0;
    re6->re_armor.left = 0;
    re6->re_boot.height = 82;
    re6->re_boot.width = 106;
    re6->re_boot.top = 0;
    re6->re_boot.left = 0;
    re6->re_hpot.height = 70;
    re6->re_hpot.width = 70;
    re6->re_hpot.top = 0;
    re6->re_hpot.left = 0;
    re6->re_chest.height = 110;
    re6->re_chest.width = 132;
    re6->re_chest.top = 0;
    re6->re_chest.left = 128;
    init_rect6_bis(wd, re6);
    return re6;
}