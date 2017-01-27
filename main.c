/*
** header for stringlib in /home/ratouney/cmod
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Wed Nov 30 18:19:49 2016 ratouney
*/

#include <stdio.h>
#include "ratstr.h"

int slib_compare(t_string *data, char *str, int mode)
{
    int count;
    int len;

    count = 0;
    if (slib_strlenv(data->string) > slib_strlenv(str))
        return (2);
    if (slib_strlenv(data->string) < slib_strlenv(str))
        return (1);
    len = (mode == 0 ? data->len(data) : mode);
    while (count < len)
    {
        if (data->string[count] < str[count])
            return (1);
        else if (data->string[count] > str[count])
            return (2);
        else
            count++;
    }
    return (0);
}

int slib_exist(t_string *data, char c)
{
    int count;
    int len;

    count = 0;
    while (data->string[count] != '\0')
    {
        if (data->string[count] == c)
            return (count);
        else
            count++;
    }
    return (-1);
}

int main(int argc, char **argv)
{
    char *temp = my_strpaste(argv[1], 0);

    t_string *str = slib_newstr(temp, 1);

    
    int rt = str->cmp(str, "Hello", 0);
    int tr = stcp(str, "Hello", 0);

    delstr(str);

    return (0);
}
