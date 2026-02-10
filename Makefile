CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(LIBFT_DIR)
NAME = pipex
SRCS = main.c command_exec.c path_search.c free.c
OBJS = $(SRCS:.c=.o)

LIBFT_DIR = ./libft
LIBFT = -L $(LIBFT_DIR) -lft

all: $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
