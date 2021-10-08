/*
** EPITECH PROJECT, 2019
** game.c my_rpg
** File description:
** game file for my_rpg
*/

#include "struct.h"

void draw_intro(sfRenderWindow *wd, t_var *var)
{
    sfSprite_setTexture(var->spr4->spr_cin_d, var->tex4->tex_cin_d, sfTrue);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(var->cl->cl_cin_d)) > 1){
        if (var->re6->re_cin_d.top > 3300)
            var->va->cin_d = 1;
        else
            var->re6->re_cin_d.top += 2;
        sfClock_restart(var->cl->cl_cin_d);
    }
    sfSprite_setTextureRect(var->spr4->spr_cin_d, var->re6->re_cin_d);
    sfRenderWindow_drawSprite(wd, var->spr4->spr_cin_d, NULL);
}

void draw_outro(sfRenderWindow *wd, t_var *var)
{
    sfSprite_setTexture(var->spr4->spr_cin_f, var->tex4->tex_cin_f, sfTrue);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(var->cl->cl_cin_f)) > 1){
        if (var->re6->re_cin_f.top > 3300)
            var->va->cin_f = 1;
        else
            var->re6->re_cin_f.top += 2;
        sfClock_restart(var->cl->cl_cin_f);
    }
    sfSprite_setTextureRect(var->spr4->spr_cin_f, var->re6->re_cin_f);
    sfRenderWindow_drawSprite(wd, var->spr4->spr_cin_f, NULL);
}