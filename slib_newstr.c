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

t_string *slib_newstr(char *str, int mode)
{
    t_string *data;

    data = malloc(sizeof(t_string));
    data->string = my_strpaste(str, mode);
    data->len = slib_strlen;
    data->copy = slib_strpaste;
    data->fuse = slib_fuse;
    data->show = slib_show;
    data->sl = slib_strsl;
    return (data);
}