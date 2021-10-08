/*
** EPITECH PROJECT, 2019
** init_sprite my_rpg
** File description:
** all sprites initialisations file for my_rpg
*/

#include "struct.h"

t_spr *init_sprite(sfRenderWindow* wd)
{
    t_spr *spr = malloc(sizeof(t_spr));
    spr->spr_menu = sfSprite_create();
    spr->spr_play = sfSprite_create();
    spr->spr_opt = sfSprite_create();
    spr->spr_quit = sfSprite_create();
    spr->spr_audio = sfSprite_create();
    spr->spr_frame = sfSprite_create();
    spr->spr_scrmd = sfSprite_create();
    spr->spr_res = sfSprite_create();
    spr->spr_back = sfSprite_create();
    spr->spr_res1 = sfSprite_create();
    spr->spr_res2 = sfSprite_create();
    spr->spr_res3 = sfSprite_create();
    spr->spr_res4 = sfSprite_create();
    spr->spr_frame30 = sfSprite_create();
    spr->spr_frame60 = sfSprite_create();
    spr->spr_frame144 = sfSprite_create();
    spr->spr_fscr = sfSprite_create();
    spr->spr_money = sfSprite_create();
    return (spr);
}

t_spr2 *init_sprite2(sfRenderWindow* wd)
{
    t_spr2 *spr2 = malloc(sizeof(t_spr2));
    spr2->spr_wnd = sfSprite_create();
    spr2->spr_snd = sfSprite_create();
    spr2->spr_msc = sfSprite_create();
    spr2->spr_slct = sfSprite_create();
    spr2->spr_pls = sfSprite_create();
    spr2->spr_mns = sfSprite_create();
    spr2->spr_pls2 = sfSprite_create();
    spr2->spr_mns2 = sfSprite_create();
    spr2->spr_nbrs = sfSprite_create();
    spr2->spr_nbrs2 = sfSprite_create();
    spr2->spr_plr = sfSprite_create();
    spr2->spr_plr2 = sfSprite_create();
    spr2->spr_mob1 = sfSprite_create();
    spr2->spr_mob2 = sfSprite_create();
    spr2->spr_mob3 = sfSprite_create();
    spr2->spr_mmap = sfSprite_create();
    spr2->spr_mmhigh = sfSprite_create();
    spr2->spr_inter = sfSprite_create();
    return (spr2);
}

t_spr3 *init_sprite3(sfRenderWindow* wd)
{
    t_spr3 *spr3 = malloc(sizeof(t_spr3));
    spr3->spr_town = sfSprite_create();
    spr3->spr_thigh = sfSprite_create();
    spr3->spr_tcol = sfSprite_create();
    spr3->spr_bm = sfSprite_create();
    spr3->spr_bmhigh = sfSprite_create();
    spr3->spr_bmcol = sfSprite_create();
    spr3->spr_apbar = sfSprite_create();
    spr3->spr_phpbarf = sfSprite_create();
    spr3->spr_phpbare = sfSprite_create();
    spr3->spr_bhpbarf = sfSprite_create();
    spr3->spr_bhpbare = sfSprite_create();
    spr3->spr_bgcbt = sfSprite_create();
    spr3->spr_cbmenu = sfSprite_create();
    spr3->spr_atqmenu = sfSprite_create();
    spr3->spr_plrfight = sfSprite_create();
    spr3->spr_qst = sfSprite_create();
    spr3->spr_blk = sfSprite_create();
    spr3->spr_shp = sfSprite_create();
    return spr3;
}

t_spr4 *init_sprite4(sfRenderWindow* wd)
{
    t_spr4 *spr4 = malloc(sizeof(t_spr4));
    spr4->spr_wlc = sfSprite_create();
    spr4->spr_sage = sfSprite_create();
    spr4->spr_boss = sfSprite_create();
    spr4->spr_appot = sfSprite_create();
    spr4->spr_hpot = sfSprite_create();
    spr4->spr_armor = sfSprite_create();
    spr4->spr_boot = sfSprite_create();
    spr4->spr_sting = sfSprite_create();
    spr4->spr_venom = sfSprite_create();
    spr4->spr_web = sfSprite_create();
    spr4->spr_textebox = sfSprite_create();
    spr4->spr_bigboss = sfSprite_create();
    spr4->spr_bigplr = sfSprite_create();
    spr4->spr_cbbg2 = sfSprite_create();
    spr4->spr_chest = sfSprite_create();
    spr4->spr_deadb = sfSprite_create();
    spr4->spr_cin_d = sfSprite_create();
    spr4->spr_cin_f =sfSprite_create();
    return spr4;
}