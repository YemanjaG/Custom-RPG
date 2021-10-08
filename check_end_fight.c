/*
** EPITECH PROJECT, 2019
** event
** File description:
** all events handling fcts for my_rpg
*/

#include "struct.h"

void check_end_fight_2(t_var *var)
{
    if (var->va2->map == 2) {
        var->dia->p_mage_block = 0;
        var->dia->p_boss_block = 1;
        var->va3->livemage = 0;
        var->va->bosshp = 100;
        var->va->hp = 100;
    } else if (var->va2->map == 1) {
        var->dia->p_boss_block = 0;
        var->va3->liveboss = 0;
        var->va->hp = 100;
    }
}

void check_end_fight(sfRenderWindow* wd, t_var *var)
{
    if (var->va->hp <= 0){
        var->va->hp = 100;
        var->va->bosshp = 100;
        var->va->fight = 0;
        if (var->va3->livemage > 0)
            var->dia->p_mage_block = 1;
        else if (var->va3->liveboss > 0)
            var->dia->p_boss_block = 1;
    } if (var->va->bosshp <= 0){
        check_end_fight_2(var);
        var->va->fight = 0;
    }
}