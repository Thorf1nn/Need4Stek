##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC =	$(wildcard src/*.c) \
		$(wildcard lib/*.c) \

OBJ =	$(SRC:.c=.o)

CFLAGS = -W -Wall -Wextra
NAME = ai

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:    clean
	$(RM) $(NAME)

re:    fclean all
