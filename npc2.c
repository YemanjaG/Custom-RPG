/*
** EPITECH PROJECT, 2019
** npc2.c my_rpg
** File description:
** npc2 file for my_rpg
*/

#include "struct.h"

void draw_boss(sfRenderWindow* wd, t_var* var)
{
    sfSprite_setTexture(var->spr4->spr_boss, var->tex3->tex_boss, sfTrue);
    sfSprite_setPosition(var->spr4->spr_boss, (sfVector2f){1400, 200});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(var->cl->cl_boss)) > 50){
        var->re3->rect_boss.left += 200;
        if (var->re3->rect_boss.left == 18 * 200)
            var->re3->rect_boss.left = 0;
        sfClock_restart(var->cl->cl_boss);
    }
    sfSprite_setTextureRect(var->spr4->spr_boss, var->re3->rect_boss);
    sfRenderWindow_drawSprite(wd, var->spr4->spr_boss, NULL);
}

void draw_mage(sfRenderWindow* wd, t_var* var)
{
    sfSprite_setTexture(var->spr4->spr_sage, var->tex3->tex_sage, sfTrue);
    sfSprite_setPosition(var->spr4->spr_sage, (sfVector2f){950, 200});
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(var->cl->cl_npc)) > 50){
        var->re->rect_npc.left += 110;
        if (var->re->rect_npc.left == 30 * 110)
            var->re->rect_npc.left = 0;
        sfClock_restart(var->cl->cl_npc);
    }
    sfSprite_setTextureRect(var->spr4->spr_sage, var->re->rect_npc);
    sfRenderWindow_drawSprite(wd, var->spr4->spr_sage, NULL);
}

int rand_pos(int minimun, int maximum)
{
    return (rand() % (maximum - minimun + 1) + minimun);
}