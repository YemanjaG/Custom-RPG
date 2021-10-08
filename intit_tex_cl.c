/*
** EPITECH PROJECT, 2019
** init_tex_posbg my_rpg
** File description:
** init all textures and pos bg file for my_rpg
*/

#include "struct.h"

t_tex *init_texture(sfRenderWindow* wd)
{
    t_tex *tex = malloc(sizeof(t_tex));
    tex->tex_menu = sfTexture_createFromFile("./src/menu.jpg", NULL);
    tex->tex_play = sfTexture_createFromFile("./btn/play.png", NULL);
    tex->tex_opt = sfTexture_createFromFile("./btn/opt.png", NULL);
    tex->tex_quit = sfTexture_createFromFile("./btn/quit.png", NULL);
    tex->tex_audio = sfTexture_createFromFile("./btn/audio.png", NULL);
    tex->tex_frame = sfTexture_createFromFile("./btn/frame.png", NULL);
    tex->tex_scrmd = sfTexture_createFromFile("./btn/scrmd.png", NULL);
    tex->tex_res = sfTexture_createFromFile("./btn/res.png", NULL);
    tex->tex_back = sfTexture_createFromFile("./btn/back.png", NULL);
    tex->tex_res1 = sfTexture_createFromFile("./btn/19201080.png", NULL);
    tex->tex_res2 = sfTexture_createFromFile("./btn/16001200.png", NULL);
    tex->tex_res3 = sfTexture_createFromFile("./btn/12801024.png", NULL);
    tex->tex_res4 = sfTexture_createFromFile("./btn/1600900.png", NULL);
    tex->tex_frame30 = sfTexture_createFromFile("./btn/30.png", NULL);
    tex->tex_frame60 = sfTexture_createFromFile("./btn/60.png", NULL);
    tex->tex_frame144 = sfTexture_createFromFile("./btn/144.png", NULL);
    tex->tex_fscr = sfTexture_createFromFile("./btn/fscr.png", NULL);
    tex->tex_money = sfTexture_createFromFile("./src/money.png", NULL);
    return tex;
}

t_tex2 *init_texture2(sfRenderWindow* wd)
{
    t_tex2 *tex2 = malloc(sizeof(t_tex2));
    tex2->tex_wnd = sfTexture_createFromFile("./btn/wnd.png", NULL);
    tex2->tex_snd = sfTexture_createFromFile("./btn/snd.png", NULL);
    tex2->tex_msc = sfTexture_createFromFile("./btn/msc.png", NULL);
    tex2->tex_slct = sfTexture_createFromFile("./btn/slct.png", NULL);
    tex2->tex_pls = sfTexture_createFromFile("./btn/pls.png", NULL);
    tex2->tex_mns = sfTexture_createFromFile("./btn/mns.png", NULL);
    tex2->tex_pls2 = sfTexture_createFromFile("./btn/pls.png", NULL);
    tex2->tex_mns2 = sfTexture_createFromFile("./btn/mns.png", NULL);
    tex2->tex_nbrs = sfTexture_createFromFile("./btn/nbrs.png", NULL);
    tex2->tex_plr = sfTexture_createFromFile("./src/plr1.png", NULL);
    tex2->tex_plr2 = sfTexture_createFromFile("./src/plr2.png", NULL);
    tex2->tex_mob1 = sfTexture_createFromFile("./src/mob1.png", NULL);
    tex2->tex_mob2 = sfTexture_createFromFile("./src/mob2.png", NULL);
    tex2->tex_mob3 = sfTexture_createFromFile("./src/mob3.png", NULL);
    tex2->tex_mmap = sfTexture_createFromFile("./src/magemap.png", NULL);
    tex2->tex_mmhigh = sfTexture_createFromFile("./src/magemap_high.png", NULL);
    tex2->tex_chest = sfTexture_createFromFile("./src/chest128.png", NULL);
    tex2->tex_inter = sfTexture_createFromFile("./src/txt_interact.png", NULL);
    return tex2;
}

