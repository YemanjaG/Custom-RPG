/*
** EPITECH PROJECT, 2019
** init_pos my_rpg
** File description:
** pisitions initialisations file for my_rpg
*/

#include "struct.h"

t_po *init_positions(sfRenderWindow* wd)
{
    t_po *po = malloc(sizeof(t_po));
    po->pos_pls.x = 1060;
    po->pos_pls.y = 259;
    po->pos_mns.x = 760;
    po->pos_mns.y = 259;
    po->pos_pls2.x = 1060;
    po->pos_pls2.y = 659;
    po->pos_mns2.x = 760;
    po->pos_mns2.y = 659;
    po->pos_nbrs.x = 910;
    po->pos_nbrs.y = 659;
    po->pos_nbrs2.x = 910;
    po->pos_nbrs2.y = 259;
    po->pos_gold.x = 150;
    po->pos_gold.y = 35;
    return po;
}

t_po2 *init_positions2(sfRenderWindow* wd)
{
    t_po2 *po2 = malloc(sizeof(t_po2));
    po2->pos_play.x = 466;
    po2->pos_play.y = 259;
    po2->pos_opt.x = 541;
    po2->pos_opt.y = 459;
    po2->pos_quit.x = 464;
    po2->pos_quit.y = 659;
    po2->pos_audio.x = 587;
    po2->pos_audio.y = 59;
    po2->pos_frame.x = 423;
    po2->pos_frame.y = 259;
    po2->pos_scrmd.x = 369;
    po2->pos_scrmd.y = 459;
    po2->pos_back.x = 680;
    po2->pos_back.y = 859;
    return po2;
}

t_po3 *init_positions3(sfRenderWindow* wd)
{
    t_po3 *po3 = malloc(sizeof(t_po3));
    po3->pos_res.x = 404;
    po3->pos_res.y = 659;
    po3->pos_res1.x = 435;
    po3->pos_res1.y = 59;
    po3->pos_res2.x = 435;
    po3->pos_res2.y = 259;
    po3->pos_res3.x = 435;
    po3->pos_res3.y = 459;
    po3->pos_res4.x = 480;
    po3->pos_res4.y = 659;
    po3->pos_30.x = 781;
    po3->pos_30.y = 59;
    po3->pos_60.x = 781;
    po3->pos_60.y = 259;
    po3->pos_144.x = 737;
    po3->pos_144.y = 459;
    po3->pos_fscr.x = 423;
    po3->pos_fscr.y = 59;
    return po3;
}

t_po4 *init_positions4(sfRenderWindow* wd)
{
    t_po4 *po4 = malloc(sizeof(t_po4));
    po4->pos_wnd.x = 440;
    po4->pos_wnd.y = 259;
    po4->pos_snd.x = 576;
    po4->pos_snd.y = 59;
    po4->pos_msc.x = 634;
    po4->pos_msc.y = 459;
    po4->pos_slct.x = 0;
    po4->pos_slct.y = 0;
    po4->pos_plr.x = 872;
    po4->pos_plr.y = 927;
    po4->pos_mob1.x = 400;
    po4->pos_mob1.y = -300;
    po4->pos_mob2.x = 600;
    po4->pos_mob2.y = 200;
    po4->pos_mob3.x = 800;
    po4->pos_mob3.y = 500;
    po4->pos_qst.x = 3030;
    po4->pos_qst.y = -3200;
    return po4;
}

t_po5 *init_positions5(sfRenderWindow* wd)
{
    t_po5 *po5 = malloc(sizeof(t_po5));
    po5->pos_town.x = 0;
    po5->pos_town.y = 0;
    po5->pos_atqmenu.x = 800;
    po5->pos_atqmenu.y = 817;
    po5->pos_cbmenu.x = 800;
    po5->pos_cbmenu.y = 817;
    po5->pos_cbplr.x = 0;
    po5->pos_cbplr.y = 0;
    po5->pos_energy.x = 888;
    po5->pos_energy.y = 776;
    po5->pos_hp.x = 0;
    po5->pos_hp.y = 0;
    po5->pos_blk.x = 2550;
    po5->pos_blk.y = -1700;
    po5->pos_shp.x = 1390;
    po5->pos_shp.y = -2300;
    po5->pos_wlc.x = 1020;
    po5->pos_wlc.y = 200;
    return po5;
}
