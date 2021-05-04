NAME = megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	clang++ -Wall -Wextra -Werror $^ -o $@

%.o: %.c
	clang++ -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
