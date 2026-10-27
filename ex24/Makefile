# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/23 13:53:20 by jovitor           #+#    #+#              #
#    Updated: 2026/10/23 14:14:33 by jovitor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ./srcs
INCLUDE = ./includes
OBJ = ./obj
MYSRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCFILES = $(addprefix $(SRC)/, $(MYSRC)) #E COMO COLOCAR ./srcs/ft_putchar.c)
OBJFILES = $(addprefix $(OBJ)/, $(MYSRC:%.c=%.o)) #./obj/ft_putchar.o

all: $(NAME)

$(NAME): $(OBJ) | $(OBJFILES)
	ar rcs $(NAME) $(OBJFILES)

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(FLAGS) -c $< -I $(INCLUDE) -o $@

$(OBJ):
	mkdir -p $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all