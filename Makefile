# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antferna <antferna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 13:05:04 by antferna          #+#    #+#              #
#    Updated: 2023/05/04 17:49:58 by antferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putptr.c ft_putnbr.c\
ft_putuint.c ft_puthex.c

OBJ = $(SRC:.c=.o)

HEADER = ft_printf.h

CFLAGS = -Wall -Wextra -Werror
CC = gcc
RM = rm -f
AR = ar rcs

all: $(NAME)
$(NAME): $(OBJ) $(HEADER)
	$(AR) $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re