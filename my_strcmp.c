/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** recode fonction ls
*/

int my_strcmp(char *s1, char *s2)
{
    for (; *s1 == *s2; ++s1, ++s2)
        if (*s1 == 0)
            return 0;
    return *(unsigned char *)s1 < *(unsigned char *)s2 ? -1 : 1;
}