/*
** EPITECH PROJECT, 2019
** event
** File description:
** all events handling fcts for my_rpg
*/

#include "struct.h"

void handle_ap(sfRenderWindow* wd, t_var *var)
{
    if (var->va->ap <= 0)
        var->va->ap = 0;
    if (var->va->ap >= 4)
        var->va->ap = 4;
    if (var->va->ap == 0)
        var->re3->rect_ap.top = 0;
    if (var->va->ap == 1)
        var->re3->rect_ap.top = 39;
    if (var->va->ap == 2)
        var->re3->rect_ap.top = 78;
    if (var->va->ap == 3)
        var->re3->rect_ap.top = 117;
    if (var->va->ap == 4)
        var->re3->rect_ap.top = 156;
}

void handle_hp(sfRenderWindow* wd, t_var *var)
{
    check_end_fight(wd, var);
    if (var->va->hp >= 100){
        var->re4->rect_phpf.width = 300;
        var->va->hp = 100;
    }
    if (var->va->hp <= 0)
        var->re4->rect_phpf.width = 0;
    if (var->va->bosshp >= 100){
        var->re4->rect_bhpf.width = 300;
        var->va->bosshp = 100;
    }
    if (var->va->bosshp <= 0)
        var->re4->rect_bhpf.width = 0;
    var->re4->rect_phpf.width = var->va->hp * 3;
    var->re4->rect_bhpf.width = var->va->bosshp * 3;
}

void player_turn(sfRenderWindow* wd, t_var *var)
{
    if (var->va->ap == 0){
        if (var->va->fight == 1){
            var->va->hp -= 14;
        }
        if (var->va->fight == 2){
            var->va->hp -= 6;
        }
        var->va->ap = 2;
    }
}

void handle_event(sfRenderWindow* wd, t_var *var)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        var->va2->start = 0;
        var->va->cin_d = 1;
    }
    if (var->event.type == sfEvtMouseButtonReleased){
        if (var->event.mouseButton.button == sfMouseLeft)
            var->va2->clic = 1;
    }
    keys_event(wd, var);
    handle_inventory(wd, var);
    if (var->va->fight != 0){
        if (var->va->amenu != 1)
            fight_event(wd, var);
        if (var->va->amenu == 1)
            fight_event3(wd, var);
        handle_ap(wd, var);
        handle_hp(wd, var);
        player_turn(wd, var);
    }
}