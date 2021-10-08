/*
** EPITECH PROJECT, 2019
** game.c my_rpg
** File description:
** game file for my_rpg
*/

#include "struct.h"

char* set_text_blk(t_var* var)
{
    int nb = 3;
    if (var->va->plrdmg >= 10)
        nb = 5;
    char* text2 = malloc(sizeof(char) * (38 + 34 + nb));
    text2 = my_memset(text2, '\0', 72 + nb);
    text2 = my_strcat(text2, "Voila tes competences:\nTu as tue ");
    text2 = my_strcat(text2, int_to_str((var->va->plrdmg * 10)
    + var->va3->countup));
    text2 = my_strcat(text2, " mobs et ta force d'attaque est de ");
    text2 = my_strcat(text2, int_to_str(var->va->plrdmg));
    text2 = my_strcat(text2, "!\n");
    return text2;
}

void init_item_sell(t_var *var)
{
    int ven_supr = 0;
    var->va->money += (var->va3->nsting*3);
    var->va->money += (var->va3->nweb*2);
    while (var->va3->nvenom >= 4) {
        var->va->money += 6;
        var->va3->nvenom -= 4;
    }
    var->va3->nsting = 0;
    var->va3->nweb = 0;
}

void set_text_quete(t_var *var, char *str)
{
    sfText_setString(var->dia->text, str);
    if (var->dia->space == 1){
        if ((var->va3->nsting > 0 || var->va3->nweb > 0
        || var->va3->nvenom >= 4) && var->dia->sells == 1){
            init_item_sell(var);
        }
        if (var->dia->p_quete == -1)
            var->dia->sells = 1;
        var->dia->whois = 0;
    }
}

char *set_boss_dia(t_var *var)
{
    char *text = NULL;
    if (var->dia->p_boss == 0)
        text = BOSS_DIA_1;
    if (var->dia->p_boss == 1)
        text = BOSS_DIA_LOOSE;
    if (var->dia->p_boss == 2)
        text = BOSS_DIA_WIN;
    return (text);
}
