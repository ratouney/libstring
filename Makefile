##
## Makefile for dmfkgjldfkgjf in /home/ratouney/CPool_Day10
## 
## Made by ratouney ratouney
## Login   <ratouney@epitech.net>
## 
## Started on  Fri Oct 14 09:36:54 2016 ratouney ratouney
## Last update Mon Oct 17 11:11:10 2016 ratouney ratouney
##

SRC	=	delstr.c		\
		my_strpaste.c		\
		slib_fuse.c		\
		slib_newstr.c		\
		slib_show.c		\
		slib_strlen.c		\
		slib_strlenv.c		\
		slib_strpaste.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libratstring.a

HEADER	=	ratstr.h

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	make clean

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

test:
	gcc -g *.c

re:	fclean all
