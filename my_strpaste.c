/*
** header for stringlib in /home/ratouney/cmod
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Wed Nov 30 18:19:49 2016 ratouney
*/

#include "ratstr.h"

char *my_strpaste(char *str, int mode)
{
    int count;
    char *new;

    new = malloc(sizeof(char) * (slib_strlenv(str) + 1));
    count = -1;
    while (str[++count] != '\0')
        new[count] = str[count];
    new[count] = '\0';
    if (mode == 1)
        free(str);
    return (new);
}