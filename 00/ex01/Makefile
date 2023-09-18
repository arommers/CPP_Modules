# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/11 13:55:11 by arommers      #+#    #+#                  #
#    Updated: 2023/09/18 09:40:23 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook
CC			= g++
SRC			= ./phonebook.cpp ./contact.cpp ./main.cpp
OBJ			= $(SRC:.cpp=.o)
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re