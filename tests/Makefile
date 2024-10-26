# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 20:44:31 by jlacerda          #+#    #+#              #
#    Updated: 2024/10/26 20:20:43 by jlacerda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test
CC = cc
CFLAGS = -Wall -Wextra -Werror

all:
	cd .. && make
	$(CC) $(CFLAGS) *.c -L .. -lft -lbsd -o test
	./$(NAME)

clean:
	cd .. && make clean
	rm -f $(NAME)

.PHONY: all clean
