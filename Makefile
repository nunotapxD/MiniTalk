# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntomas-a <ntomas-a@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/28 02:46:59 by ntomas-a          #+#    #+#              #
#    Updated: 2025/01/28 02:46:59 by ntomas-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = client server

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_CLIENT = client.c
SRC_SERVER = server.c

OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
OBJ_SERVER = $(SRC_SERVER:.c=.o)

all: $(NAME)

client: $(OBJ_CLIENT)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) -o client

server: $(OBJ_SERVER)
	$(CC) $(CFLAGS) $(OBJ_SERVER) -o server

clean:
	rm -f $(OBJ_CLIENT) $(OBJ_SERVER)

fclean: clean
	rm -f client server

re: fclean all

.PHONY: all clean fclean re