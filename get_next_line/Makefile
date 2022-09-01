NAME = runner
CFLAGS = -Wall -Werror -Wextra
CC = gcc

RM = rm -f
FILES = get_next_line.c get_next_line_utils.c

run:
	$(CC) $(FILES) -o $(NAME)
	@echo "----------------OUTPUT---------------->"
	@./$(NAME)

clean:
	$(RM) $(NAME)