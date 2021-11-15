# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/09 14:30:09 by iribeiro          #+#    #+#              #
#    Updated: 2021/11/15 00:57:12 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = *.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
INCLUDES = ft_printf.h

all: $(NAME)

$(NAME): $(SRC)
		rm -f $(NAME)
		@gcc $(CFLAGS) -c $(SRC) 
		@ar rc $(NAME) $(OBJ)

clean: 
		rm -f $(OBJ) a.out

fclean: clean
		rm -f $(NAME)

re: fclean all

git: 
	@git add .
	@git commit -m "$m"
	@git push

.PHONY: 	all clean fclean re