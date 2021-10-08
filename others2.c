/*
** EPITECH PROJECT, 2019
** other2
** File description:
** another fct file for my_rpg
*/

#include "struct.h"

void change_sound2(sfRenderWindow* wd, t_var *var)
{
    if (var->po->pos_mouse.x >= 1060 && var->po->pos_mouse.x <= 1160 &&
        var->po->pos_mouse.y >= 259 && var->po->pos_mouse.y <= 359)
        var->po->pos_pls.y = 264;
    sfSprite_setTextureRect(var->spr2->spr_nbrs2, var->re->rect_nbrs2);
}

void change_music2(sfRenderWindow* wd, t_var *var)
{
    if (var->po->pos_mouse.x >= 1060 && var->po->pos_mouse.x <= 1160 &&
        var->po->pos_mouse.y >= 659 && var->po->pos_mouse.y <= 759)
        var->po->pos_pls2.y = 664;
    sfSprite_setTextureRect(var->spr2->spr_nbrs, var->re->rect_nbrs);
}

void change_res2(sfRenderWindow* wd, t_var *var)
{
    if (var->va2->res1 == 3){
        var->po4->pos_slct.x = 365;
        var->po4->pos_slct.y = 514;
        var->va2->reso.x = 1280;
        var->va2->reso.y = 1024;
    } else {
        var->po4->pos_slct.x = 420;
        var->po4->pos_slct.y = 714;
        var->va2->reso.x = 1600;
        var->va2->reso.y = 1900;
    }
}