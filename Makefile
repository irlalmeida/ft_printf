# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/09 14:30:09 by iribeiro          #+#    #+#              #
#    Updated: 2021/06/15 22:52:56 by iribeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = *.c 
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
INCLUDES = ft_printf.h

all: $(NAME)

$(NAME): $(INCLUDES)
		@gcc $(CFLAGS) -c $(SRC)
		@ar rc $(NAME) $(OBJ)

clean: 
		rm -f $(OBJ) a.out

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: 	all clean fclean re