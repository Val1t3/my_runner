##
## EPITECH PROJECT, 2021
## B-MUL-100-LYN-1-1-myrunner-valentin.woehrel
## File description:
## Makefile
##

SRC		=	$(wildcard ./sources/*.c)

OBJ		=	$(SRC:.c=.o)

NAME	=	my_runner

CFLAGS	=	-lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

all	: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
