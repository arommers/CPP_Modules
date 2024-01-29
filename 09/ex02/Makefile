# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/19 15:44:58 by arommers      #+#    #+#                  #
#    Updated: 2024/01/29 11:48:08 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 		= PmergeMe
CC			= c++
CCFLAGS		= -Wall -Wextra -Werror -pedantic
SRC			= ./main.cpp ./PmergeMe.cpp
OBJ			= $(SRC:.cpp=.o)
RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $^ -o $@

run : all
	@clear
	@./test_script.sh

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re