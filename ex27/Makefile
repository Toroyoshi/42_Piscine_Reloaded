# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/23 13:53:20 by jovitor           #+#    #+#              #
#    Updated: 2026/10/23 15:02:15 by jovitor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = cc
FLAGS = -Wall -Wextra -Werror
DISP = ft_display_file.c
NAMEO = $(DISP:.c=.o)

all: $(NAME)

$(NAME): $(NAMEO)
	$(CC) $(FLAGS) -o $@ $<

clean:
	rm -rf $(NAMEO)

fclean: clean
	rm -rf $(NAME)

re: fclean all