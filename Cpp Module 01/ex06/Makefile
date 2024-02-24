NAME = harlFilter

SRC = Harl.cpp main.cpp

Obj = $(SRC:.cpp=.o)

FLAGS= -Wall -Wextra -Werror 



CC = c++

all : $(NAME)

$(NAME): $(Obj)
	$(CC) $(FLAGS) $(Obj) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

re:fclean all

clean:
	rm -rf $(Obj)

fclean:clean
	rm -rf $(NAME)

.PHONY:
	clean fclean all