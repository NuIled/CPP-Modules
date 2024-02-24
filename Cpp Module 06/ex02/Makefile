NAME = Base

CC = c++  -Wall -Wextra -Werror -std=c++98

HEADER = Base.hpp B.hpp A.hpp C.hpp

SRC = Base.cpp B.cpp A.cpp C.cpp main.cpp

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