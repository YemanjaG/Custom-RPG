/*
** EPITECH PROJECT, 2019
** game.c my_rpg
** File description:
** game file for my_rpg
*/

#include "struct.h"

void check_stuff(t_var *var)
{
    if (var->va3->nsting >= 5 && var->va3->nweb >= 5
    && var->va3->nvenom >= 20 && var->dia->p_quete == 1) {
        var->dia->p_quete = 2;
    }
}

void init_stuff(t_var *var)
{
    var->va3->nsting -= 5;
    var->va3->nweb -= 5;
    var->va3->nvenom -= 20;
    var->dia->p_mage_block = 1;
}

void start_dia(sfRenderWindow *wd, t_var *var)
{
    print_dialog_box(wd, var);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(var->cl->cl_text)) > 10){
        if (var->dia->whois == 1)
            p_intro_dialog(wd, var);
        if (var->dia->whois == 2)
            p_quete_dialog(wd, var);
        if (var->dia->whois == 3)
            p_seller_dialog(wd, var);
        if (var->dia->whois == 4)
            p_kehops_dialog(wd, var);
        if (var->dia->whois == 5)
            p_mage_dialog(wd, var);
        if (var->dia->whois == 6)
            p_boss_dialog(wd, var);
        sfClock_restart(var->cl->cl_text);
    }
    sfRenderWindow_drawText(wd, var->dia->text, NULL);
}

void dialog(sfRenderWindow *wd, t_var *var)
{
    if (var->dia->whois != 0 && var->dia->talk != 0)
        start_dia(wd, var);
    else {
        if (var->dia->p_intro != 0)
            var->dia->p_quete_block = 1;
        var->dia->p_kehops_block = 1;
        var->dia->p_seller_block = 1;
    }
    if (var->dia->whois == 0)
        var->dia->talk = 0;
    re_init_dia(var);
}