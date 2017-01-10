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

char *slib_fuse(t_string *data, char *fuse, int mode)
{
    int count;
    int cunt;
    char *new;

    new = malloc(sizeof(char *) * (data->len(data) + slib_strlenv(fuse) + 1));
    count = -1;
    while (data->string[++count] != '\0')
        new[count] = data->string[count];
    cunt = -1;
    while (fuse[++cunt] != '\0')
        new[count + cunt] = fuse[cunt];
    new[count + cunt] = '\0';
    if (mode == 1 || mode == 3 || mode == 4)
        free(data->string);
    if (mode == 2 || mode == 3 || mode == 4)
        free(fuse);
    if (mode == 4)
    {
        data->string = new;
        return (NULL);
    }
    return (new);
}