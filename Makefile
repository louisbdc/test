##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## my_hunter
##

SRC	=	$(shell find . -name '*.c')

##RC		=	main.c	\
			mainloop.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

all:	$(NAME)

$(NAME):
	gcc $(SRC) -Wall -Wextra -I include -o $(NAME) -g3 -l csfml-graphics

clean:
	@rm -f $(OBJ)
	@rm -f vgcore.*
	@rm -f src/*.o

fclean:	clean
	@rm -f $(NAME)

re:	fclean all
