# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 05:26:50 by aoutifra          #+#    #+#              #
#    Updated: 2023/10/17 09:59:49 by aoutifra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed

SRC = main.cpp Fixed.cpp 

Obj = $(SRC:.cpp=.o)

FLAGS= -std=c++98 -Wall -Wextra -Werror

HEADER = Fixed.hpp

CC = c++

all : $(NAME) $(clean)

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