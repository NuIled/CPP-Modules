# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 05:26:50 by aoutifra          #+#    #+#              #
#    Updated: 2023/10/03 08:51:51 by aoutifra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Zombie

SRC = main.cpp  zombieHorde.cpp Zombie.cpp

Obj = $(SRC:.cpp=.o)

FLAGS= -Wall -Wextra -Werror

HEADER = Zombie.hpp

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