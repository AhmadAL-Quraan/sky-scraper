NAME = rush-01

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c no_duplication.c valid_rules.c print_puzzle.c solve_puzzle.c check_left_right.c check_up_down.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
