# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/18 10:17:30 by arommers      #+#    #+#                  #
#    Updated: 2023/09/18 15:14:40 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= account
CC			= g++
SRC			= ./tests.cpp ./Account.cpp
OBJ			= $(SRC:.cpp=.o)
CPPFLAGS	= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re