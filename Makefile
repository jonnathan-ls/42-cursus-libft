# Author: Jonnathan Lacerda Santos
# Email: jlacerda@student.42.fr

NAME = libft.a

SOURCES = $(wildcard ./*.c)
INCLUDES = -I .
OBJECTS = $(SOURCES:.c=.o)

BONUS_SOURCES = $(wildcard ./*_bonus.c)
BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

bonus: $(BONUS_OBJECTS)
	ar rcs $(NAME) $(BONUS_OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all bonus

.PHONY: all clean fclean re
