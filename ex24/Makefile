# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltayra-y <ltayra-y@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 14:56:23 by ltayra-y          #+#    #+#              #
#    Updated: 2024/10/09 16:26:04 by ltayra-y         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Header
NAME = libft.a
SRC_DIR = srcs
INC_DIR = includes

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./$(INC_DIR)

# List of Files and Objects
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(SRC_FILES:.c=.o)

# CC Rules
all: $(NAME)

$(NAME): $(OBJ_FILES)
	@ar rcs $@ $^

%.o: $(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Cleaning Rules
clean:
	@rm -f $(OBJ_FILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all

#Special Directives
.PHONY: all clean fclean re