/*
** EPITECH PROJECT, 2019
** menu opt my_rpg
** File description:
** menu option file for my_rpg
*/

#include "struct.h"

void btn_res(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_res, var->tex->tex_res, sfTrue);
    var->po3->pos_res.y = 659;
    if (var->po->pos_mouse.x >= 404 && var->po->pos_mouse.x <= 1516 &&
        var->po->pos_mouse.y >= 659 && var->po->pos_mouse.y <= 823)
        var->po3->pos_res.y = 664;
    sfSprite_setPosition(var->spr->spr_res, var->po3->pos_res);
    sfRenderWindow_drawSprite(wd, var->spr->spr_res, NULL);
    if (var->po3->pos_res.y == 664 && var->va2->clic == 1)
        var->va2->res = 1;
}

void btn_scrmd(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_scrmd, var->tex->tex_scrmd, sfTrue);
    var->po2->pos_scrmd.y = 459;
    if (var->po->pos_mouse.x >= 364 && var->po->pos_mouse.x <= 1556 &&
        var->po->pos_mouse.y >= 459 && var->po->pos_mouse.y <= 623)
        var->po2->pos_scrmd.y = 464;
    sfSprite_setPosition(var->spr->spr_scrmd, var->po2->pos_scrmd);
    sfRenderWindow_drawSprite(wd, var->spr->spr_scrmd, NULL);
    if (var->po2->pos_scrmd.y == 464 && var->va2->clic == 1)
        var->va2->scrmd = 1;
}

void btn_frame(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_frame, var->tex->tex_frame, sfTrue);
    var->po2->pos_frame.y = 259;
    if (var->po->pos_mouse.x >= 423 && var->po->pos_mouse.x <= 1497 &&
        var->po->pos_mouse.y >= 259 && var->po->pos_mouse.y <= 423)
        var->po2->pos_frame.y = 264;
    sfSprite_setPosition(var->spr->spr_frame, var->po2->pos_frame);
    sfRenderWindow_drawSprite(wd, var->spr->spr_frame, NULL);
    if (var->po2->pos_frame.y == 264 && var->va2->clic == 1)
        var->va2->frame = 1;
}

void btn_audio(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_audio, var->tex->tex_audio, sfTrue);
    var->po2->pos_audio.y = 59;
    if (var->po->pos_mouse.x >= 587 && var->po->pos_mouse.x <= 1323 &&
        var->po->pos_mouse.y >= 59 && var->po->pos_mouse.y <= 223)
        var->po2->pos_audio.y = 64;
    sfSprite_setPosition(var->spr->spr_audio, var->po2->pos_audio);
    sfRenderWindow_drawSprite(wd, var->spr->spr_audio, NULL);
    if (var->po2->pos_audio.y == 64 && var->va2->clic == 1)
        var->va2->audio = 1;
}

void menu_opt(sfRenderWindow* wd, t_var *var)
{
    var->po->pos_mouse = sfMouse_getPositionRenderWindow(wd);
    sfSprite_setTexture(var->spr->spr_menu, var->tex->tex_menu, sfTrue);
    sfRenderWindow_drawSprite(wd, var->spr->spr_menu, NULL);
    btn_audio(wd, var);
    btn_frame(wd, var);
    btn_scrmd(wd, var);
    btn_res(wd, var);
    btn_back(wd, var);
}