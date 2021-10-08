/*
** EPITECH PROJECT, 2019
** game.c my_rpg
** File description:
** game file for my_rpg
*/

#include "struct.h"

void init_dia_2(t_var *var)
{
    var->dia->str = NULL;
    var->dia->text = sfText_create();
    var->dia->font = sfFont_createFromFile("./src/police.ttf");
    var->dia->pos = 0;
    var->dia->pos2 = 0;
    var->dia->space = 0;
    var->dia->sells = 0;
    var->dia->test = 0;
    sfText_setFont(var->dia->text, var->dia->font);
    sfText_setColor(var->dia->text, sfBlack);
    sfText_setPosition(var->dia->text, (sfVector2f){660, 960});
    sfText_setScale(var->dia->text, (sfVector2f){1, 1});
}

t_dia *init_dia(t_var *var)
{
    var->dia = malloc(sizeof(t_dia));
    var->dia->whois = 0;
    var->dia->speed = 4;
    var->dia->choice = 0;
    var->dia->talk = 0;
    var->dia->end = 0;
    var->dia->p_intro = 0;
    var->dia->p_quete = 0;
    var->dia->p_seller = 0;
    var->dia->p_kehops = 0;
    var->dia->p_mage = 0;
    var->dia->p_boss = 0;
    var->dia->p_intro_block = 1;
    var->dia->p_quete_block = 0;
    var->dia->p_seller_block = 1;
    var->dia->p_kehops_block = 1;
    var->dia->p_mage_block = 0;
    var->dia->p_boss_block = 0;
    init_dia_2(var);
    return (var->dia);
}

void re_init_dia(t_var *var)
{
    var->dia->speed = 4;
    var->dia->choice = 0;
    if (var->dia->talk == 1)
        var->dia->talk = 2;
}

void init_text_def(t_var *var)
{
    var->dia->nb_back = 0;
    var->dia->pos = 0;
    var->dia->pos2 = 0;
    var->dia->start = 0;
    var->dia->str = NULL;
    var->dia->end = 0;
}

char *init_quete_text(t_var *var)
{
    char *text = NULL;
    if (var->dia->p_quete == 0)
        text = QUETE_DIA_1;
    else if (var->dia->p_quete == 1)
        text = QUETE_DIA_NO;
    else if (var->dia->p_quete == 2)
        text = QUETE_DIA_2;
    return (text);
}