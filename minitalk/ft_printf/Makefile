# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 11:45:15 by aazdoev           #+#    #+#              #
#    Updated: 2022/09/21 11:45:16 by aazdoev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libftprintf.a"

FILES = ft_hexitoa.c	ft_printf.c	ft_uitoa.c

OBJECTS = ft_hexitoa.o	ft_printf.o	ft_uitoa.o

all:
	@gcc -c -Wall -Wextra -Werror $(FILES)
	@cd libft && make all
	@ar rcs $(NAME) $(OBJECTS) libft/*.o
	
clean:
	@rm -f $(OBJECTS)
	@cd libft && make clean

fclean: clean
	@rm -f $(NAME)
	@cd libft && make fclean

re: fclean all 
