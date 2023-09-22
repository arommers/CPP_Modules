# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: adri <adri@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/22 20:54:41 by adri          #+#    #+#                  #
#    Updated: 2023/09/22 21:04:37 by adri          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= zombies
CC			= g++
CPPFLAGS	= -Wall -Werror -Wextra
SRC			= ./main.cpp ./Zombie.cpp ./newZombie.cpp ./randomChump.cpp
OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re