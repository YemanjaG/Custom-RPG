/*
** EPITECH PROJECT, 2019
** init_all my_rpg
** File description:
** all initialisations file for my_rpg
*/

#include "struct.h"

t_va *init_varibles(sfRenderWindow* wd)
{
    t_va *va = malloc(sizeof(t_va));
    va->cin_d = 0;
    va->cin_f = 0;
    va->vol_msc = 0.0;
    va->vol_snd = 50.0;
    va->i = 0;
    va->plr_speed = 5;
    va->screen_speed = 5;
    va->fight = 0;
    va->amenu = 0;
    va->plrdmg = 0;
    va->plrheal = 3;
    va->inv = 0;
    va->ap = 2;
    va->hp = 100;
    va->bosshp = 100;
    va->money = 0;
    va->money_sftxt = sfText_create();
    va->town_tab = malloc(sizeof(int*) * 71);
    return (va);
}

t_va2 *init_varibles2(sfRenderWindow* wd)
{
    t_va2 *va2 = malloc(sizeof(t_va2));
    va2->start = 0;
    va2->loose = 1;
    va2->clic = 0;
    va2->opt = 0;
    va2->res = 0;
    va2->scrmd = 0;
    va2->frame = 0;
    va2->audio = 0;
    va2->res1 = 1;
    va2->frame1 = 2;
    va2->frmrt = 60;
    va2->reso.x = 1920;
    va2->reso.y = 1080;
    va2->scrmode = 0;
    va2->cnt = 0;
    va2->key_a = 0;
    va2->key_e = 0;
    va2->map = 0;
    return (va2);
}

t_va3 *init_varibles3(sfRenderWindow *wd)
{
    t_va3 *va3 = malloc(sizeof(t_va2));
    va3->armor = 0;
    va3->boots = 0;
    va3->nappot = 0;
    va3->nhpot = 0;
    va3->nsting = 20;
    va3->nvenom = 20;
    va3->nweb = 5;
    va3->livemage = 1;
    va3->liveboss = 1;
    va3->countup = 0;
    return (va3);
}

void shorten_big(t_var* var, sfRenderWindow *wd)
{
    var->re2 = init_rects2(wd);
    var->re3 = init_rect3(wd);
    var->re4 = init_rect4(wd);
    var->re5 = init_rect5(wd);
    var->re6 = init_rect6(wd);
    var->va3 = init_varibles3(wd);
}

t_var *init_all(sfRenderWindow* wd)
{
    t_var *var = malloc(sizeof(t_var));
    var->tex = init_texture(wd);
    var->tex2 = init_texture2(wd);
    var->tex3 = init_texture3(wd);
    var->tex4 = init_texture4(wd);
    var->spr = init_sprite(wd);
    var->spr2 = init_sprite2(wd);
    var->spr3 = init_sprite3(wd);
    var->spr4 = init_sprite4(wd);
    var->po = init_positions(wd);
    var->po2 = init_positions2(wd);
    var->po3 = init_positions3(wd);
    var->po4 = init_positions4(wd);
    var->po5 = init_positions5(wd);
    var->cl = init_clocks(wd);
    var->va = init_varibles(wd);
    var->va2 = init_varibles2(wd);
    var->re = init_rects(wd);
    shorten_big(var, wd);
    return (var);
}
