NAME = libft.a
RUN_MAIN_FILE_NAME = main.c
RUN_OUT_FILE_NAME = librun
CFLAGS = -Wall -Werror -Wextra
CC = gcc

RM = rm -f
AR = ar rc
RN = ranlib

FILES = isalpha.c memset.c bzero.c memcpy.c memmove.c strlcpy.c \
				strlen.c calloc.c

OBJS = $(FILES:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	${AR} ${NAME} ${OBJS}
	${RN} ${NAME}

run:
	$(CC) $(RUN_MAIN_FILE_NAME) $(NAME) -o $(RUN_OUT_FILE_NAME)
	@echo "----------------OUTPUT---------------->"
	@./$(RUN_OUT_FILE_NAME)

runmain:
	$(CC) $(RUN_MAIN_FILE_NAME) -o $(RUN_OUT_FILE_NAME)
	@echo "----------------OUTPUT---------------->"
	@./$(RUN_OUT_FILE_NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(RUN_OUT_FILE_NAME)

re: fclean all

.PHONY: all fclean clean re run
