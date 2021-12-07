# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aechafii <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 19:55:05 by aechafii          #+#    #+#              #
#    Updated: 2021/12/04 20:02:27 by aechafii         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ = ft_printf.c
OBJ = $(SRC:.c=.o)
GCC_FLAGS = -Wall -Wextra -Werror
CC = gcc
HEADER = libftprintf.h
AR = ar rc
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o: %.c $(HEADER)
	$(CC) $(GCC_FLAGS) -c $<
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f  $(NAME)

re: fclean all


