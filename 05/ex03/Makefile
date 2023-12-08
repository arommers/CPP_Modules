# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/12/07 10:21:16 by arommers      #+#    #+#                  #
#    Updated: 2023/12/08 14:25:42 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 		= Aform
CC 			= c++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98
INCLUDE		= -I./includes
SRC			= 	./main.cpp ./sources/AForm.cpp 			\
				./sources/Bureaucrat.cpp 				\
				./sources/ShrubberyCreationForm.cpp		\
				./sources/RobotomyRequestForm.cpp		\
				./sources/Intern.cpp					\
				./sources/PresidentialPardonForm.cpp
OBJ			= $(addprefix $(OBJ_DIR)/,$(notdir $(SRC:.cpp=.o)))
OBJ_DIR		= objects

all:$(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: ./sources/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re