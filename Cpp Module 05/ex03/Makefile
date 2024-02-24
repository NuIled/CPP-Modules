NAME = Bureaucrat

SRC = AForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp Intern.cpp\

FLAGS = -Wall -Werror -Wextra -std=c++98

HDR = AForm.hpp Bureaucrat.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp

RM = rm -rf

CC = c++

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC)  $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp $(HDR)
	$(CC) $(FLAGS) -c $< -o $@

re: fclean all

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

