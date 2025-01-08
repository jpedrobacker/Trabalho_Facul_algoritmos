CC = gcc
FLAGS = -Wall -Werror -Wextra
SRCS = main.c radix.c utils.c
NAME = project

all: $(NAME)

$(NAME): $(SRCS)
		$(CC) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all
