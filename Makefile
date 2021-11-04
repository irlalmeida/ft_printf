# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/09 14:30:09 by iribeiro          #+#    #+#              #
#    Updated: 2021/11/03 22:57:11 by iribeiro         ###   ########.fr        #
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
		make -C iribeiro-libft
		cp iribeiro-libft/libft.a $(NAME)
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