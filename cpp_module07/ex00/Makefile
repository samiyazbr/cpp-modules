NAME		=	whatever

SRCS		=	main.cpp

OBJS		=	$(SRCS:%.cpp=%.o)

CC			=	c++

FLAGS		=	-std=c++98 -Wall -Wextra -Werror

RM			=	rm -rf

%.o : %.cpp
			@echo $(MAGENTA)
			$(CC) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
			@$(RM) $(OBJS)
			@echo $(RED)"Deleted CPP 07 object files"$(DEFAULT)

fclean:		clean
			@$(RM) $(NAME)
			@echo $(RED)"Deleted CPP 07 executable"$(DEFAULT)

re:			fclean all

.PHONY:		all clean fclean re