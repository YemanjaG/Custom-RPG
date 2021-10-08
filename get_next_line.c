/*
** EPITECH PROJECT, 2019
** get_next_line
** File description:
** fonction who return next line
*/

#include "get_next_line.h"

int my_strlen(const char *s)
{
    if (!s)
        return (0);
    int i = 0;
    for (; s[i]; i++);
    return (i);
}

char *my_strcat2(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    int a = 0;
    char* res;
    if (dest != NULL)
        for (i = 0; dest[i] != '\0'; i++);
    for (j = 0; src[j] != '\0'; j++);
    res = malloc(sizeof(char) * (i + j) + 1);
    for (int k = 0; k != i; res[k] = dest[k], k++){
        if (dest[k] == '\n')
            return res;
    }
    for (; src[a] != '\0'; res[i] = src[a], a++, i++){
        if (src[a] == '\n'){
            i++;
            break;
        }
    }
    res[i] = '\0';
    return (res);
}

char *my_memset(char *str, char c, int size)
{
    if ((str = malloc(sizeof(char) * size)) == NULL)
        return (NULL);
    for (int i = 0; i != size; i++)
        str[i] = c;
    return (str);
}

char* clean_buff(char* buff)
{
    for (int i = 0; buff[i] != '\n' || buff[i] != '\0'; i++){
        if (buff[i] == '\n'){
            return &buff[i + 1];
        } else if (buff[i] == '\0')
            break;
    }
    return buff;
}

char* get_next_line(int fd)
{
    static char* buff; static int pos = 0;
    static int len = -2; char* ret = NULL;
    for (pos; 1; pos++){
        if (len <= pos && fd >= 0 && READ_SIZE > 0 && len != -1){
            pos = 0;
            buff = malloc(sizeof(char) * READ_SIZE + 1);
            my_memset(buff, '\0', READ_SIZE + 1);
            len = read(fd, buff, READ_SIZE);
        }
        if (len == 0 || fd < 0 || READ_SIZE < 1 || len == -1)
            return ret;
        if (buff[pos] == '\n' || buff[pos] == '\0'){
            ret = my_strcat2(ret, buff);
            buff = clean_buff(buff);
            len = my_strlen(buff);
            pos = 0;
            return ret;
        } else if (pos == len - 1)
            ret = my_strcat2(ret, buff);
    }
}