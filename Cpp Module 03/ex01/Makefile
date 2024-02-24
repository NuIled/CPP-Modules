NAME = ClapTrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

Obj = $(SRC:.cpp=.o)

FLAGS= -Wall -Wextra -Werror -std=c++98

HEADER = ClapTrap.hpp ScavTrap.hpp

CC = c++

all : $(NAME)

$(NAME): $(Obj)
	$(CC) $(FLAGS) $(Obj) -o $(NAME)  

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

re:fclean all

clean:
	rm -rf $(Obj)

fclean:clean
	rm -rf $(NAME)

.PHONY:
	clean fclean allScavTrap.cpp
