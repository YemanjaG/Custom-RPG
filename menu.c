/*
** EPITECH PROJECT, 2019
** menu my_rpg
** File description:
** menu file for my_rpg
*/

#include "struct.h"

void btn_quit(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_quit, var->tex->tex_quit, sfTrue);
    var->po2->pos_quit.y = 659;
    if (var->po->pos_mouse.x >= 464 && var->po->pos_mouse.x <= 1456 &&
        var->po->pos_mouse.y >= 659 && var->po->pos_mouse.y <= 823)
        var->po2->pos_quit.y = 664;
    sfSprite_setPosition(var->spr->spr_quit, var->po2->pos_quit);
    sfRenderWindow_drawSprite(wd, var->spr->spr_quit, NULL);
    if (var->po2->pos_quit.y == 664 && var->va2->clic == 1) {
        if (var->acc->type != 0)
            save(var);
        sfRenderWindow_close(wd);
    }
}

void btn_opt(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_opt, var->tex->tex_opt, sfTrue);
    var->po2->pos_opt.y = 459;
    if (var->po->pos_mouse.x >= 541 && var->po->pos_mouse.x <= 1380 &&
        var->po->pos_mouse.y >= 459 && var->po->pos_mouse.y <= 623)
        var->po2->pos_opt.y = 464;
    sfSprite_setPosition(var->spr->spr_opt, var->po2->pos_opt);
    sfRenderWindow_drawSprite(wd, var->spr->spr_opt, NULL);
    if (var->po2->pos_opt.y == 464 && var->va2->clic == 1)
        var->va2->opt = 1;
}

void btn_start(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr->spr_play, var->tex->tex_play, sfTrue);
    var->po2->pos_play.y = 259;
    if (var->po->pos_mouse.x >= 466 && var->po->pos_mouse.x <= 1454 &&
        var->po->pos_mouse.y >= 259 && var->po->pos_mouse.y <= 423)
        var->po2->pos_play.y = 264;
    sfSprite_setPosition(var->spr->spr_play, var->po2->pos_play);
    sfRenderWindow_drawSprite(wd, var->spr->spr_play, NULL);
    if (var->po2->pos_play.y == 264 && var->va2->clic == 1)
        var->va2->start = 1;
}

void menu(sfRenderWindow* wd, t_var *var)
{
    var->po->pos_mouse = sfMouse_getPositionRenderWindow(wd);
    sfSprite_setTexture(var->spr->spr_menu, var->tex->tex_menu, sfTrue);
    sfRenderWindow_drawSprite(wd, var->spr->spr_menu, NULL);
    btn_start(wd, var);
    btn_opt(wd, var);
    btn_quit(wd, var);
}