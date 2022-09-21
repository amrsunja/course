# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 11:56:03 by aazdoev           #+#    #+#              #
#    Updated: 2022/09/21 11:56:04 by aazdoev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"

all:
	@gcc -c -Wall -Wextra -Werror ft_[!l]*.c
	@ar rcs libft.a *.o
	
clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: fclean
	@gcc -c -Wall -Wextra -Werror *.c
	@ar rcs libft.a *.o
