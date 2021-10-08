/*
** EPITECH PROJECT, 2019
** game.c my_rpg
** File description:
** game file for my_rpg
*/

#include "struct.h"

void cam_up(sfRenderWindow *wd, t_var *var)
{
    var->re2->re_town.top -= var->va->screen_speed;
    if (var->re2->re_town.top <= 0){
        var->re2->re_town.top = 0;
        var->po4->pos_plr.y -= var->va->plr_speed;
    }
    if (var->re2->re_town.top + 25 >= 3400 && var->po4->pos_plr.y >= 451){
        var->re2->re_town.top = 3400;
        var->po4->pos_plr.y -= var->va->plr_speed;
    }
}

void cam_down(sfRenderWindow *wd, t_var *var)
{
    var->re2->re_town.top += var->va->screen_speed;
    if (var->re2->re_town.top >= 3400){
        var->re2->re_town.top = 3400;
        var->po4->pos_plr.y += var->va->plr_speed;
    }
    if (var->re2->re_town.top - 25 <= 0 && var->po4->pos_plr.y <= 451){
        var->re2->re_town.top = 0;
        var->po4->pos_plr.y += var->va->plr_speed;
    }
}

void cam_left(sfRenderWindow *wd, t_var *var)
{
    var->re2->re_town.left -= var->va->screen_speed;
    if (var->re2->re_town.left <= 0){
        var->re2->re_town.left = 0;
        var->po4->pos_plr.x -= var->va->plr_speed;
    }
    if (var->re2->re_town.left + 25 >= 2560 && var->po4->pos_plr.x >= 872){
        var->re2->re_town.left = 2560;
        var->po4->pos_plr.x -= var->va->plr_speed;
    }
}

void cam_right(sfRenderWindow *wd, t_var *var)
{
    var->re2->re_town.left += var->va->screen_speed;
    if (var->re2->re_town.left >= 2560){
        var->re2->re_town.left = 2560;
        var->po4->pos_plr.x += var->va->plr_speed;
    }
    if (var->re2->re_town.left - 25 <= 0 && var->po4->pos_plr.x <= 872){
        var->re2->re_town.left = 0;
        var->po4->pos_plr.x += var->va->plr_speed;
    }
}

void cam(sfRenderWindow *wd, t_var *var)
{
    if (var->va2->key_z == 1)
        cam_up(wd, var);
    if (var->va2->key_s == 1)
        cam_down(wd, var);
    if (var->va2->key_d == 1)
        cam_right(wd, var);
    if (var->va2->key_q == 1)
        cam_left(wd, var);
}