/*
** EPITECH PROJECT, 2019
** game.c my_rpg
** File description:
** game file for my_rpg
*/

#include "struct.h"

void draw_player(sfRenderWindow *wd, t_var *var)
{
    if (var->va3->armor == 1){
        draw_player2(wd, var);
    } else {
        sfSprite_setTexture(var->spr2->spr_plr, var->tex2->tex_plr, sfTrue);
        sfSprite_setPosition(var->spr2->spr_plr, var->po4->pos_plr);
        if (var->va2->key_z == 0 && var->va2->key_s == 0 && var->va2->key_q == 0
        && var->va2->key_d == 0 && var->va2->key_a == 0
        && var->va2->key_e == 0){
            draw_playerbis(wd, var);
        } else
            draw_player_ext(wd, var);
        sfSprite_setTextureRect(var->spr2->spr_plr, var->re->rect_plr);
        sfRenderWindow_drawSprite(wd, var->spr2->spr_plr, NULL);
    }
}

void change_map(sfRenderWindow *wd, t_var *var)
{
    if (var->po4->pos_plr.x > 1785){
        var->va2->map = 1;
        var->tex3->img_tcol = sfImage_createFromFile("./src/bossmap_col.png");
        var->po4->pos_plr.y = 480;
        var->po4->pos_plr.x = -30;
    } else if (var->po4->pos_plr.y <= 70 && var->po4->pos_plr.x > 580 &&
    var->po4->pos_plr.x < 830 && var->va2->key_e == 1 && var->re->rect_plr.left
    == 176 * 14){
        var->va2->map = 2;
        var->tex3->img_tcol = sfImage_createFromFile("./src/sagemap_col.png");
        var->po4->pos_plr.y = 900;
        var->po4->pos_plr.x = 1100;
    }
}

void draw_map1(sfRenderWindow *wd, t_var *var)
{
    sfSprite_setTexture(var->spr3->spr_town, var->tex3->tex_town, sfTrue);
    sfSprite_setPosition(var->spr3->spr_town, var->po5->pos_town);
    sfSprite_setTextureRect(var->spr3->spr_town, var->re2->re_town);
    sfRenderWindow_drawSprite(wd, var->spr3->spr_town, NULL);
    sfSprite_setTexture(var->spr3->spr_thigh, var->tex3->tex_thigh, sfTrue);
    sfSprite_setPosition(var->spr3->spr_thigh, var->po5->pos_town);
    sfSprite_setTextureRect(var->spr3->spr_thigh, var->re2->re_town);
    draw_mob(wd, var);
    kill_mob_time(wd, var);
    draw_npc(wd, var);
    draw_player(wd, var);
    sfRenderWindow_drawSprite(wd, var->spr3->spr_thigh, NULL);
    interact(wd, var);
    change_map(wd, var);
}

void draw_map2(sfRenderWindow *wd, t_var *var)
{
    sfSprite_setTexture(var->spr3->spr_bm, var->tex3->tex_bm, sfTrue);
    sfSprite_setPosition(var->spr3->spr_bm, (sfVector2f){0, 0});
    sfRenderWindow_drawSprite(wd, var->spr3->spr_bm, NULL);
    sfSprite_setTexture(var->spr3->spr_bmhigh, var->tex3->tex_bmhigh, sfTrue);
    sfSprite_setPosition(var->spr3->spr_bmhigh, (sfVector2f){0, 0});
    if (var->va3->liveboss == 1){
        draw_boss(wd, var);
    } else {
        sfSprite_setTexture(var->spr4->spr_deadb, var->tex4->tex_deadb, sfTrue);
        sfSprite_setPosition(var->spr4->spr_deadb, (sfVector2f){1400, 200});
        sfRenderWindow_drawSprite(wd, var->spr4->spr_deadb, NULL);
    }
    draw_player(wd, var);
    sfRenderWindow_drawSprite(wd, var->spr3->spr_bmhigh, NULL);
    interact_boss(wd, var);
}

void draw_map3(sfRenderWindow *wd, t_var *var)
{
    sfSprite_setTexture(var->spr2->spr_mmap, var->tex2->tex_mmap, sfTrue);
    sfSprite_setPosition(var->spr2->spr_mmap, (sfVector2f){0, 0});
    sfRenderWindow_drawSprite(wd, var->spr2->spr_mmap, NULL);
    sfSprite_setTexture(var->spr2->spr_mmhigh, var->tex2->tex_mmhigh, sfTrue);
    sfSprite_setPosition(var->spr2->spr_mmhigh, (sfVector2f){0, 0});
    if (var->va3->livemage == 1){
        draw_mage(wd, var);
    } else {
        sfSprite_setTexture(var->spr4->spr_chest, var->tex4->tex_chest, sfTrue);
        sfSprite_setTextureRect(var->spr4->spr_chest, var->re6->re_chest);
        sfSprite_setPosition(var->spr4->spr_chest, (sfVector2f){950, 200});
        sfRenderWindow_drawSprite(wd, var->spr4->spr_chest, NULL);
    }
    draw_player(wd, var);
    sfRenderWindow_drawSprite(wd, var->spr2->spr_mmhigh, NULL);
    interact_mage(wd, var);
}

