# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/08 10:59:46 by arommers      #+#    #+#                  #
#    Updated: 2024/01/08 11:25:10 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= templates
CC			= c++
CPPFLAGS	= -Wall -Werror -Wextra
SRC			= ./main.cpp
OBJ			= $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re