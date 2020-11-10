##
## EPITECH PROJECT, 2018
## makefile
## File description:
## .o
##

NAME = tournament

all:	$(NAME)

$(NAME):
	cd solver/; $(MAKE) -f Makefile
	cd generator/; $(MAKE) -f Makefile

clean:
	cd solver/; $(MAKE) -f Makefile clean
	cd generator/; $(MAKE) -f Makefile clean

fclean:		clean
	cd solver/; $(MAKE) -f Makefile fclean;
	cd generator/; $(MAKE) -f Makefile fclean;

re:	fclean all
