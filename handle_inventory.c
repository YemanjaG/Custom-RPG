/*
** EPITECH PROJECT, 2019
** event
** File description:
** all events handling fcts for my_rpg
*/

#include "struct.h"

void check_inv3(sfRenderWindow* wd, t_var *var)
{
    if (var->va3->boots == 1){
        var->re6->re_boot.left = 106;
    }
}

void check_inv2(sfRenderWindow* wd, t_var *var)
{
    if (var->va3->nweb <= 0)
        var->re5->re_web.top = 0;
    else if (var->va3->nweb >= 5)
        var->re5->re_web.top = 350;
    else {
        var->re5->re_web.top = (var->va3->nweb * 70);
    }
    if (var->va3->nappot <= 0)
        var->re5->re_appot.top = 0;
    else if (var->va3->nappot >= 10)
        var->re5->re_appot.top = 350;
    else {
        var->re5->re_appot.top = ((var->va3->nappot / 2) * 70);
    }
}

void check_inv(sfRenderWindow* wd, t_var *var)
{
    if (var->va3->nsting <= 0)
        var->re5->re_sting.top = 0;
    else if (var->va3->nsting >= 5)
        var->re5->re_sting.top = 350;
    else {
        var->re5->re_sting.top = (var->va3->nsting * 70);
    }
    if (var->va3->nvenom <= 0)
        var->re5->re_venom.top = 0;
    else if (var->va3->nvenom >= 20)
        var->re5->re_venom.top = 350;
    else {
        var->re5->re_venom.top = ((var->va3->nvenom / 4) * 70);
    }
    check_inv2(wd, var);
}

void handle_inventory(sfRenderWindow* wd, t_var *var)
{
    if (var->va3->nhpot <= 0)
        var->re6->re_hpot.top = 0;
    else if (var->va3->nhpot >= 10)
        var->re6->re_hpot.top = 350;
    else {
        var->re6->re_hpot.top = ((var->va3->nhpot / 2) * 70);
    }
    if (var->va3->armor == 1){
        var->re6->re_armor.left = 280;
    }
    if (var->va3->countup >= 10){
        var->va3->countup = 0;
        var->va->plrdmg++;
    }
    check_inv(wd, var);
}