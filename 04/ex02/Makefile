# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/06 12:06:52 by arommers      #+#    #+#                  #
#    Updated: 2023/10/08 11:17:35 by adri          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= animal
CC			= g++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98
SRC			= ./main.cpp ./Animal.cpp ./Dog.cpp ./Cat.cpp ./Brain.cpp
OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re