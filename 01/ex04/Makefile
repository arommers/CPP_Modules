# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: adri <adri@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/24 14:10:34 by adri          #+#    #+#                  #
#    Updated: 2023/09/25 20:32:04 by adri          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= sed
CC		= g++
FLAGS	= -Wall -Werror -Wextra
SRC		= ./main.cpp ./sed.cpp
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