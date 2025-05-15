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

LIBFT = Libft/libft.a
PRINTF = Printf/libftprintf.a

CC = cc
CCFLAGS = cc -Wall -Werror -Wextra

SERVER = server
CLIENT = client
SRCS_SERVER = server.c
SRCS_CLIENT = client.c

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)


all: $(SERVER) $(CLIENT)

$(SERVER) $(CLIENT): $(OBJS_SERVER) $(OBJS_CLIENT) $(LIBFT) $(PRINTF)
		${CCFLAGS} ${OBJS_SERVER} Libft/libft.a Printf/libftprintf.a -o ${SERVER}
		${CCFLAGS} ${OBJS_CLIENT} Libft/libft.a Printf/libftprintf.a -o ${CLIENT}

$(LIBFT):
		make -C Libft/

$(PRINTF):
		make -C Printf/

clean:	
		make clean -C Libft/
		make clean -C Printf/
		rm -rf ${OBJS_SERVER} ${OBJS_CLIENT} 
		
fclean:	clean
		make fclean -C Libft/
		make fclean -C Printf/
		rm -rf $(SERVER) $(CLIENT)

re:	fclean all