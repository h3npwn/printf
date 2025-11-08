# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abahja <abahja@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/03 13:00:24 by abahja            #+#    #+#              #
#    Updated: 2024/12/23 13:48:33 by abahja           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS := srcs/ft_printf.c srcs/ft_printhex.c srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_putstr.c

OBJS := $(SRCS:.c=.o)

CFLAGS := -Wall -Wextra -Werror

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

.PHONY: all clean fclean re

all: $(NAME)
	@echo "$"                                                                                         \033[1;36m------matnsach dir clean by abahja{h3nix}------\n$(RESET)"

bonus: $(OBJSB)
	ar -crs $(NAME) $^

$(NAME): $(OBJS)
	ar -crs $@ $^

%.o: %.c
	@echo "||$(RED)tiki taka-->>$(GREEN)" $< "<--\033[1;36mbroski wait$(BLUE)|| \n |> ------cmd-------->"
	cc $(CFLAGS) -c $< -o $@

clean:
	@echo "$(YELLOW)                                                                                             <-Safi b7->\n$(RESET)"
	rm -f $(OBJSB) $(OBJS)


fclean: clean
	rm -f $(NAME)

re: fclean all re