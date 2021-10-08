/*
** EPITECH PROJECT, 2019
** player.c my_rpg
** File description:
** player file for my_rpg
*/

#include "struct.h"

void moove_player(sfRenderWindow *wd, t_var *var)
{
    if (var->va2->key_z == 1)
        var->po4->pos_plr.y -= var->va->plr_speed;
    if (var->va2->key_s == 1)
        var->po4->pos_plr.y += var->va->plr_speed;
    if (var->va2->key_d == 1)
        var->po4->pos_plr.x += var->va->plr_speed;
    if (var->va2->key_q == 1)
        var->po4->pos_plr.x -= var->va->plr_speed;
}

void player_atk(sfRenderWindow *wd, t_var *var, int range)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(var->cl->cl_plr)) > 30){
        var->re->rect_plr.left += 176;
        if (range == 16 && var->re->rect_plr.left >= (176 * 15)){
            var->va2->key_a = 0;
            var->re->rect_plr.top -= (176 * 4);
            var->re->rect_plr.left = 0;
        }
        if (range == 12 && var->re->rect_plr.left >= (176 * 15)){
            var->va2->key_e = 0;
            var->re->rect_plr.top -= (176 * 8);
            var->re->rect_plr.left = 0;
        }
        sfClock_restart(var->cl->cl_plr);
    }
}

void check_atk(sfRenderWindow *wd, t_var *var)
{
    if (var->va2->key_a == 1){
        player_atk(wd, var, 16);
    }
    if (var->va2->key_e == 1){
        player_atk(wd, var, 12);
    }
}

void player_walk(sfRenderWindow *wd, t_var *var, int type)
{
    if (type == 1 && var->va2->map == 0)
        cam(wd, var);
    else if (type == 1 && var->va2->map != 0)
        moove_player(wd, var);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(var->cl->cl_plr)) > 40){
        var->re->rect_plr.left += 176;
        if (type == 1 && var->re->rect_plr.left >= 176 * 15)
            var->re->rect_plr.left = 0;
        else if (type == 2 && var->re->rect_plr.left >= 176 * 30)
            var->re->rect_plr.left = 0;
        sfClock_restart(var->cl->cl_plr);
    }
}

int check_movment(sfRenderWindow *wd, t_var *var)
{
    int a = 0;
    if (var->va2->key_z == 1 && (a = col_up(wd, var)) == 0){
        var->re->rect_plr.top = 176 * 2;
        player_walk(wd, var, 1);
    }
    if (var->va2->key_s == 1 && (a = col_down(wd, var)) == 0){
        var->re->rect_plr.top = 0;
        player_walk(wd, var, 1);
    }
    if (var->va2->key_q == 1 && (a = col_left(wd, var)) == 0){
        var->re->rect_plr.top = 176;
        player_walk(wd, var, 1);
    }
    if (var->va2->key_d == 1 && (a = col_right(wd, var)) == 0){
        var->re->rect_plr.top = 176 * 3;
        player_walk(wd, var, 1);
    }
    return a;
}