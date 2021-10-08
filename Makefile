##
## EPITECH PROJECT, 2019
## my_rpg
## File description:
## my_rpg makefile
##

SRC	=	*.c			\

NAME	=	my_rpg

all: $(NAME)

$(NAME):
	@gcc $(SRC) -w -o $(NAME) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

clean:
	@rm -f $(NAME)

fclean:
	@rm -f $(NAME)

re:	fclean all
