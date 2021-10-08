/*
** EPITECH PROJECT, 2019
** game.c my_rpg
** File description:
** game file for my_rpg
*/

#include "struct.h"

void print_dialog_box(sfRenderWindow *wd, t_var *var)
{
    var->po2->pos_textebox.x = 600;
    var->po2->pos_textebox.y = 950;
    sfSprite_setTexture(var->spr4->spr_textebox, var->tex4->tex_textebox,
    sfTrue);
    sfSprite_setPosition(var->spr4->spr_textebox, var->po2->pos_textebox);
    sfSprite_setScale(var->spr4->spr_textebox, (sfVector2f){0.5, 0.3});
    sfRenderWindow_drawSprite(wd, var->spr4->spr_textebox, NULL);
}

char *my_strnncpy(char *dest, char *src, int start, int stop)
{
    if (start == stop)
        dest[0] = src[start];
    for (int i = 0; start != stop; i++, start++)
        dest[i] = src[start];
    return (dest);
}

char *add_char(char *str, char *src, t_var *var)
{
    if (var->dia->nb_back == 2 && var->dia->space == 1) {
        var->dia->nb_back = 0;
        var->dia->pos = 0;
        str = NULL;
        var->dia->start = var->dia->pos2 + 1;
        var->dia->str = NULL;
    } else if (var->dia->nb_back == 2 && var->dia->space == 0)
        return str;
    int str_s = my_strlen(str);
    char *new = my_memset(new, '\0', (str_s + 20));
    var->dia->pos2++;
    var->dia->pos++;
    new = my_strnncpy(new, src, var->dia->start, var->dia->pos2);
    if (src[var->dia->pos2] == '\n')
        var->dia->nb_back++;
    if (src[var->dia->pos2 + 1] == 0)
        var->dia->end = 1;
    return (new);
}