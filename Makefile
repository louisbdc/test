##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

CC	=	gcc

SRC	=	printf.c	\
		my_put_nbr.c    \
		my_strlen.c     \
		my_revstr.c     \
		my_putchar.c    \

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-W -Wall -I ./include/ -g3

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
