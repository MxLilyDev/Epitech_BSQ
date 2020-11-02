##
## EPITECH PROJECT, 2019
## CPE_BSQ_2019
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/puts.c	\
		src/utils.c	\
		src/make_array.c	\
		src/search_square.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

RM	=	rm -rf

CFLAGS	=	-Wall -Wextra -g3 -I include

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(OBJ)

re: fclean all