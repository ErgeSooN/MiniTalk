# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayman <ayaman@student.42kocaeli.com.tr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/09 17:24:49 by ayman             #+#    #+#              #
#    Updated: 2022/08/09 17:44:29 by ayman            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
SERVER = server
CLIENT = client

all: $(SERVER) $(CLIENT)

$(SERVER):
	$(CC) $(CFLAGS) server.c libftf.c -o $(SERVER)

$(CLIENT):
	$(CC) $(CFLAGS) client.c libftf.c -o $(CLIENT)

clean:
	@rm -rf server client

fclean: clean

re: fclean all