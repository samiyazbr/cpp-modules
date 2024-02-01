CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = ClapTrap

SRC = main.cpp ClapTrap.cpp

OBJ = $(SRC:%.cpp=%.o)

all = $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all re clean fclean