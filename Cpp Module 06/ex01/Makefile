NAME = Serializer

CC = c++  -Wall -Wextra -Werror -std=c++98

HEADER = Serializer.hpp

SRC = Serializer.cpp main.cpp

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