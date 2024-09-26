NAME = iter

CC = c++

SOURCES = main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJECTS) iter.hpp
	$(CC) $(OBJECTS) $(CPPFLAGS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
