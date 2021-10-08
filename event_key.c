/*
** EPITECH PROJECT, 2019
** event_key.c
** File description:
** all events key handling fcts for my_rpg
*/

#include "struct.h"

void keys_event4(sfRenderWindow* wd, t_var *var)
{
    if (sfKeyboard_isKeyPressed(sfKeyE) && var->va2->key_e != 1 &&
    var->re->rect_plr.top >= (176 * 20) && var->dia->talk == 0 &&
    var->dia->p_quete == -1){
        var->re->rect_plr.left = 0;
        var->va2->key_e = 1;
        var->re->rect_plr.top -= 176 * 12;
    }
    if (sfKeyboard_isKeyPressed(sfKeyLShift) && var->re6->re_boot.left == 106){
        var->va->plr_speed = 10;
        var->va->screen_speed = 10;
    } else {
        var->va->plr_speed = 5;
        var->va->screen_speed = 5;
    }
    if (sfKeyboard_isKeyPressed(sfKeyI) && var->dia->talk == 0){
        var->va->inv = 1;
    } else if (var->dia->whois != 3){
        var->va->inv = 0;
    }
    keys_event5(wd, var);
}

void keys_event3(sfRenderWindow* wd, t_var *var)
{
    if (sfKeyboard_isKeyPressed(sfKeyD) && (var->va2->key_a +
    var->va2->key_e == 0) && var->dia->talk == 0){
        var->va2->key_z = 0;
        var->va2->key_q = 0;
        var->va2->key_s = 0;
        var->va2->key_d = 1;
    } else
        var->va2->key_d = 0;
    if (sfKeyboard_isKeyPressed(sfKeyA) && var->va2->key_a != 1 &&
    var->re->rect_plr.top >= (176 * 20) && var->dia->talk == 0){
        var->re->rect_plr.left = 0;
        var->va2->key_a = 1;
        var->re->rect_plr.top -= 176 * 16;
    }
    keys_event4(wd, var);
}

void keys_event2(sfRenderWindow* wd, t_var *var)
{
    if (sfKeyboard_isKeyPressed(sfKeyQ) && (var->va2->key_a +
    var->va2->key_e == 0) && var->dia->talk == 0){
        var->va2->key_z = 0;
        var->va2->key_q = 1;
        var->va2->key_s = 0;
        var->va2->key_d = 0;
    } else
        var->va2->key_q = 0;
    if (sfKeyboard_isKeyPressed(sfKeyX) && var->dia->whois == 3 &&
    var->va3->nhpot < 10 && (var->va->money >= 50 || (var->va->money >= 25 &&
    var->va->money % 2 == 1)) && var->va3->nhpot++ != -1){
        var->va->money -= 25;
    } else if (sfKeyboard_isKeyPressed(sfKeyC) && var->dia->whois == 3 && var->
        va3->nappot < 10 && (var->va->money >= 50 || (var->va->money >= 25 &&
        var->va->money % 2 == 1)) && var->va3->nappot++ != -1)
        var->va->money -= 25;
    keys_event3(wd, var);
}

void keys_event(sfRenderWindow* wd, t_var *var)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ) && (var->va2->key_a +
    var->va2->key_e == 0) && var->dia->talk == 0){
        var->va2->key_z = 1;
        var->va2->key_q = 0;
        var->va2->key_s = 0;
        var->va2->key_d = 0;
    } else
        var->va2->key_z = 0;
    if (sfKeyboard_isKeyPressed(sfKeyS) && (var->va2->key_a +
    var->va2->key_e == 0) && var->dia->talk == 0){
        var->va2->key_z = 0;
        var->va2->key_q = 0;
        var->va2->key_s = 1;
        var->va2->key_d = 0;
    } else
        var->va2->key_s = 0;
    keys_event2(wd, var);
}