NAME = span

CC = c++

SOURCES = main.cpp Span.cpp

OBJECTS = $(SOURCES:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

all: $(NAME)

$(NAME): $(OBJECTS) Span.hpp
	$(CC) $(OBJECTS) $(CPPFLAGS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
