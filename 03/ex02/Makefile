# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: adri <adri@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/02 22:34:54 by adri          #+#    #+#                  #
#    Updated: 2023/10/05 10:35:18 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= a_new_challenger
CC			= g++
CPPFLAGS	= -Wall -Werror -Wextra
SRC			= ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp ./FragTrap.cpp
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