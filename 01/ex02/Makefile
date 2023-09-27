# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: adri <adri@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/23 13:53:10 by adri          #+#    #+#                  #
#    Updated: 2023/09/27 10:23:13 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 	= brain
CC		= g++
FLAGS	= -Wall -Werror -Wextra -std=c++98
SRC		= ./main.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re