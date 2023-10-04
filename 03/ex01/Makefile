# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: adri <adri@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/02 22:34:54 by adri          #+#    #+#                  #
#    Updated: 2023/10/03 20:44:55 by adri          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= claptrap
CC			= g++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98
SRC			= ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp
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