/*
** EPITECH PROJECT, 2019
** get_next_line
** File description:
** get_next_line.h
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#ifndef READ_SIZE
#define READ_SIZE (2)
#endif

int my_strlen(const char *s);
char *my_strcat2(char *dest, char *src);
char *my_memset(char *str, char c, int size);
char* clean_buff(char* buff);
char *get_next_line(int fd);