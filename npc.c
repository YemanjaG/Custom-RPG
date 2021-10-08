/*
** EPITECH PROJECT, 2019
** npc.c my_rpg
** File description:
** npc file for my_rpg
*/

#include "struct.h"

void draw_blacksmith(sfRenderWindow* wd, t_var* var)
{
    sfSprite_setTexture(var->spr3->spr_blk, var->tex3->tex_blk, sfTrue);
    sfSprite_setPosition(var->spr3->spr_blk, var->po5->pos_blk);
    var->po5->pos_blk = move_mob(wd, var, var->po5->pos_blk);
    sfSprite_setTextureRect(var->spr3->spr_blk, var->re->rect_npc);
    sfRenderWindow_drawSprite(wd, var->spr3->spr_blk, NULL);
}

void draw_quester(sfRenderWindow* wd, t_var* var)
{
    sfSprite_setTexture(var->spr3->spr_qst, var->tex3->tex_qst, sfTrue);
    sfSprite_setPosition(var->spr3->spr_qst, var->po4->pos_qst);
    var->po4->pos_qst = move_mob(wd, var, var->po4->pos_qst);
    sfSprite_setTextureRect(var->spr3->spr_qst, var->re->rect_npc);
    sfRenderWindow_drawSprite(wd, var->spr3->spr_qst, NULL);
}

void draw_shop(sfRenderWindow* wd, t_var* var)
{
    sfSprite_setTexture(var->spr3->spr_shp, var->tex3->tex_shp, sfTrue);
    sfSprite_setPosition(var->spr3->spr_shp, var->po5->pos_shp);
    var->po5->pos_shp = move_mob(wd, var, var->po5->pos_shp);
    sfSprite_setTextureRect(var->spr3->spr_shp, var->re->rect_npc);
    sfRenderWindow_drawSprite(wd, var->spr3->spr_shp, NULL);
}

void draw_welcome(sfRenderWindow* wd, t_var* var)
{
    sfSprite_setTexture(var->spr4->spr_wlc, var->tex3->tex_wlc, sfTrue);
    sfSprite_setPosition(var->spr4->spr_wlc, var->po5->pos_wlc);
    var->po5->pos_wlc = move_mob(wd, var, var->po5->pos_wlc);
    sfSprite_setTextureRect(var->spr4->spr_wlc, var->re->rect_npc);
    sfRenderWindow_drawSprite(wd, var->spr4->spr_wlc, NULL);
}

void draw_npc(sfRenderWindow* wd, t_var* var)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(var->cl->cl_npc)) > 30){
        var->re->rect_npc.left += 110;
        if (var->re->rect_npc.left == 30 * 110)
            var->re->rect_npc.left = 0;
        sfClock_restart(var->cl->cl_npc);
    }
    draw_blacksmith(wd, var);
    draw_quester(wd, var);
    draw_shop(wd, var);
    draw_welcome(wd, var);
}