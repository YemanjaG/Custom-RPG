/*
** EPITECH PROJECT, 2019
** interactbis.c
** File description:
** interaction bis npc fcts for my_rpg
*/

#include "struct.h"

void interact_boss(sfRenderWindow* wd, t_var* var)
{
    if (var->va3->liveboss == 0)
        return;
    sfSprite_setTexture(var->spr2->spr_inter, var->tex2->tex_inter, sfTrue);
    sfSprite_setPosition(var->spr2->spr_inter, (sfVector2f){0, 0});
    if (var->po4->pos_plr.x >= 1275 && var->po4->pos_plr.x <= 1555 && var->po4->
    pos_plr.y >= 60 && var->po4->pos_plr.y <= 360){
        sfRenderWindow_drawSprite(wd, var->spr2->spr_inter, NULL);
        var->dia->whois = 6;
    }
    else if (var->dia->whois == 6)
        var->dia->whois = 0;
    if (var->po4->pos_plr.x < -40){
        var->va2->map = 0;
        var->tex3->img_tcol = sfImage_createFromFile("./src/collision.png");
        var->po4->pos_plr.y = 362;
        var->po4->pos_plr.x = 1772;
        var->re2->re_town.left = 2560;
        var->re2->re_town.top = 0;
    }
}

void interact_mage(sfRenderWindow* wd, t_var* var)
{
    sfSprite_setTexture(var->spr2->spr_inter, var->tex2->tex_inter, sfTrue);
    sfSprite_setPosition(var->spr2->spr_inter, (sfVector2f){0, 0});
    if (var->po4->pos_plr.x >= 825 && var->po4->pos_plr.x <= 1005 && var->po4->
    pos_plr.y >= 60 && var->po4->pos_plr.y <= 260){
        sfRenderWindow_drawSprite(wd, var->spr2->spr_inter, NULL);
        var->dia->whois = 5;
    }
    else if (var->dia->whois == 5)
        var->dia->whois = 0;
    if (var->po4->pos_plr.y > 935){
        var->va2->map = 0;
        var->tex3->img_tcol = sfImage_createFromFile("./src/collision.png");
        var->po4->pos_plr.y = 50;
        var->po4->pos_plr.x = 710;
        var->re2->re_town.left = 0;
        var->re2->re_town.top = 0;
    }
}