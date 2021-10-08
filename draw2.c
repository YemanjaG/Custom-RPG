/*
** EPITECH PROJECT, 2019
** game.c my_rpg
** File description:
** game file for my_rpg
*/

#include "struct.h"


void draw_playerbis(sfRenderWindow *wd, t_var *var)
{
    var->va2->cnt++;
    if (var->va2->cnt == 1)
        var->re->rect_plr.top += 176 * 20;
    player_walk(wd, var, 2);
}

void draw_player2(sfRenderWindow *wd, t_var *var)
{
    sfSprite_setTexture(var->spr2->spr_plr2, var->tex2->tex_plr2, sfTrue);
    sfSprite_setPosition(var->spr2->spr_plr2, var->po4->pos_plr);
    if (var->va2->key_z == 0 && var->va2->key_s == 0 && var->va2->key_q == 0 &&
    var->va2->key_d == 0 && var->va2->key_a == 0 && var->va2->key_e == 0){
        var->va2->cnt++;
        if (var->va2->cnt == 1)
            var->re->rect_plr.top += 176 * 20;
        player_walk(wd, var, 2);
    } else {
        if (var->va2->key_a != 0 || var->va2->key_e != 0){
            check_atk(wd, var);
            var->va2->cnt = 0;
        } else if (check_movment(wd, var) == 0)
            var->va2->cnt = 0;
    }
    sfSprite_setTextureRect(var->spr2->spr_plr2, var->re->rect_plr);
    sfRenderWindow_drawSprite(wd, var->spr2->spr_plr2, NULL);
}

void draw_player_ext(sfRenderWindow *wd, t_var *var)
{
    if (var->va2->key_a != 0 || var->va2->key_e != 0){
        check_atk(wd, var);
        var->va2->cnt = 0;
    } else if (check_movment(wd, var) == 0)
        var->va2->cnt = 0;
}