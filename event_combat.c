/*
** EPITECH PROJECT, 2019
** event_fight.c
** File description:
** all events fight handling fcts for my_rpg
*/

#include "struct.h"

void fight_event5(sfRenderWindow* wd, t_var *var)
{
    if (var->re3->rect_atqmenu.left == 0 && var->va->ap >= 1){
        var->va->ap -= 1;
        var->va->bosshp -= var->va->plrdmg;
    } if (var->re3->rect_atqmenu.left == 400 && var->va->ap >= 2){
        var->va->ap -= 2;
        var->va->bosshp -= (var->va->plrdmg * 2);
    } if (var->re3->rect_atqmenu.left == 800 && var->va->ap >= 1){
        var->va->ap -= 1;
        var->va->hp += var->va->plrheal;
    } if (var->re3->rect_atqmenu.left == 1200 && var->va->ap >= 1
    && var->va3->nhpot > 0){
        var->va->ap -= 1;
        var->va3->nhpot -= 2;
        var->va->hp += (var->va->plrheal * 4);
    } if (var->re3->rect_atqmenu.left == 1600 && var->va->ap >= 1
    && var->va3->nappot > 0){
        var->va3->nappot -= 2;
        var->va->ap += 1;
    }
}

void fight_event4(sfRenderWindow* wd, t_var *var)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace)){
        fight_event5(wd, var);
        var->va->amenu = 0;
    }
}

void fight_event3(sfRenderWindow* wd, t_var *var)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)){
        var->re3->rect_atqmenu.left -= 400;
        if (var->re3->rect_atqmenu.left <= 0)
            var->re3->rect_atqmenu.left = 0;
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown)){
        var->re3->rect_atqmenu.left += 400;
        if (var->re3->rect_atqmenu.left >= 1600)
            var->re3->rect_atqmenu.left = 1600;
    }
    if (sfKeyboard_isKeyPressed(sfKeyBackspace)){
        var->va->amenu = 0;
    }
    fight_event4(wd, var);
}

void fight_event2(sfRenderWindow* wd, t_var *var)
{
    if (var->re3->rect_cbmenu.left == 0
    && sfKeyboard_isKeyPressed(sfKeyEnter)){
        var->va->amenu = 1;
    }
    if (var->re3->rect_cbmenu.left == 400
    && sfKeyboard_isKeyPressed(sfKeyEnter)){
        var->va->fight = 0;
    }
    if (var->re3->rect_cbmenu.left == 800
    && sfKeyboard_isKeyPressed(sfKeyEnter)){
        var->va->fight = 0;
    }
}

void fight_event(sfRenderWindow* wd, t_var *var)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)){
        var->re3->rect_cbmenu.left -= 400;
        if (var->re3->rect_cbmenu.left <= 0)
            var->re3->rect_cbmenu.left = 0;
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown)){
        var->re3->rect_cbmenu.left += 400;
        if (var->re3->rect_cbmenu.left >= 800)
            var->re3->rect_cbmenu.left = 800;
    }
    fight_event2(wd, var);
}