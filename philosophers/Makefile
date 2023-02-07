# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 11:59:32 by aazdoev           #+#    #+#              #
#    Updated: 2023/02/06 11:59:34 by aazdoev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	philo

CC		=	gcc
INCLUDE	=	includes
CFLAGS	=	-Wall -Wextra -Werror -I$(INCLUDE)
RM		=	rm -f

SRCS	=	philosophers.c \
			srcs/utils.c \
			srcs/atoitoa.c \
			srcs/init.c \
			srcs/philo_functions.c \
			srcs/threads.c

OBJS	=	$(SRCS:%.c=%.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo "Linked into executable \033[0;32mphilo\033[0m."

.c.o:
			@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
			@echo "Compiling $<."

clean:
			@$(RM) $(OBJS)
			@echo "Removed object files."
			
fclean:		clean
			@$(RM) $(NAME)
			@echo "Removed executable."

re:			fclean all

.PHONY:		all clean fclean re
