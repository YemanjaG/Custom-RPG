/*
** EPITECH PROJECT, 2019
** resolution my_rpg
** File description:
** button resolution file for my_rpg
*/

#include "struct.h"

void btn_res3(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_res3, var->tex->tex_res3, sfTrue);
    var->po3->pos_res3.y = 459;
    if (var->po->pos_mouse.x >= 435 && var->po->pos_mouse.x <= 1485 &&
        var->po->pos_mouse.y >= 459 && var->po->pos_mouse.y <= 623)
        var->po3->pos_res3.y = 464;
    sfSprite_setPosition(var->spr->spr_res3, var->po3->pos_res3);
    sfRenderWindow_drawSprite(wd, var->spr->spr_res3, NULL);
    if (var->po3->pos_res3.y == 464 && var->va2->clic == 1)
        var->va2->res1 = 3;
}

void btn_res2(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_res2, var->tex->tex_res2, sfTrue);
    var->po3->pos_res2.y = 259;
    if (var->po->pos_mouse.x >= 435 && var->po->pos_mouse.x <= 1485 &&
        var->po->pos_mouse.y >= 259 && var->po->pos_mouse.y <= 423)
        var->po3->pos_res2.y = 264;
    sfSprite_setPosition(var->spr->spr_res2, var->po3->pos_res2);
    sfRenderWindow_drawSprite(wd, var->spr->spr_res2, NULL);
    if (var->po3->pos_res2.y == 264 && var->va2->clic == 1)
        var->va2->res1 = 2;
}

void btn_res1(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_res1, var->tex->tex_res1, sfTrue);
    var->po3->pos_res1.y = 59;
    if (var->po->pos_mouse.x >= 435 && var->po->pos_mouse.x <= 1485 &&
        var->po->pos_mouse.y >= 59 && var->po->pos_mouse.y <= 223)
        var->po3->pos_res1.y = 64;
    sfSprite_setPosition(var->spr->spr_res1, var->po3->pos_res1);
    sfRenderWindow_drawSprite(wd, var->spr->spr_res1, NULL);
    if (var->po3->pos_res1.y == 64 && var->va2->clic == 1)
        var->va2->res1 = 1;
}

void change_res(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr2->spr_slct, var->tex2->tex_slct, sfTrue);
    if (var->va2->res1 == 1){
        var->po4->pos_slct.x = 365;
        var->po4->pos_slct.y = 114;
        var->va2->reso.x = 1920;
        var->va2->reso.y = 1080;
    } else if (var->va2->res1 == 2){
        var->po4->pos_slct.x = 365;
        var->po4->pos_slct.y = 314;
        var->va2->reso.x = 1600;
        var->va2->reso.y = 1200;
    } else
        change_res2(wd, var);
    sfSprite_setPosition(var->spr2->spr_slct, var->po4->pos_slct);
    sfRenderWindow_drawSprite(wd, var->spr2->spr_slct, NULL);
}

void menu_res(sfRenderWindow* wd, t_var *var)
{
    var->po->pos_mouse = sfMouse_getPositionRenderWindow(wd);
    sfSprite_setTexture(var->spr->spr_menu, var->tex->tex_menu, sfTrue);
    sfRenderWindow_drawSprite(wd, var->spr->spr_menu, NULL);
    btn_res1(wd, var);
    btn_res2(wd, var);
    btn_res3(wd, var);
    btn_res4(wd, var);
    btn_back2(wd, var);
    change_res(wd, var);
}