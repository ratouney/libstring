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

char *slib_strsl(t_string *data, int from, int to)
{
    int count;
    int min;
    int max;
    char *new;

    if (to <= from && to != 0)
        return (NULL);
    min = (from >= 0 ? from : 0);
    if (to == 0)
        max = data->len(data);
    else
        max = (to <= data->len(data) ? to : data->len(data));
    new = malloc(sizeof(char) * (max - min + 2));
    count = -1;
    while (++count + min < max)
        new[count] = data->string[count + min];
    new[count] = '\0';
    return (new);
}

int main(int argc, char **argv)
{
    char *temp = my_strpaste(argv[1], 0);

    t_string *str = slib_newstr(temp, 1);

    str->show(str, 2);
    char *line = str->sl(str, 5, 0);
    printf("Line : [%s]\n", line);

    free(line);
    delstr(str);

    return 0;
}
