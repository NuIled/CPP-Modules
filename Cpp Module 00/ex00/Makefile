# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 02:06:32 by aoutifra          #+#    #+#              #
#    Updated: 2023/10/30 09:59:19 by aoutifra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

SRC = megaphone.cpp 

Obj = $(SRC:.cpp=.o)

FLAGS= -Wall -Wextra -Werror #-std=c++98

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