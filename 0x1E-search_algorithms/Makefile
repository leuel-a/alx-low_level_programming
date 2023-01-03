# -*- Makefile -*-
#
# Constants
CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
SRC = 0-linear.c 1-binary.c main.c
OBJ = $(SRC:.c=.o)
NAME = school
RM = rm

# Rules
all: search_algos.h $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

.PHONY: clean oclean fclean re

clean:
	$(RM) $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean

re: fclean all
