##
## EPITECH PROJECT, 2018
## makefile
## File description:
## .o
##

SRC	= 	src/my_strcmp.c	\
		src/creation_maze.c	\
		src/utils_creation.c

NAME	=	generator

OBJ	=	$(SRC:.c=.o)

FLAGS =	-Wall -Werror

LIB =

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) main.c $(OBJ) $(LIB) $(FALGS)
	$(MAKE) -f Makefile clean

clean:
	rm -rf $(OBJ)
fclean:		clean
	rm -rf $(NAME)

re:	fclean all
