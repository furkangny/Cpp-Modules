NAME = MutantStack

CC = c++

SOURCES = main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

all: $(NAME)

$(NAME): $(OBJECTS) MutantStack.hpp
	$(CC) $(OBJECTS) $(CPPFLAGS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
