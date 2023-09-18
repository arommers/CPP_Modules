# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/11 09:33:16 by arommers      #+#    #+#                  #
#    Updated: 2023/09/11 12:03:24 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
CC			= g++
SRC			= megaphone.cpp
OBJ			= $(SRC:.cpp=.o)
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

