/*
** EPITECH PROJECT, 2019
** event
** File description:
** all events handling fcts for my_rpg
*/

#include "struct.h"

char *my_revstr(char *str)
{
    int nb = 0;
    int i = my_strlen(str) - 1;

    while (nb < i) {
        int nb2 = str[nb];
        str[nb] = str[i];
        str[i] = nb2;
        nb++;
        i--;
    }
    return (str);
}

char *my_itoa(int a)
{
    char *str = my_memset(str, '\0', a+1);
    char *cp = my_memset(cp, '\0', a+1);
    int b = a;

    for (int j = 0; a != 0; j++) {
        str[j] = (a % 10) + 48;
        a = a / 10;
    }
    cp = my_revstr(str);
    return (cp);
}

char *add_neg(int a, char *number)
{
    char *new = malloc(sizeof(char) * a);
    new = my_strcat(new, "-");
    new = my_strcat(new, number);
    number = malloc(sizeof(char) * (my_strlen(new)+1));
    number = my_strcat(number, new);
    return (number);
}

char **save_in_tab(int nb, char **buff2, int la)
{
    char *number = my_memset(number, '\0', 20);
    int a = 0;
    int n = 0;
    if (nb < 0) {
        nb *= -1;
        n = 1;
    }
    if (nb == 0 && (a = 1) != 1){
        number = "0";
    } else {
        number = my_itoa(nb);
        a = my_strlen(number);
        if (n == 1)
            number = add_neg(a++, number);
    }
    buff2[la] = my_memset(buff2[la], '\0', 20);
    for (int i = 0; number[i] != '\0'; i++) {
        buff2[la][i] = number[i];
    }
    return (buff2);
}