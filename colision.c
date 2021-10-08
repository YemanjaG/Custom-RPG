/*
** EPITECH PROJECT, 2019
** init_all my_rpg
** File description:
** all initialisations file for my_rpg
*/

#include "struct.h"

int col_up(sfRenderWindow *wd, t_var *var)
{
    sfColor temp;
    if (var->va2->map != 0){
        var->re2->re_town.left = 0;
        var->re2->re_town.top = 0;
    }
    int x = var->re2->re_town.left + var->po4->pos_plr.x + 50;
    int y = var->re2->re_town.top + var->po4->pos_plr.y + 106;
    temp = sfImage_getPixel(var->tex3->img_tcol, x, y - 8);
    if (temp.a != 0)
        return 1;
    temp = sfImage_getPixel(var->tex3->img_tcol, x + 35, y - 8);
    if (temp.a != 0)
        return 1;
    temp = sfImage_getPixel(var->tex3->img_tcol, x + 70, y - 8);
    if (temp.a != 0)
        return 1;
    return 0;
}

int col_down(sfRenderWindow *wd, t_var *var)
{
    sfColor temp;
    if (var->va2->map != 0){
        var->re2->re_town.left = 0;
        var->re2->re_town.top = 0;
    }
    int x = var->re2->re_town.left + var->po4->pos_plr.x + 50;
    int y = var->re2->re_town.top + var->po4->pos_plr.y + 137;
    temp = sfImage_getPixel(var->tex3->img_tcol, x, y + 8);
    if (temp.a != 0)
        return 1;
    temp = sfImage_getPixel(var->tex3->img_tcol, x + 35, y + 8);
    if (temp.a != 0)
        return 1;
    temp = sfImage_getPixel(var->tex3->img_tcol, x + 70, y + 8);
    if (temp.a != 0)
        return 1;
    return 0;
}

int col_right(sfRenderWindow *wd, t_var *var)
{
    sfColor temp;
    if (var->va2->map != 0){
        var->re2->re_town.left = 0;
        var->re2->re_town.top = 0;
    }
    int x = var->re2->re_town.left + var->po4->pos_plr.x + 120;
    int y = var->re2->re_town.top + var->po4->pos_plr.y + 106;
    temp = sfImage_getPixel(var->tex3->img_tcol, x + 8, y);
    if (temp.a != 0)
        return 1;
    temp = sfImage_getPixel(var->tex3->img_tcol, x + 8, y + 15);
    if (temp.a != 0)
        return 1;
    temp = sfImage_getPixel(var->tex3->img_tcol, x + 8, y + 31);
    if (temp.a != 0)
        return 1;
    return 0;
}

int col_left(sfRenderWindow *wd, t_var *var)
{
    sfColor temp;
    if (var->va2->map != 0){
        var->re2->re_town.left = 0;
        var->re2->re_town.top = 0;
    }
    int x = var->re2->re_town.left + var->po4->pos_plr.x + 50;
    int y = var->re2->re_town.top + var->po4->pos_plr.y + 106;
    temp = sfImage_getPixel(var->tex3->img_tcol, x - 8, y);
    if (temp.a != 0)
        return 1;
    temp = sfImage_getPixel(var->tex3->img_tcol, x - 8, y + 15);
    if (temp.a != 0)
        return 1;
    temp = sfImage_getPixel(var->tex3->img_tcol, x - 8, y + 31);
    if (temp.a != 0)
        return 1;
    return 0;
}