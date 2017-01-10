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


int slib_strlen(t_string *data)
{
    int count;

    count = 0;
    while (data->string[count] != '\0')
        count++;
    return (count);
}