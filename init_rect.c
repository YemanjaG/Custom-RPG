/*
** EPITECH PROJECT, 2019
** init_rect my_rpg
** File description:
** rect initialisations file for my_rpg
*/

#include "struct.h"

t_re *init_rects(sfRenderWindow* wd)
{
    t_re *re = malloc(sizeof(t_re));
    re->rect_nbrs.height = 100;
    re->rect_nbrs.left = 500;
    re->rect_nbrs.top = 0;
    re->rect_nbrs.width = 100;
    re->rect_nbrs2.height = 100;
    re->rect_nbrs2.left = 500;
    re->rect_nbrs2.top = 0;
    re->rect_nbrs2.width = 100;
    re->rect_plr.height = 176;
    re->rect_plr.left = 0;
    re->rect_plr.top = 352;
    re->rect_plr.width = 176;
    re->music = sfMusic_createFromFile("./src/music.ogg");
    re->rect_npc.height = 110;
    re->rect_npc.left = 0;
    re->rect_npc.top = 0;
    re->rect_npc.width = 110;
    return re;
}

t_re2 *init_rects2(sfRenderWindow* wd)
{
    t_re2 *re2 = malloc(sizeof(t_re2));
    re2->re_town.height = 1080;
    re2->re_town.width = 1920;
    re2->re_town.left = 150;
    re2->re_town.top = 3400;
    re2->rect_mob1.height = 75;
    re2->rect_mob1.width = 100;
    re2->rect_mob1.left = 0;
    re2->rect_mob1.top = 0;
    re2->rect_mob2.height = 71;
    re2->rect_mob2.width = 60;
    re2->rect_mob2.left = 0;
    re2->rect_mob2.top = 0;
    re2->rect_mob3.height = 60;
    re2->rect_mob3.width = 60;
    re2->rect_mob3.left = 0;
    re2->rect_mob3.top = 0;
    return re2;
}

t_re3 *init_rect3(sfRenderWindow *wd)
{
    t_re3 *re3 = malloc(sizeof(t_re3));
    re3->rect_ap.height = 39;
    re3->rect_ap.width = 177;
    re3->rect_ap.left = 0;
    re3->rect_ap.top = 78;
    re3->rect_atqmenu.height = 240;
    re3->rect_atqmenu.width = 400;
    re3->rect_atqmenu.left = 0;
    re3->rect_atqmenu.top = 0;
    re3->rect_cbmenu.left = 0;
    re3->rect_cbmenu.top = 0;
    re3->rect_cbmenu.height = 240;
    re3->rect_cbmenu.width = 400;
    re3->rect_boss.left = 0;
    re3->rect_boss.top = 0;
    re3->rect_boss.height = 200;
    re3->rect_boss.width = 200;
    return re3;
}

t_re4 *init_rect4(sfRenderWindow *wd)
{
    t_re4 *re4 = malloc(sizeof(t_re4));
    re4->rect_bhpf.height = 26;
    re4->rect_bhpf.width = 300;
    re4->rect_bhpf.top = 0;
    re4->rect_bhpf.left = 0;
    re4->rect_phpf.height = 26;
    re4->rect_phpf.width = 300;
    re4->rect_phpf.top = 0;
    re4->rect_phpf.left = 0;
    re4->rect_bigb.height = 727;
    re4->rect_bigb.width = 658;
    re4->rect_bigb.top = 0;
    re4->rect_bigb.left = 0;
    re4->rect_bigp.height = 680;
    re4->rect_bigp.width = 540;
    re4->rect_bigp.top = 0;
    re4->rect_bigp.left = 0;
    return re4;
}

t_re5 *init_rect5(sfRenderWindow *wd)
{
    t_re5 *re5 = malloc(sizeof(t_re5));
    re5->re_appot.height = 70;
    re5->re_appot.width = 70;
    re5->re_appot.top = 0;
    re5->re_appot.left = 0;
    re5->re_sting.height = 70;
    re5->re_sting.width = 70;
    re5->re_sting.top = 0;
    re5->re_sting.left = 0;
    re5->re_venom.height = 70;
    re5->re_venom.width = 70;
    re5->re_venom.top = 0;
    re5->re_venom.left = 0;
    re5->re_web.height = 70;
    re5->re_web.width = 70;
    re5->re_web.top = 0;
    re5->re_web.left = 0;
    return re5;
}
