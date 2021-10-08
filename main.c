/*
** EPITECH PROJECT, 2019
** main my_rpg
** File description:
** main my_rpg
*/

#include "struct.h"

void set_wd_and_music(sfRenderWindow* wd, t_var *var)
{
    sfRenderWindow_setFramerateLimit(wd, var->va2->frmrt);
    sfRenderWindow_setSize(wd, var->va2->reso);
    sfMusic_setVolume(var->re->music, var->va->vol_msc);
    sfRenderWindow_setIcon(wd, 125, 125,
    sfImage_getPixelsPtr(sfImage_createFromFile("./src/icon.png")));
    if (sfTime_asSeconds(sfClock_getElapsedTime(var->cl->cl_msc)) > 210){
        sfMusic_stop(var->re->music);
        sfMusic_play(var->re->music);
        sfClock_restart(var->cl->cl_msc);
    }
}

void destroy_music(sfRenderWindow* wd, t_var *var)
{
    sfMusic_destroy(var->re->music);
}

int main(int ac, char **av)
{
    t_acc *acc = malloc(sizeof(t_acc));
    acc->type = 0;
    if (ac > 1){
        if (av[1][0] == '-' && av[1][1] == 'h'){
            write(1, "'-h'\n", 5);
            return (0);
        }
        if (av[1][0] == '-' && av[1][1] == 'c' && account(acc) == 1)
            return (0);
    }
    game_loop(ac, av, acc);
    return (0);
}