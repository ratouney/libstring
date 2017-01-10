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

char *slib_strpaste(t_string *data, int mode)
{
    int count;
    int len;
    char *new;

    count = 0;
    len = (mode == 0 ? data->len(data) : (mode > data->len(data)
                                              ? data->len(data)
                                              : mode));
    new = malloc(sizeof(char) * (len + 1));
    while (count < len)
    {
        new[count] = data->string[count];
        count++;
    }
    new[count] = '\0';
    return (new);
}