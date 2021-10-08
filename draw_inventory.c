/*
** EPITECH PROJECT, 2019
** game.c my_rpg
** File description:
** game file for my_rpg
*/

#include "struct.h"

char *int_to_str(long long nb)
{
    int len = 0;
    char* str;
    int	tmp = nb;
    if (nb == 0)
        return "0";
    for (; tmp > 0; len++)
        tmp /= 10;
    str = malloc(sizeof(*str) * (len + 1));
    str[len] = '\0';
    for (; len--; nb /= 10)
        str[len] = nb % 10 + '0';
    return (str);
}

void inv_tnp2(sfRenderWindow *wd, t_var *var)
{
    sfSprite_setTexture(var->spr4->spr_web, var->tex4->tex_web, sfTrue);
    sfSprite_setPosition(var->spr4->spr_web, (sfVector2f){785, 642});
    sfSprite_setTextureRect(var->spr4->spr_web, var->re5->re_web);
    sfSprite_setTexture(var->spr4->spr_armor, var->tex4->tex_armor, sfTrue);
    sfSprite_setPosition(var->spr4->spr_armor, (sfVector2f){820, 350});
    sfSprite_setTextureRect(var->spr4->spr_armor, var->re6->re_armor);
    sfSprite_setTexture(var->spr4->spr_boot, var->tex4->tex_boot, sfTrue);
    sfSprite_setPosition(var->spr4->spr_boot, (sfVector2f){905, 560});
    sfSprite_setTextureRect(var->spr4->spr_boot, var->re6->re_boot);
}

void inv_tnp(sfRenderWindow *wd, t_var *var)
{
    sfSprite_setTexture(var->spr4->spr_appot, var->tex4->tex_appot, sfTrue);
    sfSprite_setPosition(var->spr4->spr_appot, (sfVector2f){1065, 642});
    sfSprite_setTextureRect(var->spr4->spr_appot, var->re5->re_appot);
    sfSprite_setTexture(var->spr4->spr_hpot, var->tex4->tex_hpot, sfTrue);
    sfSprite_setPosition(var->spr4->spr_hpot, (sfVector2f){995, 642});
    sfSprite_setTextureRect(var->spr4->spr_hpot, var->re6->re_hpot);
    sfSprite_setTexture(var->spr4->spr_sting, var->tex4->tex_sting, sfTrue);
    sfSprite_setPosition(var->spr4->spr_sting, (sfVector2f){855, 642});
    sfSprite_setTextureRect(var->spr4->spr_sting, var->re5->re_sting);
    sfSprite_setTexture(var->spr4->spr_venom, var->tex4->tex_venom, sfTrue);
    sfSprite_setPosition(var->spr4->spr_venom, (sfVector2f){925, 642});
    sfSprite_setTextureRect(var->spr4->spr_venom, var->re5->re_venom);
    sfSprite_setTexture(var->spr->spr_money, var->tex->tex_money, sfTrue);
    sfSprite_setPosition(var->spr->spr_money, (sfVector2f){820, 712});
    var->va->money_txt = int_to_str(var->va->money);
    sfText_setString(var->va->money_sftxt, var->va->money_txt);
    sfText_setFont(var->va->money_sftxt, var->dia->font);
    sfText_setPosition(var->va->money_sftxt, (sfVector2f){920, 720});
    sfText_setColor(var->va->money_sftxt, sfBlack);
    inv_tnp2(wd, var);
}

void draw_inv(sfRenderWindow *wd, t_var *var)
{
    sfRenderWindow_drawSprite(wd, var->spr4->spr_appot, NULL);
    sfRenderWindow_drawSprite(wd, var->spr4->spr_hpot, NULL);
    sfRenderWindow_drawSprite(wd, var->spr4->spr_sting, NULL);
    sfRenderWindow_drawSprite(wd, var->spr4->spr_web, NULL);
    sfRenderWindow_drawSprite(wd, var->spr4->spr_venom, NULL);
    sfRenderWindow_drawSprite(wd, var->spr4->spr_armor, NULL);
    sfRenderWindow_drawSprite(wd, var->spr4->spr_boot, NULL);
    sfRenderWindow_drawSprite(wd, var->spr->spr_money, NULL);
    sfRenderWindow_drawText(wd, var->va->money_sftxt, NULL);
}

void inventory(sfRenderWindow *wd, t_var *var)
{
    if (var->va->inv == 1){
        inv_tnp(wd, var);
        draw_inv(wd, var);
    }
}