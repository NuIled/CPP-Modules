# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 02:06:32 by aoutifra          #+#    #+#              #
#    Updated: 2023/10/15 01:47:33 by aoutifra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = main

SRC = main.cpp 

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