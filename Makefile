# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astefans <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/09 17:08:57 by astefans          #+#    #+#              #
#    Updated: 2024/03/18 13:44:03 by astefans         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = libftprintf.a
SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putpointer.c ft_putunsignint.c ft_puthex.c
OBJ = $(SRC:.c=.o)
all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean $(NAME)

.PHONY: all clean fclean re
