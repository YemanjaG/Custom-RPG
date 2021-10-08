/*
** EPITECH PROJECT, 2019
** mob_hit.c my_rpg
** File description:
** mob_hit file for my_rpg
*/

#include "struct.h"

void hit_mob1(sfRenderWindow* wd, t_var *var)
{
    if ((var->re->rect_plr.top == 176 * 4 || var->re->rect_plr.top == 176 *
    8) && var->po4->pos_mob1.x >= var->po4->pos_plr.x - 25 && var->po4->
    pos_mob1.x <= var->po4->pos_plr.x + 101 && var->po4->pos_mob1.y >=
    var->po4->pos_plr.y + 98 && var->po4->pos_mob1.y <= var->
    po4->pos_plr.y + 146){
        kill_mob(wd, var, 1);
    }
    if ((var->re->rect_plr.top == 176 * 6 || var->re->rect_plr.top == 176 *
    10) && var->po4->pos_mob1.x >= var->po4->pos_plr.x - 25 && var->po4->
    pos_mob1.x <= var->po4->pos_plr.x + 101 && var->po4->pos_mob1.y >=
    var->po4->pos_plr.y && var->po4->pos_mob1.y <=var->po4->pos_plr.y + 88){
        kill_mob(wd, var, 1);
    }
    hit_mob1_bis(wd, var);
}

void hit_mob2(sfRenderWindow* wd, t_var *var)
{
    if ((var->re->rect_plr.top == 176 * 4 || var->re->rect_plr.top == 176 *
    8) && var->po4->pos_mob2.x >= var->po4->pos_plr.x - 5 && var->po4->
    pos_mob2.x <= var->po4->pos_plr.x + 121 && var->po4->pos_mob2.y >= var->
    po4->pos_plr.y + 98 && var->po4->pos_mob2.y <= var->po4->pos_plr.y + 146){
        kill_mob(wd, var, 2);
    }
    if ((var->re->rect_plr.top == 176 * 6 || var->re->rect_plr.top == 176 *
    10) &&var->po4->pos_mob2.x >= var->po4->pos_plr.x - 5 && var->po4->
    pos_mob2.x <= var->po4->pos_plr.x + 121 && var->po4->pos_mob2.y >= var->
    po4->pos_plr.y && var->po4->pos_mob2.y <= var->po4->pos_plr.y + 88){
        kill_mob(wd, var, 2);
    }
    hit_mob2_bis(wd, var);
}

void hit_mob3(sfRenderWindow* wd, t_var *var)
{
    if ((var->re->rect_plr.top == 176 * 4 || var->re->rect_plr.top == 176 *
    8) && var->po4->pos_mob3.x >= var->po4->pos_plr.x - 5 && var->po4->
    pos_mob3.x <= var->po4->pos_plr.x + 121 && var->po4->pos_mob3.y >= var->
    po4->pos_plr.y + 98 && var->po4->pos_mob3.y <= var->po4->pos_plr.y + 146){
        kill_mob(wd, var, 3);
    }
    if ((var->re->rect_plr.top == 176 * 6 || var->re->rect_plr.top == 176 *
    10) && var->po4->pos_mob3.x >= var->po4->pos_plr.x - 5 && var->po4->
    pos_mob3.x <= var->po4->pos_plr.x + 121 && var->po4->pos_mob3.y >= var->
    po4->pos_plr.y && var->po4->pos_mob3.y <= var->po4->pos_plr.y + 88){
        kill_mob(wd, var, 3);
    }
    hit_mob3_bis(wd, var);
}

void kill_mob(sfRenderWindow* wd, t_var *var, int type)
{
    if (type == 1){
        var->po4->pos_mob1.x = rand_pos(0 - var->re2->re_town.left, 2000 - var->
        re2->re_town.left);
        var->po4->pos_mob1.y = rand_pos(2600 - var->re2->re_town.top, 1880 +
        (2600 - var->re2->re_town.top));
        if (var->va3->nvenom < 20)
            var->va3->nvenom++;
    } else if (type == 2){
        var->po4->pos_mob2.x = rand_pos(0 - var->re2->re_town.left, 2000 - var->
        re2->re_town.left);
        var->po4->pos_mob2.y = rand_pos(2600 - var->re2->re_town.top, 1880 +
        (2600 - var->re2->re_town.top));
        if (var->va3->nsting < 5 && (rand()%1000) % 2 == 0)
            var->va3->nsting++;
    }
    kill_mob_bis(wd, var, type);
}

void check_mob_hit(sfRenderWindow* wd, t_var *var)
{
    if ((var->va2->key_a == 1 || var->va2->key_e == 1) &&
    var->re->rect_plr.left == 12 * 176){
        hit_mob1(wd, var);
        hit_mob2(wd, var);
        hit_mob3(wd, var);
    }
}