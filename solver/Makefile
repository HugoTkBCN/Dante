##
## EPITECH PROJECT, 2018
## makefile
## File description:
## .o
##

SRC	=	src/my_strcmp.c	\
		src/get.c	\
		src/load_2d_arr_from_file.c	\
		src/my_strdup.c	\
		src/my_strlen.c	\
		src/solver.c	\
		src/my_strcpy.c	\
		src/mem_alloc.c

NAME	=	solver

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
