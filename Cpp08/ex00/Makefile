NAME = easyfind

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

SRCS = main.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) easyfind.hpp
	$(CC) $(OBJ) $(CPPFLAGS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
