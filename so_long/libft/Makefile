# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 11:17:23 by aazdoev           #+#    #+#              #
#    Updated: 2023/01/24 11:17:24 by aazdoev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a

SRCS 		= ft_pourcentdi.c \
				ft_pourcentp.c \
				ft_pourcents.c \
				ft_pourcenttwice.c \
				ft_pourcentu.c \
				ft_pourcentx.c \
				ft_pourcentupperx.c \
				ft_printf.c \
				ft_putchar.c \
				get_next_line_utils.c \
				get_next_line.c \
				ft_atoi.c \
				ft_itoa.c 


OBJS	= $(SRCS:%.c=%.o)

HEADER	= libft.h

##FLAGS	= -Wall -Werror -Wextra

.SILENT : $(OBJS)

$(NAME):
		gcc -c $(SRCS) -I ./includes
		ar rc $(NAME) $(OBJS)
.SILENT : $(OBJS) $(NAME)
all: $(NAME)

clean:
		/bin/rm -f $(OBJS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
