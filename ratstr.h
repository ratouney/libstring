/*
** header for stringlib in /home/ratouney/cmod
**
** Made by ratouney ratouney
** Login   <ratouney@epitech.net>
**
** Started on  Thu Oct  6 13:49:57 2016 ratouney ratouney
** Last update Wed Nov 30 18:19:49 2016 ratouney
*/

#ifndef unst_h_
#define unst_h_
#include <unistd.h>
#endif /* !unst_h_ */

#ifndef stli_h
#define stli_h_
#include <stdlib.h>
#endif /* !stli_h */

#ifndef ratstring_h_
#define ratstring_h_

#include <stdio.h>

struct s_string;

typedef struct s_string t_string;

struct s_string
{
    char *string;

    int (*len)(t_string *);
    char *(*copy)(t_string *, int);
    char *(*fuse)(t_string *, char *, int);
    char *(*sl)(t_string *, int, int);
    void (*show)(t_string *, int);
};

int slib_strlenv(char *str);
char *my_strpaste(char *str, int mode);
int slib_strlen(t_string *data);
char *slib_strpaste(t_string *data, int mode);
char *slib_fuse(t_string *data, char *fuse, int mode);
void slib_show(t_string *data, int mode);
char *slib_strsl(t_string *data, int from, int to);
t_string *slib_newstr(char *str, int mode);
char *slib_strsl(t_string *data, int from, int to);
void *delstr(t_string *data);

#endif /* !ratstring_h_ */