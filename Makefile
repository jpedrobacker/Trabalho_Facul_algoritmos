CC = gcc
FLAGS = -Wall -Werror -Wextra
SRCS = main.c sort.c utils.c
NAME = project

all: $(NAME)

$(NAME): $(SRCS)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all
