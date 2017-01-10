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

int main(int argc, char **argv)
{

    char *temp = my_strpaste(argv[1], 0);
    char *yolo = my_strpaste(argv[2], 0);

    t_string *str = slib_newstr(temp, 1);
    char *line = str->copy(str, 10);
    str->fuse(str, yolo, 4);

    printf("Len : %d\n", str->len(str));
    str->show(str, 2);

    free(line);
    delstr(str);

    return 0;
}
