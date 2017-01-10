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

int my_strlen(char *str)
{
    int count;

    count = 0;
    while (str[count] != '\0')
        count++;
    return (count);
}

char *my_concatenate(char *str1, char *str2, int mode)
{
    int count;
    int cunt;
    char *new;

    new = malloc(sizeof(char) * (my_strlen(str1) + my_strlen(str2) + 1));
    count = -1;
    while (str1[++count] != '\0')
        new[count] = str1[count];
    cunt = -1;
    while (str2[++cunt] != '\0')
        new[count + cunt] = str2[cunt];
    new[count + cunt] = '\0';
    if (mode == 1)
        free(str1);
    else if (mode == 2)
        free(str2);
    else if (mode == 3)
    {
        free(str1);
        free(str2);
    }
    return (new);
}

char *my_strpaste(char *str, int mode)
{
    int count;
    char *new;

    new = malloc(sizeof(char) * (my_strlen(str) + 1));
    count = -1;
    while (str[++count] != '\0')
        new[count] = str[count];
    new[count] = '\0';
    if (mode == 1)
        free(str);
    return (new);
}

int slib_strlen(t_string *data)
{
    int count;

    count = 0;
    while (data->string[count] != '\0')
        count++;
    return (count);
}

char *slib_strpaste(t_string *data, int mode)
{
    int count;
    int len;
    char *new;

    count = 0;
    len = (mode == 0 ? data->len(data) : (mode > data->len(data) ? data->len(data) : mode));
    new = malloc(sizeof(char) * (len + 1));
    while (count < len)
    {
        new[count] = data->string[count];
        count++;
    }
    new[count] = '\0';
    return (new);
}

char *slib_fuse(t_string *data, char *fuse, int mode)
{
    int count;
    int cunt;
    char *new;

    new = malloc(sizeof(char *) * (data->len(data) + my_strlen(fuse) + 1));
    count = -1;
    while (data->string[++count] != '\0')
        new[count] = data->string[count];
    cunt = -1;
    while (fuse[++cunt] != '\0')
        new[count + cunt] = fuse[cunt];
    new[count + cunt] = '\0';
    if (mode == 0)
        return (new);
    if (mode == 1)
    {
        free(data->string);
        return (new);
    }
    if (mode == 2)
    {
        free(fuse);
        return (new);
    }
    if (mode == 3)
    {
        free(data->string);
        free(fuse);
        return (new);
    }
    if (mode == 4)
    {
        free(data->string);
        free(fuse);
        data->string = new;
        return ("ok");
    }
}

void slib_show(t_string *data, int mode)
{
    if (mode == 0)
        write(1, data->string, data->len(data));
    else if (mode == 1)
    {
        write(1, "\nString : [", 11);
        write(1, data->string, data->len(data));
        write(1, "]", 1);
    }
    else if (mode == 2)
    {
        write(1, "\nString : [", 11);
        write(1, data->string, data->len(data));
        write(1, "]\n", 2);
    }
}

t_string *newstr(char *str, int mode)
{
    t_string *data;

    data = malloc(sizeof(t_string));
    data->string = my_strpaste(str, mode);
    data->len = slib_strlen;
    data->copy = slib_strpaste;
    data->fuse = slib_fuse;
    data->show = slib_show;
    return (data);
}

void *delstr(t_string *data)
{
    free(data->string);
    free(data);
}

int main(int argc, char **argv)
{

    char *temp = my_strpaste(argv[1], 0);
    char *yolo = my_strpaste(argv[2], 0);

    t_string *str = newstr(temp, 1);
    char *line = str->copy(str, 10);
    str->fuse(str, yolo, 4);

    printf("Len : %d\n", str->len(str));
    str->show(str, 2);

    free(line);
    delstr(str);

    return 0;
}
