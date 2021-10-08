/*
** EPITECH PROJECT, 2019
** game.c my_rpg
** File description:
** game file for my_rpg
*/

#include "struct.h"

void p_intro_dialog(sfRenderWindow *wd, t_var *var)
{
    char *text = NULL;
    if (var->dia->p_intro == 0)
        text = INTRO_DIA;
    else if (var->dia->p_intro == 2)
        text = SECRET_QUETE_DIA;
    if (var->dia->end == 1 && var->dia->p_intro == 0) {
        var->dia->p_intro = 1;
        var->dia->p_intro_block = 0;
        var->dia->p_quete_block = 1;
        init_text_def(var);
    }
    p_intro_dialog2(wd, var, text);
}

void sell_item(t_var *var)
{
    if ((var->va3->nsting > 0 || var->va3->nweb > 0
    || var->va3->nvenom >= 4) && var->dia->sells == 1){
        set_text_quete(var, "super je t'achete tout.");
    }
    else if (var->dia->sells == 1){
        set_text_quete(var, "reviens plus tard.");
    }
    else
        set_text_quete(var, "A bientot");
}

void p_quete_dialog(sfRenderWindow *wd, t_var *var)
{
    check_stuff(var);
    char *text = init_quete_text(var);
    if (var->dia->end == 1) {
        var->dia->p_quete_block = 0;
        if (var->dia->p_quete == 0){
            var->dia->p_quete = 1;
            var->dia->test = 1;
        }
        if (var->dia->p_quete == 2){
            init_stuff(var);
            var->dia->p_quete = -1;
        }
        init_text_def(var);
    } if (var->dia->p_quete_block != 0 && text != NULL) {
        var->dia->str = add_char(var->dia->str, text, var);
        sfText_setString(var->dia->text, var->dia->str);
    } else if (var->dia->test == 1)
        sell_item(var);
    else if (var->dia->p_quete != 1 && var->dia->p_intro == 0)
        set_text_quete(var, "Salut");
}

void p_kehops_dialog(sfRenderWindow *wd, t_var *var)
{
    char *text = set_text_blk(var);
    if (var->dia->end == 1) {
        var->dia->p_kehops_block = 0;
        init_text_def(var);
    }
    if (var->dia->p_kehops_block != 0 && text != NULL){
        var->dia->str = add_char(var->dia->str, text, var);
        sfText_setString(var->dia->text, var->dia->str);
    }
    if (var->dia->space == 1)
        var->dia->whois = 0;
}

void p_seller_dialog(sfRenderWindow *wd, t_var *var)
{
    char *text = SELLER_DIA;
    if (var->dia->end == 1) {
        var->dia->p_seller_block = 0;
        init_text_def(var);
    }
    if (var->dia->p_seller_block != 0 && text != NULL){
        var->dia->str = add_char(var->dia->str, text, var);
        sfText_setString(var->dia->text, var->dia->str);
        var->va->inv = 1;
    } else {
        sfText_setString(var->dia->text, "A bientot");
        if (var->dia->space == 1)
            var->dia->whois = 0;
    }
}