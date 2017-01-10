/*
** header for stringlib in /home/ratouney/cmod
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Wed Nov 30 18:19:49 2016 ratouney
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

struct s_string;

typedef struct s_string t_string;

struct s_string
{
    char *string;

    int (*len)(t_string *);
    char *(*copy)(t_string *, int);
    char *(*fuse)(t_string *, char *, int);
    void (*show)(t_string *, int);
};