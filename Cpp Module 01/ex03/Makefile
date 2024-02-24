NAME = Human

SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

Obj = $(SRC:.cpp=.o)

FLAGS= -Wall -Wextra -Werror 

HEADER = HumanA.hpp HumanB.hpp Weapon.hpp

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
	clean fclean all