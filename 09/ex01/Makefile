# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/19 15:44:50 by arommers      #+#    #+#                  #
#    Updated: 2024/01/19 15:44:51 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 		= RPN
CC			= c++
CPPFLAGS	= -Wall -Werror -Wextra -pedantic
SRC			= ./main.cpp ./RPN.cpp
OBJ			= $(SRC:.cpp=.o)
RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $^ -o $@

clean:
	@rm -$(RM) $(OBJ)

fclean: clean
	@rm -$(RM) $(NAME)

re: fclean all

.PHONY: all run clean fclean re