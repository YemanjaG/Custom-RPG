/*
** EPITECH PROJECT, 2019
** frame rate my_rpg
** File description:
** button frame rate file for my_rpg
*/

#include "struct.h"

void btn_frame3(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_frame144, var->tex->tex_frame144, sfTrue);
    var->po3->pos_144.y = 459;
    if (var->po->pos_mouse.x >= 737 && var->po->pos_mouse.x <= 1183 &&
        var->po->pos_mouse.y >= 459 && var->po->pos_mouse.y <= 623)
        var->po3->pos_144.y = 464;
    sfSprite_setPosition(var->spr->spr_frame144, var->po3->pos_144);
    sfRenderWindow_drawSprite(wd, var->spr->spr_frame144, NULL);
    if (var->po3->pos_144.y == 464 && var->va2->clic == 1)
        var->va2->frame1 = 3;
}

void btn_frame2(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_frame60, var->tex->tex_frame60, sfTrue);
    var->po3->pos_60.y = 259;
    if (var->po->pos_mouse.x >= 781 && var->po->pos_mouse.x <= 1139 &&
        var->po->pos_mouse.y >= 259 && var->po->pos_mouse.y <= 423)
        var->po3->pos_60.y = 264;
    sfSprite_setPosition(var->spr->spr_frame60, var->po3->pos_60);
    sfRenderWindow_drawSprite(wd, var->spr->spr_frame60, NULL);
    if (var->po3->pos_60.y == 264 && var->va2->clic == 1)
        var->va2->frame1 = 2;
}

void btn_frame1(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_frame30, var->tex->tex_frame30, sfTrue);
    var->po3->pos_30.y = 59;
    if (var->po->pos_mouse.x >= 781 && var->po->pos_mouse.x <= 1138 &&
        var->po->pos_mouse.y >= 59 && var->po->pos_mouse.y <= 223)
        var->po3->pos_30.y = 64;
    sfSprite_setPosition(var->spr->spr_frame30, var->po3->pos_30);
    sfRenderWindow_drawSprite(wd, var->spr->spr_frame30, NULL);
    if (var->po3->pos_30.y == 64 && var->va2->clic == 1)
        var->va2->frame1 = 1;
}

void change_frmrt(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr2->spr_slct, var->tex2->tex_slct, sfTrue);
    if (var->va2->frame1 == 1){
        var->po4->pos_slct.x = 721;
        var->po4->pos_slct.y = 114;
        var->va2->frmrt = 30;
    } else if (var->va2->frame1 == 2){
        var->po4->pos_slct.x = 721;
        var->po4->pos_slct.y = 314;
        var->va2->frmrt = 60;
    } else {
        var->po4->pos_slct.x = 667;
        var->po4->pos_slct.y = 514;
        var->va2->frmrt = 144;
    }
    sfSprite_setPosition(var->spr2->spr_slct, var->po4->pos_slct);
    sfRenderWindow_drawSprite(wd, var->spr2->spr_slct, NULL);
}

void menu_frame(sfRenderWindow* wd, t_var *var)
{
    var->po->pos_mouse = sfMouse_getPositionRenderWindow(wd);
    sfSprite_setTexture(var->spr->spr_menu, var->tex->tex_menu, sfTrue);
    sfRenderWindow_drawSprite(wd, var->spr->spr_menu, NULL);
    btn_frame1(wd, var);
    btn_frame2(wd, var);
    btn_frame3(wd, var);
    btn_back3(wd, var);
    change_frmrt(wd, var);
}