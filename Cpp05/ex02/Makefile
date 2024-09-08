NAME = form

SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@c++ -o $(NAME) $(CPPFLAGS) $(OBJ)

clean:
	@rm -rf $(OBJ)
	@ rm -rf home_shrubbery

fclean: clean
	@rm -f $(NAME)

re: fclean all
