# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 13:21:21 by diade-so          #+#    #+#              #
#    Updated: 2024/11/08 19:47:37 by diade-so         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_NAME = libft.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

OPTION = -I includes

SRC =	./srcs/ft_putchar.c \
	./srcs/ft_putstr.c \
	./srcs/ft_strcmp.c \
	./srcs/ft_strlen.c \
	./srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(LIB_NAME) 

$(LIB_NAME): $(OBJ)
	ar rcs $(LIB_NAME) $(OBJ)

%.o: ./srcs/%.c
	$(CC) $(FLAGS) $(OPTION) -c $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIB_NAME)

re: fclean all

.PHONY: all clean fclean re