t_tex3 *init_texture3(sfRenderWindow* wd)
{
    t_tex3 *tex3 = malloc(sizeof(t_tex3));
    tex3->tex_town = sfTexture_createFromFile("./src/town.png", NULL);
    tex3->tex_thigh = sfTexture_createFromFile("./src/highest_layer.png", NULL);
    tex3->img_tcol = sfImage_createFromFile("./src/collision.png");
    tex3->tex_bm = sfTexture_createFromFile("./src/bossmap.png", NULL);
    tex3->tex_bmhigh = sfTexture_createFromFile("./src/bossmap_high.png", NULL);
    tex3->tex_apbar = sfTexture_createFromFile("./src/energy.png", NULL);
    tex3->tex_atqmenu = sfTexture_createFromFile("./src/atqmenu.png", NULL);
    tex3->tex_bgcbt = sfTexture_createFromFile("./src/fight_bg.png", NULL);
    tex3->tex_cbmenu = sfTexture_createFromFile("./src/cbmenu.png", NULL);
    tex3->tex_hpbarf = sfTexture_createFromFile("./src/hpbarfull.png", NULL);
    tex3->tex_hpbare = sfTexture_createFromFile("./src/hpbarempty.png", NULL);
    tex3->tex_plrfight = sfTexture_createFromFile("./src/cbplr525.png", NULL);
    tex3->tex_qst = sfTexture_createFromFile("./src/npc_qst.png", NULL);
    tex3->tex_blk = sfTexture_createFromFile("./src/npc_blk.png", NULL);
    tex3->tex_shp = sfTexture_createFromFile("./src/npc_shp.png", NULL);
    tex3->tex_wlc = sfTexture_createFromFile("./src/npc_wlc.png", NULL);
    tex3->tex_sage = sfTexture_createFromFile("./src/npc_sage.png", NULL);
    tex3->tex_boss = sfTexture_createFromFile("./src/npc_boss.png", NULL);
    return tex3;
}

t_tex4 *init_texture4(sfRenderWindow* wd)
{
    t_tex4 *tex4 = malloc(sizeof(t_tex4));
    tex4->tex_appot = sfTexture_createFromFile("./src/APpot.png", NULL);
    tex4->tex_hpot = sfTexture_createFromFile("./src/hpot.png", NULL);
    tex4->tex_armor = sfTexture_createFromFile("./src/armor.png", NULL);
    tex4->tex_boot = sfTexture_createFromFile("./src/boot.png", NULL);
    tex4->tex_web = sfTexture_createFromFile("./src/web.png", NULL);
    tex4->tex_venom = sfTexture_createFromFile("./src/venom.png", NULL);
    tex4->tex_sting = sfTexture_createFromFile("./src/sting.png", NULL);
    tex4->tex_textebox = sfTexture_createFromFile("./src/empty_dialogbox.png",
    NULL);
    tex4->tex_bigboss = sfTexture_createFromFile("./src/big_bosses.png", NULL);
    tex4->tex_bigplr = sfTexture_createFromFile("./src/big_players.png", NULL);
    tex4->tex_cbbg2 = sfTexture_createFromFile("./src/cb_bg2.png", NULL);
    tex4->tex_chest = sfTexture_createFromFile("./src/chest128.png", NULL);
    tex4->tex_deadb = sfTexture_createFromFile("./src/dead_boss.png", NULL);
    tex4->tex_cin_d = sfTexture_createFromFile("./src/cinematique_debut.png",
    NULL);
    tex4->tex_cin_f = sfTexture_createFromFile("./src/cinematique_fin.png",
    NULL);
    return (tex4);
}

t_cl *init_clocks(sfRenderWindow* wd)
{
    t_cl *cl = malloc(sizeof(t_cl));
    cl->cl_msc = sfClock_create();
    cl->cl_plr = sfClock_create();
    cl->cl_mob1 = sfClock_create();
    cl->cl_mob2 = sfClock_create();
    cl->cl_mob3 = sfClock_create();
    cl->cl_rspw = sfClock_create();
    cl->cl_npc = sfClock_create();
    cl->cl_boss = sfClock_create();
    cl->cl_text = sfClock_create();
    cl->cl_cin_d = sfClock_create();
    cl->cl_cin_f = sfClock_create();
    return cl;
}