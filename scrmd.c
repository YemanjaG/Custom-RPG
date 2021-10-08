/*
** EPITECH PROJECT, 2019
** scrmd my_rpg
** File description:
** button screen mode file for my_rpg
*/

#include "struct.h"

void btn_back4(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_back, var->tex->tex_back, sfTrue);
    var->po2->pos_back.y = 459;
    if (var->po->pos_mouse.x >= 737 && var->po->pos_mouse.x <= 1183 &&
        var->po->pos_mouse.y >= 459 && var->po->pos_mouse.y <= 623)
        var->po2->pos_back.y = 464;
    sfSprite_setPosition(var->spr->spr_back, var->po2->pos_back);
    sfRenderWindow_drawSprite(wd, var->spr->spr_back, NULL);
    if (var->po2->pos_back.y == 464 && var->va2->clic == 1)
        var->va2->scrmd = 0;
}

void btn_wnd(sfRenderWindow* wd, t_var *var, sfVideoMode mode)
{
    sfSprite_setTexture(var->spr2->spr_wnd, var->tex2->tex_wnd, sfTrue);
    var->po4->pos_wnd.y = 259;
    if (var->po->pos_mouse.x >= 440 && var->po->pos_mouse.x <= 1480 &&
        var->po->pos_mouse.y >= 259 && var->po->pos_mouse.y <= 423)
        var->po4->pos_wnd.y = 264;
    sfSprite_setPosition(var->spr2->spr_wnd, var->po4->pos_wnd);
    sfRenderWindow_drawSprite(wd, var->spr2->spr_wnd, NULL);
    if (var->po4->pos_wnd.y == 264 && var->va2->clic == 1){
        if (var->va2->scrmode == 0){
            sfRenderWindow_destroy(wd);
            wd = sfRenderWindow_create(mode, "my_rpg", 7, NULL);
        }
        var->va2->scrmode = 1;
    }
}

void btn_fscr(sfRenderWindow* wd, t_var *var, sfVideoMode mode)
{
    sfSprite_setTexture(var->spr->spr_fscr, var->tex->tex_fscr, sfTrue);
    var->po3->pos_fscr.y = 59;
    if (var->po->pos_mouse.x >= 423 && var->po->pos_mouse.x <= 1497 &&
        var->po->pos_mouse.y >= 59 && var->po->pos_mouse.y <= 223)
        var->po3->pos_fscr.y = 64;
    sfSprite_setPosition(var->spr->spr_fscr, var->po3->pos_fscr);
    sfRenderWindow_drawSprite(wd, var->spr->spr_fscr, NULL);
    if (var->po3->pos_fscr.y == 64 && var->va2->clic == 1){
        if (var->va2->scrmode == 1){
            sfRenderWindow_destroy(wd);
            wd = sfRenderWindow_create(mode, "my_rpg", 8, NULL);
        }
        var->va2->scrmode = 0;
    }
}

void menu_scrmd(sfRenderWindow* wd, t_var *var, sfVideoMode mode)
{
    var->po->pos_mouse = sfMouse_getPositionRenderWindow(wd);
    sfSprite_setTexture(var->spr->spr_menu, var->tex->tex_menu, sfTrue);
    sfRenderWindow_drawSprite(wd, var->spr->spr_menu, NULL);
    btn_fscr(wd, var, mode);
    btn_wnd(wd, var, mode);
    btn_back4(wd, var);
}