/*
** EPITECH PROJECT, 2019
** game.c my_rpg
** File description:
** game file for my_rpg
*/

#include "struct.h"

void draw_all(sfRenderWindow *wd, t_var *var)
{
    if (var->va->fight == 0){
        if (var->va2->map == 0)
            draw_map1(wd, var);
        else if (var->va2->map == 1)
            draw_map2(wd, var);
        else
            draw_map3(wd, var);
    } else if (var->va->fight != 0){
        draw_fight(wd, var);
    } else {

    }
    inventory(wd, var);
    dialog(wd, var);
}

void game3(sfRenderWindow *wd, t_var *var)
{
    if (var->va2->opt == 1)
        menu_opt(wd, var);
    else if (var->va2->start == 0){
        menu(wd, var);
    } else
        draw_all(wd, var);
}

void game2(sfRenderWindow *wd, t_var *var, sfVideoMode mode)
{
    if (var->va2->frame == 1)
        menu_frame(wd, var);
    else if (var->va2->scrmd == 1)
        menu_scrmd(wd, var, mode);
    else
        game3(wd, var);
}

void game(sfRenderWindow *wd, t_var *var, sfVideoMode mode)
{
    if (var->va->cin_d == 0) {
        draw_intro(wd, var);
        return;
    }
    if (var->va3->liveboss == 0 && var->va->cin_f == 0) {
        draw_outro(wd, var);
        return;
    }
    if (var->va2->res == 1)
        menu_res(wd, var);
    else if (var->va2->audio == 1)
        menu_audio(wd, var);
    else
        game2(wd, var, mode);
}

void game_loop(int ac, char** av, t_acc *acc)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* wd;
    t_var *var = init_all(wd);
    var->acc = acc;
    var->dia = init_dia(var);
    if (acc->type != 0)
        charger_save(var);
    wd = sfRenderWindow_create(mode, "my_rpg", 8, NULL);
    sfMusic_play(var->re->music);
    while (sfRenderWindow_isOpen(wd)) {
        set_wd_and_music(wd, var);
        while (sfRenderWindow_pollEvent(wd, &var->event))
            handle_event(wd, var);
        sfRenderWindow_clear(wd, sfBlack);
        game(wd, var, mode);
        sfRenderWindow_display(wd);
        var->va2->clic = 0;
    }
    destroy_music(wd, var);
}