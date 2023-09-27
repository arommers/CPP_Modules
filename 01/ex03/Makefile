# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: adri <adri@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/23 19:38:37 by adri          #+#    #+#                  #
#    Updated: 2023/09/27 10:23:08 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= violence
CC		= g++
FLAGS	= -Wall -Werror -Wextra -std=c++98
SRC		= ./main.cpp ./Weapon.cpp ./HumanA.cpp ./HumanB.cpp
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