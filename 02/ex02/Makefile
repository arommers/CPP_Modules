# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/29 10:33:13 by arommers      #+#    #+#                  #
#    Updated: 2023/09/29 10:35:51 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= fixed
CC			= g++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98
SRC			= ./main.cpp ./Fixed.cpp
OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re