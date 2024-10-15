# Author: Jonnathan Lacerda Santos
# Email: jlacerda@student.42.fr

NAME = libft.a
SOURCE_DIR = srcs
INCLUDES_DIR = includes

SOURCES = $(wildcard $(SOURCE_DIR)/*.c)
INCLUDES = -I $(INCLUDES_DIR)
OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

test:	all
	$(CC) $(CFLAGS) tests/*.c -L. -lft -o test
	./test
	rm -f test