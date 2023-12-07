# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/12/07 10:21:16 by arommers      #+#    #+#                  #
#    Updated: 2023/12/07 14:24:22 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 		= Aform
CC 			= g++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98
SRC			= 	./main.cpp ./AForm.cpp 		\
				./Bureaucrat.cpp 			\
				./ShrubberyCreationForm.cpp	\
				./RobotomyRequestForm.cpp
OBJ			= $(SRC:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re