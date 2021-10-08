/*
** EPITECH PROJECT, 2019
** other
** File description:
** other fct file for my_rpg
*/

#include "struct.h"

void btn_back(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_back, var->tex->tex_back, sfTrue);
    var->po2->pos_back.y = 859;
    if (var->po->pos_mouse.x >= 680 && var->po->pos_mouse.x <= 1240 &&
        var->po->pos_mouse.y >= 859 && var->po->pos_mouse.y <= 1023)
        var->po2->pos_back.y = 864;
    sfSprite_setPosition(var->spr->spr_back, var->po2->pos_back);
    sfRenderWindow_drawSprite(wd, var->spr->spr_back, NULL);
    if (var->po2->pos_back.y == 864 && var->va2->clic == 1)
        var->va2->opt = 0;
}

void btn_back2(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_back, var->tex->tex_back, sfTrue);
    var->po2->pos_back.y = 859;
    if (var->po->pos_mouse.x >= 680 && var->po->pos_mouse.x <= 1240 &&
        var->po->pos_mouse.y >= 859 && var->po->pos_mouse.y <= 1023)
        var->po2->pos_back.y = 864;
    sfSprite_setPosition(var->spr->spr_back, var->po2->pos_back);
    sfRenderWindow_drawSprite(wd, var->spr->spr_back, NULL);
    if (var->po2->pos_back.y == 864 && var->va2->clic == 1)
        var->va2->res = 0;
}

void btn_res4(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_res4, var->tex->tex_res4, sfTrue);
    var->po3->pos_res4.y = 659;
    if (var->po->pos_mouse.x >= 480 && var->po->pos_mouse.x <= 1440 &&
        var->po->pos_mouse.y >= 659 && var->po->pos_mouse.y <= 823)
        var->po3->pos_res4.y = 664;
    sfSprite_setPosition(var->spr->spr_res4, var->po3->pos_res4);
    sfRenderWindow_drawSprite(wd, var->spr->spr_res4, NULL);
    if (var->po3->pos_res4.y == 664 && var->va2->clic == 1)
        var->va2->res1 = 4;
}

void btn_back5(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_back, var->tex->tex_back, sfTrue);
    var->po2->pos_back.y = 859;
    if (var->po->pos_mouse.x >= 680 && var->po->pos_mouse.x <= 1240 &&
        var->po->pos_mouse.y >= 859 && var->po->pos_mouse.y <= 1023)
        var->po2->pos_back.y = 864;
    sfSprite_setPosition(var->spr->spr_back, var->po2->pos_back);
    sfRenderWindow_drawSprite(wd, var->spr->spr_back, NULL);
    if (var->po2->pos_back.y == 864 && var->va2->clic == 1)
        var->va2->audio = 0;
}

void btn_back3(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_back, var->tex->tex_back, sfTrue);
    var->po2->pos_back.y = 659;
    if (var->po->pos_mouse.x >= 680 && var->po->pos_mouse.x <= 1240 &&
        var->po->pos_mouse.y >= 659 && var->po->pos_mouse.y <= 923)
        var->po2->pos_back.y = 664;
    sfSprite_setPosition(var->spr->spr_back, var->po2->pos_back);
    sfRenderWindow_drawSprite(wd, var->spr->spr_back, NULL);
    if (var->po2->pos_back.y == 664 && var->va2->clic == 1)
        var->va2->frame = 0;
}