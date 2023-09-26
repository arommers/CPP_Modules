# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: adri <adri@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/26 21:40:34 by adri          #+#    #+#                  #
#    Updated: 2023/09/26 21:47:01 by adri          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= harl
CC		= g++
FLAGS	= -Wall -Wextra -Werror
SRC		= ./main.cpp ./Harl.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re