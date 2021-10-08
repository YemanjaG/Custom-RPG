/*
** EPITECH PROJECT, 2019
** event_key2.c
** File description:
** all events key2 handling fcts for my_rpg
*/

#include "struct.h"

void keys_event5(sfRenderWindow* wd, t_var *var)
{
    if (sfKeyboard_isKeyPressed(sfKeyF) && var->dia->talk == 0){
        if (var->va3->livemage == 0 && var->dia->whois == 5){
            var->re6->re_chest.left = 0;
            var->va3->armor = 1;
            var->va->money += 50;
            var->va->plrdmg += 2;
            var->va->plrheal += 4;
            var->dia->p_intro = 2;
        } else
            var->dia->talk = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace) && var->dia->talk != 0)
        var->dia->space = 1;
    else
        var->dia->space = 0;
}