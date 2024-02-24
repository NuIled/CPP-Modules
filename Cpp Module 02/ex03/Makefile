# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 05:26:50 by aoutifra          #+#    #+#              #
#    Updated: 2023/10/30 16:21:40 by aoutifra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed

SRC = main.cpp Fixed.cpp Point.cpp

Obj = $(SRC:.cpp=.o)

FLAGS= -Wall -Wextra -Werror

HEADER = Fixed.hpp Point.hpp

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
	clean fclean allSRC = Point.cpp
