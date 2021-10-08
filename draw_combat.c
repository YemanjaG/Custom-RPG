/*
** EPITECH PROJECT, 2019
** draw_fight.c my_rpg
** File description:
** draw_fight file for my_rpg
*/

#include "struct.h"

void set_texnposf1(sfRenderWindow *wd, t_var *var)
{
    sfSprite_setTexture(var->spr4->spr_bigplr, var->tex4->tex_bigplr, sfTrue);
    sfSprite_setPosition(var->spr4->spr_bigplr, (sfVector2f){0, 220});
    sfSprite_setTextureRect(var->spr4->spr_bigplr, var->re4->rect_bigp);
    sfSprite_setTexture(var->spr4->spr_bigboss, var->tex4->tex_bigboss, sfTrue);
    sfSprite_setPosition(var->spr4->spr_bigboss, (sfVector2f){1195, -15});
    sfSprite_setTextureRect(var->spr4->spr_bigboss, var->re4->rect_bigb);
    var->re4->rect_bigb.left = 655;
    var->re4->rect_bigp.left = 530;
    sfSprite_setTexture(var->spr3->spr_bgcbt, var->tex3->tex_bgcbt, sfTrue);
    sfSprite_setPosition(var->spr3->spr_bgcbt, (sfVector2f){0, 0});
    sfSprite_setTexture(var->spr3->spr_bhpbare, var->tex3->tex_hpbare, sfTrue);
    sfSprite_setPosition(var->spr3->spr_bhpbare, (sfVector2f){1620, 0});
    sfSprite_setTexture(var->spr3->spr_bhpbarf, var->tex3->tex_hpbarf, sfTrue);
    sfSprite_setPosition(var->spr3->spr_bhpbarf, (sfVector2f){1620, 0});
    sfSprite_setTextureRect(var->spr3->spr_bhpbarf, var->re4->rect_bhpf);
    sfSprite_setTexture(var->spr3->spr_phpbare, var->tex3->tex_hpbare, sfTrue);
    sfSprite_setPosition(var->spr3->spr_phpbare, (sfVector2f){0, 0});
    sfSprite_setTexture(var->spr3->spr_phpbarf, var->tex3->tex_hpbarf, sfTrue);
    sfSprite_setPosition(var->spr3->spr_phpbarf, (sfVector2f){0, 0});
    sfSprite_setTextureRect(var->spr3->spr_phpbarf, var->re4->rect_phpf);
}

void set_texnposf2(sfRenderWindow *wd, t_var *var)
{
    sfSprite_setTexture(var->spr4->spr_bigplr, var->tex4->tex_bigplr, sfTrue);
    sfSprite_setPosition(var->spr4->spr_bigplr, (sfVector2f){1250, 150});
    sfSprite_setTextureRect(var->spr4->spr_bigplr, var->re4->rect_bigp);
    sfSprite_setTexture(var->spr4->spr_bigboss, var->tex4->tex_bigboss, sfTrue);
    sfSprite_setPosition(var->spr4->spr_bigboss, (sfVector2f){200, 20});
    sfSprite_setTextureRect(var->spr4->spr_bigboss, var->re4->rect_bigb);
    var->re4->rect_bigb.left = 0;
    var->re4->rect_bigp.left = -20;
    sfSprite_setTexture(var->spr4->spr_cbbg2, var->tex4->tex_cbbg2, sfTrue);
    sfSprite_setPosition(var->spr4->spr_cbbg2, (sfVector2f){0, 0});
    sfSprite_setTexture(var->spr3->spr_bhpbare, var->tex3->tex_hpbare, sfTrue);
    sfSprite_setPosition(var->spr3->spr_bhpbare, (sfVector2f){0, 0});
    sfSprite_setTexture(var->spr3->spr_bhpbarf, var->tex3->tex_hpbarf, sfTrue);
    sfSprite_setPosition(var->spr3->spr_bhpbarf, (sfVector2f){0, 0});
    sfSprite_setTextureRect(var->spr3->spr_bhpbarf, var->re4->rect_bhpf);
    sfSprite_setTexture(var->spr3->spr_phpbare, var->tex3->tex_hpbare, sfTrue);
    sfSprite_setPosition(var->spr3->spr_phpbare, (sfVector2f){1620, 0});
    sfSprite_setTexture(var->spr3->spr_phpbarf, var->tex3->tex_hpbarf, sfTrue);
    sfSprite_setPosition(var->spr3->spr_phpbarf, (sfVector2f){1620, 0});
    sfSprite_setTextureRect(var->spr3->spr_phpbarf, var->re4->rect_phpf);
}

void set_texnposg(sfRenderWindow *wd, t_var *var)
{
    sfSprite_setTexture(var->spr3->spr_apbar, var->tex3->tex_apbar, sfTrue);
    sfSprite_setPosition(var->spr3->spr_apbar, (sfVector2f){888, 776});
    sfSprite_setTextureRect(var->spr3->spr_apbar, var->re3->rect_ap);
    sfSprite_setTexture(var->spr3->spr_cbmenu, var->tex3->tex_cbmenu, sfTrue);
    sfSprite_setPosition(var->spr3->spr_cbmenu, (sfVector2f){800, 817});
    sfSprite_setTextureRect(var->spr3->spr_cbmenu, var->re3->rect_cbmenu);
    sfSprite_setTexture(var->spr3->spr_atqmenu, var->tex3->tex_atqmenu, sfTrue);
    sfSprite_setPosition(var->spr3->spr_atqmenu, (sfVector2f){800, 817});
    sfSprite_setTextureRect(var->spr3->spr_atqmenu, var->re3->rect_atqmenu);
}

void setup_fight(sfRenderWindow *wd, t_var *var)
{
    if (var->va->fight == 1){
        set_texnposf1(wd, var);
        sfRenderWindow_drawSprite(wd, var->spr3->spr_bgcbt, NULL);
    }
    if (var->va->fight == 2){
        set_texnposf2(wd, var);
        sfRenderWindow_drawSprite(wd, var->spr4->spr_cbbg2, NULL);
    }
    set_texnposg(wd, var);
}

void draw_fight(sfRenderWindow *wd, t_var *var)
{
    setup_fight(wd, var);
    if (var->va->amenu == 1){
        sfRenderWindow_drawSprite(wd, var->spr3->spr_atqmenu, NULL);
    } else {
        sfRenderWindow_drawSprite(wd, var->spr3->spr_cbmenu, NULL);
    }
    sfRenderWindow_drawSprite(wd, var->spr4->spr_bigboss, NULL);
    sfRenderWindow_drawSprite(wd, var->spr4->spr_bigplr, NULL);
    sfRenderWindow_drawSprite(wd, var->spr3->spr_apbar, NULL);
    sfRenderWindow_drawSprite(wd, var->spr3->spr_bhpbare, NULL);
    sfRenderWindow_drawSprite(wd, var->spr3->spr_phpbare, NULL);
    sfRenderWindow_drawSprite(wd, var->spr3->spr_bhpbarf, NULL);
    sfRenderWindow_drawSprite(wd, var->spr3->spr_phpbarf, NULL);
}