# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diade-so <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/09 17:49:51 by diade-so          #+#    #+#              #
#    Updated: 2024/11/09 18:18:43 by diade-so         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Werror -Wextra

NAME = ft_display_file

SRC = ft_display_file.c

OBJ = ft_display_file.o

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ) $(NAME)

fclean: 
	rm -f $(NAME)

.PHONY: all clean fclean
