/*
** EPITECH PROJECT, 2019
** mob_farm.c my_rpg
** File description:
** mob_farm file for my_rpg
*/

#include "struct.h"

sfVector2f move_mob(sfRenderWindow* wd, t_var *var, sfVector2f mob)
{
    if (var->va2->key_z == 1 && var->re2->re_town.top > 0 &&
    (var->re2->re_town.top < 3400 || var->po4->pos_plr.y < 451)){
        mob.y += var->va->plr_speed;
        if (col_up(wd, var) == 1 && (mob.y -= var->va->plr_speed) == mob.y);
    } else if (var->va2->key_q == 1 && var->re2->re_town.left > 0 &&
    (var->re2->re_town.left < 2560 || var->po4->pos_plr.x < 872)){
        mob.x += var->va->plr_speed;
        if (col_left(wd, var) == 1 && (mob.x -= var->va->plr_speed) == mob.x);
    }
    if (var->va2->key_s == 1 && var->re2->re_town.top < 3400 &&
    (var->re2->re_town.top > 0 || var->po4->pos_plr.y > 451)){
        mob.y -= var->va->plr_speed;
        if (col_down(wd, var) == 1 && (mob.y += var->va->plr_speed) == mob.y);
    } else if (var->va2->key_d == 1 && var->re2->re_town.left < 2560 &&
    (var->re2->re_town.left > 0 || var->po4->pos_plr.x > 872)){
        mob.x -= var->va->plr_speed;
        if (col_right(wd, var) == 1 && (mob.x += var->va->plr_speed) == mob.x);
    }
    return mob;
}

void mob1(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr2->spr_mob1, var->tex2->tex_mob1, sfTrue);
    sfSprite_setPosition(var->spr2->spr_mob1, var->po4->pos_mob1);
    var->po4->pos_mob1 = move_mob(wd, var, var->po4->pos_mob1);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(var->cl->cl_mob1)) > 40){
        var->re2->rect_mob1.left += 100;
        if (var->re2->rect_mob1.left >= 1200)
            var->re2->rect_mob1.left = 0;
        sfClock_restart(var->cl->cl_mob1);
    }
    sfSprite_setTextureRect(var->spr2->spr_mob1, var->re2->rect_mob1);
    sfRenderWindow_drawSprite(wd, var->spr2->spr_mob1, NULL);
}

void mob2(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr2->spr_mob2, var->tex2->tex_mob2, sfTrue);
    sfSprite_setPosition(var->spr2->spr_mob2, var->po4->pos_mob2);
    var->po4->pos_mob2 = move_mob(wd, var, var->po4->pos_mob2);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(var->cl->cl_mob2)) > 40){
        var->re2->rect_mob2.left += 60;
        if (var->re2->rect_mob2.left >= 1200)
            var->re2->rect_mob2.left = 0;
        sfClock_restart(var->cl->cl_mob2);
    }
    sfSprite_setTextureRect(var->spr2->spr_mob2, var->re2->rect_mob2);
    sfRenderWindow_drawSprite(wd, var->spr2->spr_mob2, NULL);
}

void mob3(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr2->spr_mob3, var->tex2->tex_mob3, sfTrue);
    sfSprite_setPosition(var->spr2->spr_mob3, var->po4->pos_mob3);
    var->po4->pos_mob3 = move_mob(wd, var, var->po4->pos_mob3);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(var->cl->cl_mob3)) > 100){
        var->re2->rect_mob3.left += 60;
        if (var->re2->rect_mob3.left >= 660)
            var->re2->rect_mob3.left = 0;
        sfClock_restart(var->cl->cl_mob3);
    }
    sfSprite_setTextureRect(var->spr2->spr_mob3, var->re2->rect_mob3);
    sfRenderWindow_drawSprite(wd, var->spr2->spr_mob3, NULL);
}

void draw_mob(sfRenderWindow* wd, t_var *var)
{
    if (var->va2->map == 0){
        mob1(wd, var);
        mob2(wd, var);
        mob3(wd, var);
        check_mob_hit(wd, var);
    }
}