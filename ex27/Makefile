# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltayra-y <ltayra-y@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/10 15:09:08 by ltayra-y          #+#    #+#              #
#    Updated: 2024/10/10 17:44:21 by ltayra-y         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Header
NAME = ft_display_file

CC = gcc
CFLAG = -Wall -Wextra -Werror

# List of Files and Objects
SRC_FILE = ft_display_file.c
OBJ_FILE = $(SRC_FILE:.c=.o)

# CC Rules
all: $(NAME)

$(NOME): $(OBJ_FILE)
	$(CC) $(CFLAG) -o $(NAME) $(OBJ_FILE)

# Cleaning Rules
clean:
	rm -f $(OBJ_FILE)

fclean: clean
	rm -f $(NAME)