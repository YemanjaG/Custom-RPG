/*
** EPITECH PROJECT, 2019
** game.c my_rpg
** File description:
** game file for my_rpg
*/

#include "struct.h"

void p_boss_dialog(sfRenderWindow *wd, t_var *var)
{
    char *text = set_boss_dia(var);
    static int end = 0;
    if (var->dia->end == 1) {
        end = 1;
        var->dia->p_boss_block = 0;
        init_text_def(var);
    }
    if (var->dia->space == 1 && var->dia->p_boss == 0 && end == 1){
        var->dia->whois = 0;
        var->va->fight = 1;
    } if (var->dia->p_boss_block != 0 && text != NULL){
        var->dia->str = add_char(var->dia->str, text, var);
        sfText_setString(var->dia->text, var->dia->str);
    }
    else if (end != 1)
        set_text_quete(var, "salut petit");
}

void p_mage_dialog2(sfRenderWindow *wd, t_var *var, char* text, int end)
{
    if (var->dia->space == 1 && var->dia->p_mage == 0 && end == 1){
        var->dia->whois = 0;
        var->va->fight = 2;
    } if (var->dia->p_mage_block != 0 && text != NULL){
        var->dia->str = add_char(var->dia->str, text, var);
        sfText_setString(var->dia->text, var->dia->str);
    }
}

void p_mage_dialog(sfRenderWindow *wd, t_var *var)
{
    char *text = NULL;
    if (var->dia->p_mage == 0)
        text = MAGE_DIA_1;
    if (var->dia->p_mage == 1)
        text = MAGE_DIA_LOOSE;
    if (var->dia->p_mage == 2)
        text = MAGE_DIA_WIN;
    static int end = 0;
    if (var->dia->p_mage_block != 0)
        end = 0;
    if (var->dia->end == 1) {
        end = 1;
        var->dia->p_mage_block = 0;
        init_text_def(var);
    }
    p_mage_dialog2(wd, var, text, end);
}

void p_intro_dialog2(sfRenderWindow *wd, t_var *var, char* text)
{
    if (var->dia->p_intro_block != 0 && text != NULL) {
        var->dia->str = add_char(var->dia->str, text, var);
        sfText_setString(var->dia->text, var->dia->str);
    } else if (var->dia->p_intro == 2){
        var->dia->str = add_char(var->dia->str, text, var);
        sfText_setString(var->dia->text, var->dia->str);
        if (var->dia->space == 1)
            var->dia->p_intro = 1;
        var->re6->re_boot.left = 106;
    } else {
        sfText_setString(var->dia->text, "A bientot");
        if (var->dia->space == 1)
            var->dia->whois = 0;
    }
}