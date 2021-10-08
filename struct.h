/*
** EPITECH PROJECT, 2019
** structs my_rpg
** File description:
** all structures and libs for my_rpg
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <fcntl.h>
#include "get_next_line.h"
#include <errno.h>

#define INTRO_DIA "Bonjour,\nJe m'appelle johse et j'ai besoin de ton aide.\n\
Il faut que tu nous debarasse de bogo.\nIl terifie la ville entiere et son mal \
risque\nde se repandre au monde entier.\nVas voir frangio, il se trouve pres \
de la tente.\n               "
#define SECRET_QUETE_DIA "Tiens des chaussures pour aller plus vite !\nCadeau !\
\n               "

#define QUETE_DIA_1 "Hey !! C'est toi l'inconnue ...\nOn m'a parle de toi... \
Si tu veux combattre\nbogo il te faudra une armure. Le mage en\npossede une \
mais pour ca tu devras passer le\nrocher magique. Rapportes moi 5 queues de\n\
scorpion, 5 toiles d'araignes et 5 fioles\nde venin et je verrais ce que je \
peux faire\npour toi.\n                 "
#define QUETE_DIA_NO "Reviens quand tu auras ce que je t'ai demande.\n       \
\n                       \n               "
#define QUETE_DIA_2 "Super tu as tout ce qu'il faut.\nPour l'utiliser il faut\
... heeu... je heeeeu...\n                              "

#define SELLER_DIA "Bonjour mon ami.\nTu as besoin de quelque chose?\nJ'ai \
tout ca en stock.\n\nX : potions de vie.\nC : potions d'adrenaline.\n        "

#define MAGE_DIA_1 "Halte la egare!! Que fais tu ici??\nTu es venu me voler \
mon armure?\nSi tu la veux tu devras me battre!\n"
#define MAGE_DIA_LOOSE "HAHA LOSER!!"
#define MAGE_DIA_WIN "Bravo jeune inconnu... Argh..."

#define BOSS_DIA_1 "OH voila l'enfant qui veux se battre contre moi!!!\nTu \
n'as aucune chance!!\n          "
#define BOSS_DIA_LOOSE "HAHA je t'avais prevenue!!"
#define BOSS_DIA_WIN "ARGH...!!"

typedef struct dialog
{
    int whois;
    int talk;
    int speed;
    int end;
    char *str;
    int choice;
    int p_intro;
    int p_quete;
    int p_seller;
    int p_kehops;
    int p_mage;
    int p_boss;
    int p_intro_block;
    int p_quete_block;
    int p_seller_block;
    int p_kehops_block;
    int p_mage_block;
    int p_boss_block;
    sfText *text;
    sfFont *font;
    int nb_back;
    int pos2;
    int start;
    int pos;
    int space;
    int sells;
    int test;
}t_dia;

typedef struct account
{
    char *name;
    int type;
    DIR *dir;
    struct dirent *directory;
}t_acc;

typedef struct set_texture
{
    sfTexture* tex_menu;
    sfTexture* tex_play;
    sfTexture* tex_opt;
    sfTexture* tex_quit;
    sfTexture* tex_audio;
    sfTexture* tex_frame;
    sfTexture* tex_scrmd;
    sfTexture* tex_res;
    sfTexture* tex_back;
    sfTexture* tex_res1;
    sfTexture* tex_res2;
    sfTexture* tex_res3;
    sfTexture* tex_res4;
    sfTexture* tex_frame30;
    sfTexture* tex_frame60;
    sfTexture* tex_frame144;
    sfTexture* tex_fscr;
    sfTexture* tex_money;
}t_tex;

typedef struct set_texture2
{
    sfTexture* tex_wnd;
    sfTexture* tex_snd;
    sfTexture* tex_msc;
    sfTexture* tex_slct;
    sfTexture* tex_pls;
    sfTexture* tex_mns;
    sfTexture* tex_pls2;
    sfTexture* tex_mns2;
    sfTexture* tex_nbrs;
    sfTexture* tex_plr;
    sfTexture* tex_plr2;
    sfTexture* tex_mob1;
    sfTexture* tex_mob2;
    sfTexture* tex_mob3;
    sfTexture* tex_mmap;
    sfTexture* tex_mmcol;
    sfTexture* tex_mmhigh;
    sfTexture* tex_chest;
    sfTexture* tex_inter;
}t_tex2;

typedef struct set_texture3
{
    sfTexture* tex_town;
    sfTexture* tex_thigh;
    sfImage* img_tcol;
    sfTexture* tex_bm;
    sfTexture* tex_bmhigh;
    sfImage* img_bmcol;
    sfTexture* tex_bgcbt;
    sfTexture* tex_apbar;
    sfTexture* tex_hpbarf;
    sfTexture* tex_hpbare;
    sfTexture* tex_plrfight;
    sfTexture* tex_atqmenu;
    sfTexture* tex_cbmenu;
    sfTexture* tex_qst;
    sfTexture* tex_blk;
    sfTexture* tex_shp;
    sfTexture* tex_wlc;
    sfTexture* tex_sage;
    sfTexture* tex_boss;
}t_tex3;

typedef struct set_texture4
{
    sfTexture* tex_sting;
    sfTexture* tex_web;
    sfTexture* tex_venom;
    sfTexture* tex_hpot;
    sfTexture* tex_appot;
    sfTexture* tex_armor;
    sfTexture* tex_boot;
    sfTexture* tex_textebox;
    sfTexture* tex_bigboss;
    sfTexture* tex_bigplr;
    sfTexture* tex_cbbg2;
    sfTexture* tex_chest;
    sfTexture* tex_deadb;
    sfTexture* tex_cin_d;
    sfTexture* tex_cin_f;
}t_tex4;

typedef struct set_sprite
{
    sfSprite* spr_menu;
    sfSprite* spr_play;
    sfSprite* spr_opt;
    sfSprite* spr_quit;
    sfSprite* spr_audio;
    sfSprite* spr_frame;
    sfSprite* spr_scrmd;
    sfSprite* spr_res;
    sfSprite* spr_back;
    sfSprite* spr_res1;
    sfSprite* spr_res2;
    sfSprite* spr_res3;
    sfSprite* spr_res4;
    sfSprite* spr_frame30;
    sfSprite* spr_frame60;
    sfSprite* spr_frame144;
    sfSprite* spr_fscr;
    sfSprite* spr_money;
}t_spr;

typedef struct set_sprite2
{
    sfSprite* spr_wnd;
    sfSprite* spr_snd;
    sfSprite* spr_msc;
    sfSprite* spr_slct;
    sfSprite* spr_pls;
    sfSprite* spr_mns;
    sfSprite* spr_pls2;
    sfSprite* spr_mns2;
    sfSprite* spr_nbrs;
    sfSprite* spr_nbrs2;
    sfSprite* spr_plr;
    sfSprite* spr_plr2;
    sfSprite* spr_mob1;
    sfSprite* spr_mob2;
    sfSprite* spr_mob3;
    sfSprite* spr_mmap;
    sfSprite* spr_mmhigh;
    sfSprite* spr_inter;
}t_spr2;

typedef struct set_sprite3
{
    sfSprite* spr_town;
    sfSprite* spr_thigh;
    sfSprite* spr_tcol;
    sfSprite* spr_bm;
    sfSprite* spr_bmhigh;
    sfSprite* spr_bmcol;
    sfSprite* spr_bgcbt;
    sfSprite* spr_apbar;
    sfSprite* spr_phpbarf;
    sfSprite* spr_phpbare;
    sfSprite* spr_bhpbarf;
    sfSprite* spr_bhpbare;
    sfSprite* spr_plrfight;
    sfSprite* spr_atqmenu;
    sfSprite* spr_cbmenu;
    sfSprite* spr_qst;
    sfSprite* spr_blk;
    sfSprite* spr_shp;
}t_spr3;

typedef struct set_sprite4
{
    sfSprite* spr_wlc;
    sfSprite* spr_sage;
    sfSprite* spr_boss;
    sfSprite* spr_sting;
    sfSprite* spr_web;
    sfSprite* spr_venom;
    sfSprite* spr_hpot;
    sfSprite* spr_appot;
    sfSprite* spr_armor;
    sfSprite* spr_boot;
    sfSprite* spr_textebox;
    sfSprite* spr_bigboss;
    sfSprite* spr_bigplr;
    sfSprite* spr_cbbg2;
    sfSprite* spr_chest;
    sfSprite* spr_deadb;
    sfSprite* spr_cin_d;
    sfSprite* spr_cin_f;
}t_spr4;

typedef struct set_positions
{
    sfVector2i pos_mouse;
    sfVector2f pos_pls;
    sfVector2f pos_mns;
    sfVector2f pos_pls2;
    sfVector2f pos_mns2;
    sfVector2f pos_nbrs;
    sfVector2f pos_nbrs2;
    sfVector2f pos_gold;
    sfVector2f pos_high;
}t_po;

typedef struct set_positions2
{
    sfVector2f pos_play;
    sfVector2f pos_opt;
    sfVector2f pos_quit;
    sfVector2f pos_audio;
    sfVector2f pos_frame;
    sfVector2f pos_scrmd;
    sfVector2f pos_back;
    sfVector2f pos_textebox;
}t_po2;

typedef struct set_positions3
{
    sfVector2f pos_res;
    sfVector2f pos_res1;
    sfVector2f pos_res2;
    sfVector2f pos_res3;
    sfVector2f pos_res4;
    sfVector2f pos_30;
    sfVector2f pos_60;
    sfVector2f pos_144;
    sfVector2f pos_fscr;
}t_po3;

typedef struct set_positions4
{
    sfVector2f pos_wnd;
    sfVector2f pos_snd;
    sfVector2f pos_msc;
    sfVector2f pos_slct;
    sfVector2f pos_plr;
    sfVector2f pos_mob1;
    sfVector2f pos_mob2;
    sfVector2f pos_mob3;
    sfVector2f pos_qst;
}t_po4;

typedef struct set_positions5
{
    sfVector2f pos_town;
    sfVector2f pos_hp;
    sfVector2f pos_energy;
    sfVector2f pos_atqmenu;
    sfVector2f pos_cbmenu;
    sfVector2f pos_cbplr;
    sfVector2f pos_blk;
    sfVector2f pos_shp;
    sfVector2f pos_wlc;
}t_po5;

typedef struct set_clocks
{
    sfClock* cl_msc;
    sfClock* cl_plr;
    sfClock* cl_mob1;
    sfClock* cl_mob2;
    sfClock* cl_mob3;
    sfClock* cl_rspw;
    sfClock* cl_npc;
    sfClock* cl_boss;
    sfClock* cl_text;
    sfClock* cl_cin_d;
    sfClock* cl_cin_f;
}t_cl;

typedef struct set_rects
{
    sfIntRect rect_nbrs;
    sfIntRect rect_nbrs2;
    sfIntRect rect_plr;
    sfMusic* music;
    sfIntRect rect_npc;
}t_re;

typedef struct set_rects2
{
    sfIntRect re_town;
    sfIntRect rect_mob1;
    sfIntRect rect_mob2;
    sfIntRect rect_mob3;
}t_re2;

typedef struct set_rects3
{
    sfIntRect rect_ap;
    sfIntRect rect_atqmenu;
    sfIntRect rect_cbmenu;
    sfIntRect rect_boss;
}t_re3;

typedef struct set_rects4
{
    sfIntRect rect_phpf;
    sfIntRect rect_bhpf;
    sfIntRect rect_bigp;
    sfIntRect rect_bigb;
}t_re4;

typedef struct set_rects5
{
    sfIntRect re_sting;
    sfIntRect re_venom;
    sfIntRect re_web;
    sfIntRect re_appot;
}t_re5;

typedef struct set_rects6
{
    sfIntRect re_hpot;
    sfIntRect re_armor;
    sfIntRect re_boot;
    sfIntRect re_chest;
    sfIntRect re_cin_d;
    sfIntRect re_cin_f;
}t_re6;

typedef struct set_variables
{
    int cin_d;
    int cin_f;
    int i;
    int b;
    int fd;
    int screen_speed;
    int plr_speed;
    int fight;
    int amenu;
    int ap;
    int hp;
    int bosshp;
    int plrdmg;
    int plrheal;
    int inv;
    float vol_msc;
    float vol_snd;
    int** town_tab;
    int money;
    char* money_txt;
    sfText* money_sftxt;
}t_va;

typedef struct set_variables2
{
    int start;
    int loose;
    int clic;
    int opt;
    int res;
    int scrmd;
    int frame;
    int audio;
    int res1;
    int frame1;
    int scrmd1;
    int scrmode;
    int frmrt;
    int key_z;
    int key_q;
    int key_s;
    int key_d;
    int key_a;
    int key_e;
    long long cnt;
    int map;
    sfVector2u reso;
}t_va2;

typedef struct set_variabes3
{
    int nweb;
    int nsting;
    int nvenom;
    int nhpot;
    int nappot;
    int armor;
    int boots;
    int livemage;
    int liveboss;
    int countup;
}t_va3;

typedef struct set_all
{
    sfEvent event;
    t_po* po;
    t_po2* po2;
    t_po3* po3;
    t_po4* po4;
    t_po5* po5;
    t_cl* cl;
    t_tex* tex;
    t_tex2* tex2;
    t_tex3* tex3;
    t_tex4* tex4;
    t_spr* spr;
    t_spr2* spr2;
    t_spr3* spr3;
    t_spr4* spr4;
    t_va* va;
    t_va2* va2;
    t_va3* va3;
    t_re* re;
    t_re2* re2;
    t_re3* re3;
    t_re4* re4;
    t_re5* re5;
    t_re6* re6;
    t_dia* dia;
    t_acc *acc;
}t_var;

t_var *init_all(sfRenderWindow* wd);
t_po *init_positions(sfRenderWindow* wd);
t_po2 *init_positions2(sfRenderWindow* wd);
t_po3 *init_positions3(sfRenderWindow* wd);
t_po4 *init_positions4(sfRenderWindow* wd);
t_po5 *init_positions5(sfRenderWindow* wd);
t_spr *init_sprite(sfRenderWindow* wd);
t_spr2 *init_sprite2(sfRenderWindow* wd);
t_spr3 *init_sprite3(sfRenderWindow* wd);
t_spr4 *init_sprite4(sfRenderWindow* wd);
t_tex *init_texture(sfRenderWindow* wd);
t_tex2 *init_texture2(sfRenderWindow* wd);
t_tex3 *init_texture3(sfRenderWindow* wd);
t_tex4 *init_texture4(sfRenderWindow* wd);
t_cl *init_clocks(sfRenderWindow* wd);
t_re *init_rects(sfRenderWindow* wd);
t_re2 *init_rects2(sfRenderWindow* wd);
t_re3 *init_rect3(sfRenderWindow *wd);
t_re4 *init_rect4(sfRenderWindow *wd);
t_re5 *init_rect5(sfRenderWindow* wd);
t_re6 *init_rect6(sfRenderWindow* wd);
void handle_event(sfRenderWindow* wd, t_var *var);
void menu(sfRenderWindow* wd, t_var *var);
void menu_opt(sfRenderWindow* wd, t_var *var);
void menu_res(sfRenderWindow* wd, t_var *var);
void menu_frame(sfRenderWindow* wd, t_var *var);
void menu_scrmd(sfRenderWindow* wd, t_var *var, sfVideoMode mode);
void menu_audio(sfRenderWindow* wd, t_var *var);
void game_loop(int ac, char** av, t_acc *acc);
void draw_player(sfRenderWindow *wd, t_var *var);
void destroy_music(sfRenderWindow* wd, t_var *var);
void set_wd_and_music(sfRenderWindow* wd, t_var *var);
void btn_back5(sfRenderWindow* wd, t_var *var);
void change_music2(sfRenderWindow* wd, t_var *var);
void change_sound2(sfRenderWindow* wd, t_var *var);
void btn_back3(sfRenderWindow* wd, t_var *var);
void btn_back(sfRenderWindow* wd, t_var *var);
void menu(sfRenderWindow* wd, t_var *var);
void menu_opt(sfRenderWindow* wd, t_var *var);
void draw_all(sfRenderWindow* wd, t_var *var);
void menu_frame(sfRenderWindow* wd, t_var *var);
void menu_scrmd(sfRenderWindow* wd, t_var *var, sfVideoMode mode);
void btn_back2(sfRenderWindow* wd, t_var *var);
void btn_res4(sfRenderWindow* wd, t_var *var);
void change_res2(sfRenderWindow* wd, t_var *var);
char* get_next_line(int fd);
void cam_up(sfRenderWindow *wd, t_var *var);
void cam_down(sfRenderWindow *wd, t_var *var);
void cam_left(sfRenderWindow *wd, t_var *var);
void cam_right(sfRenderWindow *wd, t_var *var);
void cam(sfRenderWindow *wd, t_var *var);
int check_movment(sfRenderWindow *wd, t_var *var);
void check_atk(sfRenderWindow *wd, t_var *var);
void draw_player(sfRenderWindow *wd, t_var *var);
void draw_all(sfRenderWindow *wd, t_var *var);
void draw_mob(sfRenderWindow* wd, t_var *var);
void player_walk(sfRenderWindow *wd, t_var *var, int type);
int col_up(sfRenderWindow *wd, t_var *var);
int col_down(sfRenderWindow *wd, t_var *var);
int col_left(sfRenderWindow *wd, t_var *var);
int col_right(sfRenderWindow *wd, t_var *var);
void check_mob_hit(sfRenderWindow* wd, t_var *var);
void hit_mob1_bis(sfRenderWindow* wd, t_var *var);
void hit_mob2_bis(sfRenderWindow* wd, t_var *var);
void hit_mob3_bis(sfRenderWindow* wd, t_var *var);
int rand_pos(int minimun, int maximum);
void kill_mob(sfRenderWindow* wd, t_var *var, int type);
void kill_mob_time(sfRenderWindow* wd, t_var *var);
void draw_npc(sfRenderWindow* wd, t_var* var);
sfVector2f move_mob(sfRenderWindow* wd, t_var *var, sfVector2f mob);
void draw_boss(sfRenderWindow* wd, t_var* var);
void draw_fight(sfRenderWindow *wd, t_var *var);
void move_entities(sfRenderWindow* wd, t_var* var);
void draw_mage(sfRenderWindow* wd, t_var* var);
void inventory(sfRenderWindow *wd, t_var *var);
void draw_inv(sfRenderWindow *wd, t_var *var);
void inv_tnp(sfRenderWindow *wd, t_var *var);
void inv_tnp2(sfRenderWindow *wd, t_var *var);
void handle_inventory(sfRenderWindow* wd, t_var *var);
void kill_mob_bis(sfRenderWindow* wd, t_var *var, int type);
void keys_event(sfRenderWindow* wd, t_var *var);
void fight_event(sfRenderWindow* wd, t_var *var);
void fight_event3(sfRenderWindow* wd, t_var *var);
void draw_map1(sfRenderWindow *wd, t_var *var);
void draw_map2(sfRenderWindow *wd, t_var *var);
void draw_map3(sfRenderWindow *wd, t_var *var);
void interact(sfRenderWindow* wd, t_var* var);
void interact_mage(sfRenderWindow* wd, t_var* var);
void interact_boss(sfRenderWindow* wd, t_var* var);
t_dia *init_dia(t_var *var);
void re_init_dia(t_var *var);
void dialog(sfRenderWindow *wd, t_var *var);
t_dia *init_dia(t_var *var);
void re_init_dia(t_var *var);
void init_text_def(t_var *var);
char *init_quete_text(t_var *var);
void p_intro_dialog(sfRenderWindow *wd, t_var *var);
void p_quete_dialog(sfRenderWindow *wd, t_var *var);
void p_kehops_dialog(sfRenderWindow *wd, t_var *var);
void p_seller_dialog(sfRenderWindow *wd, t_var *var);
void print_dialog_box(sfRenderWindow *wd, t_var *var);
char *my_strnncpy(char *dest, char *src, int start, int stop);
char *add_char(char *str, char *src, t_var *var);
void check_stuff(t_var *var);
void set_text_quete(t_var *var, char *str);
char *set_boss_dia(t_var *var);
void p_boss_dialog(sfRenderWindow *wd, t_var *var);
void p_mage_dialog(sfRenderWindow *wd, t_var *var);
void init_stuff(t_var *var);
int create_new_account(t_acc *acc);
int connection_account(t_acc *acc);
int acount(t_acc *acc);
int my_strcmp(char *s1, char *s2);
char *my_revstr(char *str);
char *my_itoa(int a);
char *my_strcat(char *dest, char const *src);
void concatenate(t_var *var);
char *add_extention(char *name);
int compare_file(char *name, t_acc *acc);
char **save_in_tab(int nb, char **buff2, int la);
void draw_player2(sfRenderWindow *wd, t_var *var);
void draw_player_ext(sfRenderWindow *wd, t_var *var);
char* set_text_blk(t_var* var);
char* int_to_str(long long nb);
void draw_intro(sfRenderWindow *wd, t_var *var);
void draw_outro(sfRenderWindow *wd, t_var *var);
void check_end_fight_2(t_var *var);
void check_end_fight(sfRenderWindow* wd, t_var *var);
void keys_event5(sfRenderWindow* wd, t_var *var);
void draw_playerbis(sfRenderWindow *wd, t_var *var);
void p_intro_dialog2(sfRenderWindow *wd, t_var *var, char* text);