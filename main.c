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

int main(int argc, char **argv)
{
    char *temp = my_strpaste(argv[1], 0);

    t_string *str = slib_newstr(temp, 1);

    str->show(str, 2);
    char *line = str->sl(str, 5, 0);
    printf("Line : [%s]\n", line);

    free(line);
    delstr(str);

    return (0);
}
