/*
** EPITECH PROJECT, 2019
** audio my_rpg
** File description:
** audio modif file for my_rpg
*/

#include "struct.h"

void change_sound(sfRenderWindow* wd, t_var *var)
{
    if (var->po->pos_mouse.x >= 760 && var->po->pos_mouse.x <= 860 &&
        var->po->pos_mouse.y >= 259 && var->po->pos_mouse.y <= 359)
        var->po->pos_mns.y = 264;
    sfSprite_setTexture(var->spr2->spr_nbrs2, var->tex2->tex_nbrs, sfTrue);
    if (var->po->pos_mns.y == 264 && var->va2->clic == 1 &&
    var->re->rect_nbrs2.left != 0){
        var->va->vol_snd -= 10.0;
        var->re->rect_nbrs2.left -= 100;
    }
    sfSprite_setPosition(var->spr2->spr_nbrs2, var->po->pos_nbrs2);
    change_sound2(wd, var);
    if (var->po->pos_pls.y == 264 && var->va2->clic == 1 &&
    var->re->rect_nbrs2.left != 1000){
        var->va->vol_snd += 10.0;
        var->re->rect_nbrs2.left += 100;
    }
    sfRenderWindow_drawSprite(wd, var->spr2->spr_nbrs2, NULL);
}

void change_music(sfRenderWindow* wd, t_var *var)
{
    if (var->po->pos_mouse.x >= 760 && var->po->pos_mouse.x <= 860 &&
        var->po->pos_mouse.y >= 659 && var->po->pos_mouse.y <= 759)
        var->po->pos_mns2.y = 664;
    sfSprite_setTexture(var->spr2->spr_nbrs, var->tex2->tex_nbrs, sfTrue);
    if (var->po->pos_mns2.y == 664 && var->va2->clic == 1 &&
    var->re->rect_nbrs.left != 0){
        var->va->vol_msc -= 10.0;
        var->re->rect_nbrs.left -= 100;
    }
    sfSprite_setPosition(var->spr2->spr_nbrs, var->po->pos_nbrs);
    change_music2(wd, var);
    if (var->po->pos_pls2.y == 664 && var->va2->clic == 1 &&
    var->re->rect_nbrs.left != 1000){
        var->va->vol_msc += 10.0;
        var->re->rect_nbrs.left += 100;
    }
    sfRenderWindow_drawSprite(wd, var->spr2->spr_nbrs, NULL);
}

void btn_music(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr2->spr_msc, var->tex2->tex_msc, sfTrue);
    sfSprite_setPosition(var->spr2->spr_msc, var->po4->pos_msc);
    sfRenderWindow_drawSprite(wd, var->spr2->spr_msc, NULL);
    var->po->pos_pls2.y = 659;
    var->po->pos_mns2.y = 659;
    change_music(wd, var);
    sfSprite_setTexture(var->spr2->spr_pls2, var->tex2->tex_pls2, sfTrue);
    sfSprite_setPosition(var->spr2->spr_pls2, var->po->pos_pls2);
    sfRenderWindow_drawSprite(wd, var->spr2->spr_pls2, NULL);
    sfSprite_setTexture(var->spr2->spr_mns2, var->tex2->tex_mns2, sfTrue);
    sfSprite_setPosition(var->spr2->spr_mns2, var->po->pos_mns2);
    sfRenderWindow_drawSprite(wd, var->spr2->spr_mns2, NULL);
}

void btn_sound(sfRenderWindow* wd, t_var *var)
{
    sfSprite_setTexture(var->spr2->spr_snd, var->tex2->tex_snd, sfTrue);
    sfSprite_setPosition(var->spr2->spr_snd, var->po4->pos_snd);
    sfRenderWindow_drawSprite(wd, var->spr2->spr_snd, NULL);
    var->po->pos_pls.y = 259;
    var->po->pos_mns.y = 259;
    change_sound(wd, var);
    sfSprite_setTexture(var->spr2->spr_pls, var->tex2->tex_pls, sfTrue);
    sfSprite_setPosition(var->spr2->spr_pls, var->po->pos_pls);
    sfRenderWindow_drawSprite(wd, var->spr2->spr_pls, NULL);
    sfSprite_setTexture(var->spr2->spr_mns, var->tex2->tex_mns, sfTrue);
    sfSprite_setPosition(var->spr2->spr_mns, var->po->pos_mns);
    sfRenderWindow_drawSprite(wd, var->spr2->spr_mns, NULL);
}

void menu_audio(sfRenderWindow* wd, t_var *var)
{
    var->po->pos_mouse = sfMouse_getPositionRenderWindow(wd);
    sfSprite_setTexture(var->spr->spr_menu, var->tex->tex_menu, sfTrue);
    sfRenderWindow_drawSprite(wd, var->spr->spr_menu, NULL);
    btn_sound(wd, var);
    btn_music(wd, var);
    btn_back5(wd, var);
}