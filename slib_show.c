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

void slib_show(t_string *data, int mode)
{
    if (mode == 0)
        write(1, data->string, data->len(data));
    else if (mode == 1)
    {
        write(1, "String : [", 10);
        write(1, data->string, data->len(data));
        write(1, "]", 1);
    }
    else if (mode == 2)
    {
        write(1, "String : [", 10);
        write(1, data->string, data->len(data));
        write(1, "]\n", 2);
    }
}