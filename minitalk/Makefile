# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 09:59:00 by aazdoev           #+#    #+#              #
#    Updated: 2022/09/21 11:59:19 by aazdoev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	@cd ft_printf && make all
	@gcc -Wall -Wextra -Werror src/server.c ft_printf/libftprintf.a -o server
	@gcc -Wall -Wextra -Werror src/client.c ft_printf/libftprintf.a -o client

clean:
	@cd ft_printf && make clean
	@rm -f server
	@rm -f client

fclean: clean
	@cd ft_printf && make fclean

re: fclean all

bonus: fclean
	@cd ft_printf && make all
	@gcc -Wall -Wextra -Werror "bonus_src/server_bonus.c" ft_printf/libftprintf.a -o server
	@gcc -Wall -Wextra -Werror "bonus_src/client_bonus.c" ft_printf/libftprintf.a -o client 
