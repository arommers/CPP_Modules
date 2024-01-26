# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/19 15:44:58 by arommers      #+#    #+#                  #
#    Updated: 2024/01/26 13:58:42 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 		= PmergeME
CC			= c++
CCFLAGS		= -Wall -Wextra -Werror -pedantic
SRC			= ./main.cpp ./PmergeMe.cpp
OBJ			= $(SRC:.cpp=.o)
RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $^ -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re