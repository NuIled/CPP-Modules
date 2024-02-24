NAME = RPN

CC = c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC = Rpn.cpp main.cpp 

HEADER = Rpn.hpp

OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o:%.cpp $(HEADER)
	$(CC) -c $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re