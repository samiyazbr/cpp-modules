# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samiyazubair <samiyazubair@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/05 21:25:44 by samiyazubai       #+#    #+#              #
#    Updated: 2023/07/05 21:34:29 by samiyazubai      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = zombie

SRC = main.cpp zombie.cpp newZombie.cpp randomChump.cpp

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
