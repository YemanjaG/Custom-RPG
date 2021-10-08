/*
** EPITECH PROJECT, 2019
** interact.C
** File description:
** interaction npc fcts for my_rpg
*/

#include "struct.h"

void interact_qst(sfRenderWindow* wd, t_var* var)
{
    sfSprite_setTexture(var->spr2->spr_inter, var->tex2->tex_inter, sfTrue);
    sfSprite_setPosition(var->spr2->spr_inter, (sfVector2f){0, 0});
    if (var->po4->pos_plr.x >= var->po4->pos_qst.x - 125 && var->po4->pos_plr.x
    <= var->po4->pos_qst.x + 55 && var->re2->re_town.top == 0 && var->po4->
    pos_plr.y >= 50 && var->po4->pos_plr.y <= 270){
        sfRenderWindow_drawSprite(wd, var->spr2->spr_inter, NULL);
        var->dia->whois = 2;
    }
    else if (var->dia->whois == 2)
        var->dia->whois = 0;
}

void interact_shp(sfRenderWindow* wd, t_var* var)
{
    sfSprite_setTexture(var->spr2->spr_inter, var->tex2->tex_inter, sfTrue);
    sfSprite_setPosition(var->spr2->spr_inter, (sfVector2f){0, 0});
    if (var->po4->pos_plr.x >= var->po5->pos_shp.x - 125 && var->po4->pos_plr.x
    <= var->po5->pos_shp.x + 55 && var->re2->re_town.top >= 500 && var->re2->
    re_town.top <= 700){
        sfRenderWindow_drawSprite(wd, var->spr2->spr_inter, NULL);
        var->dia->whois = 3;
    }
    else if (var->dia->whois == 3)
        var->dia->whois = 0;
}

void interact_blk(sfRenderWindow* wd, t_var* var)
{
    sfSprite_setTexture(var->spr2->spr_inter, var->tex2->tex_inter, sfTrue);
    sfSprite_setPosition(var->spr2->spr_inter, (sfVector2f){0, 0});
    if (var->po4->pos_plr.x >= var->po5->pos_blk.x - 125 && var->po4->pos_plr.x
    <= var->po5->pos_blk.x + 55 && var->re2->re_town.top >= 1100 && var->re2->
    re_town.top <= 1300){
        sfRenderWindow_drawSprite(wd, var->spr2->spr_inter, NULL);
        var->dia->whois = 4;
    }
    else if (var->dia->whois == 4)
        var->dia->whois = 0;
}

void interact_wlc(sfRenderWindow* wd, t_var* var)
{
    sfSprite_setTexture(var->spr2->spr_inter, var->tex2->tex_inter, sfTrue);
    sfSprite_setPosition(var->spr2->spr_inter, (sfVector2f){0, 0});
    if (var->po4->pos_plr.x >= var->po5->pos_wlc.x - 125 && var->po4->pos_plr.x
    <= var->po5->pos_wlc.x + 55 && var->re2->re_town.top >= 3000 && var->re2->
    re_town.top <= 3200){
        sfRenderWindow_drawSprite(wd, var->spr2->spr_inter, NULL);
        var->dia->whois = 1;
    }
    else if (var->dia->whois == 1)
        var->dia->whois = 0;
}

void interact(sfRenderWindow* wd, t_var* var)
{
    interact_qst(wd, var);
    interact_shp(wd, var);
    interact_blk(wd, var);
    interact_wlc(wd, var);
}