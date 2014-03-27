##
## Makefile for Makefile in /home/rosey_c/rendu/MUL_2013_fdf
##
## Made by rosey
## Login   <rosey_c@epitech.net>
##
## Started on  Sun Dec  8 20:24:48 2013 rosey
## Last update Thu Jan  9 12:03:54 2014 clément
##

SRC	= pixel.c \
	  wolf.c

NAME	= pixel

CC	= cc

OBJ	= $(SRC:.c=.o)

LIB	= -L/usr/lib64 -lmlx -L/usr/lib64/X11 -lXext -lX11

RM	= rm -f

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

all:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all
