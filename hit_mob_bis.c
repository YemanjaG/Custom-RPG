/*
** EPITECH PROJECT, 2019
** mob_hit.c my_rpg
** File description:
** mob_hit file for my_rpg
*/

#include "struct.h"

void hit_mob1_bis(sfRenderWindow* wd, t_var *var)
{
    if ((var->re->rect_plr.top == 176 * 5 || var->re->rect_plr.top == 176 *
    9) && var->po4->pos_mob1.x >= var->po4->pos_plr.x - 45 && var->po4->
    pos_mob1.x <= var->po4->pos_plr.x + 13 && var->po4->pos_mob1.y >= var->
    po4->pos_plr.y + 40 && var->po4->pos_mob1.y <= var-> po4->pos_plr.y + 106){
        kill_mob(wd, var, 1);
    }
    if ((var->re->rect_plr.top == 176 * 7 || var->re->rect_plr.top == 176 *
    11) && var->po4->pos_mob1.x >= var->po4->pos_plr.x + 63 && var->po4->
    pos_mob1.x <= var->po4->pos_plr.x + 101 && var->po4->pos_mob1.y >= var->
    po4->pos_plr.y + 40 && var->po4->pos_mob1.y <= var->po4->pos_plr.y + 106){
        kill_mob(wd, var, 1);
    }
}

void hit_mob2_bis(sfRenderWindow* wd, t_var *var)
{
    if ((var->re->rect_plr.top == 176 * 5 || var->re->rect_plr.top == 176 *
    9) && var->po4->pos_mob2.x >= var->po4->pos_plr.x - 25 && var->po4->
    pos_mob2.x <= var->po4->pos_plr.x + 33 && var->po4->pos_mob2.y >= var->
    po4->pos_plr.y + 40 && var->po4->pos_mob2.y <= var->po4->pos_plr.y + 106){
        kill_mob(wd, var, 2);
    }
    if ((var->re->rect_plr.top == 176 * 7 || var->re->rect_plr.top == 176 *
    11) && var->po4->pos_mob2.x >= var->po4->pos_plr.x + 83 && var->po4->
    pos_mob2.x <= var->po4->pos_plr.x + 121 && var->po4->pos_mob2.y >= var->
    po4->pos_plr.y + 40 && var->po4->pos_mob2.y <= var->po4->pos_plr.y + 106){
        kill_mob(wd, var, 2);
    }
}

void hit_mob3_bis(sfRenderWindow* wd, t_var *var)
{

    if ((var->re->rect_plr.top == 176 * 5 || var->re->rect_plr.top == 176 *
    9) && var->po4->pos_mob3.x >= var->po4->pos_plr.x - 35 && var->po4->
    pos_mob3.x <= var->po4->pos_plr.x + 33 && var->po4->pos_mob3.y >= var->
    po4->pos_plr.y + 40 && var->po4->pos_mob3.y <=
    var->po4->pos_plr.y + 106){
        kill_mob(wd, var, 3);
    }
    if ((var->re->rect_plr.top == 176 * 7 || var->re->rect_plr.top == 176 *
    11) && var->po4->pos_mob3.x >= var->po4->pos_plr.x + 83 && var->po4->
    pos_mob3.x <= var->po4->pos_plr.x + 131 && var->po4->pos_mob3.y >= var->
    po4->pos_plr.y + 40 && var->po4->pos_mob3.y <=
    var->po4->pos_plr.y + 106){
        kill_mob(wd, var, 3);
    }
}

void kill_mob_time(sfRenderWindow* wd, t_var *var)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(var->cl->cl_rspw)) > 60){
        sfClock_restart(var->cl->cl_rspw);
        var->po4->pos_mob3.x = rand_pos(0 - var->re2->re_town.left, 2000 - var->
        re2->re_town.left);
        var->po4->pos_mob3.y = rand_pos(2600 - var->re2->re_town.top, 1880 +
        (2600 - var->re2->re_town.top));
        var->po4->pos_mob2.x = rand_pos(0 - var->re2->re_town.left, 2000 - var->
        re2->re_town.left);
        var->po4->pos_mob2.y = rand_pos(2600 - var->re2->re_town.top, 1880 +
        (2600 - var->re2->re_town.top));
        var->po4->pos_mob1.x = rand_pos(0 - var->re2->re_town.left, 2000 - var->
        re2->re_town.left);
        var->po4->pos_mob1.y = rand_pos(2600 - var->re2->re_town.top, 1880 +
        (2600 - var->re2->re_town.top));
        sfClock_restart(var->cl->cl_rspw);
    }
}

void kill_mob_bis(sfRenderWindow* wd, t_var *var, int type)
{
    if (type == 3){
        var->po4->pos_mob3.x = rand_pos(0 - var->re2->re_town.left, 2000 - var->
        re2->re_town.left);
        var->po4->pos_mob3.y = rand_pos(2600 - var->re2->re_town.top, 1880 +
        (2600 - var->re2->re_town.top));
        if (var->va3->nweb < 5)
            var->va3->nweb++;
    }
    var->va3->countup++;
}