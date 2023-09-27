# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/27 10:23:53 by arommers      #+#    #+#                  #
#    Updated: 2023/09/27 10:26:28 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= harlfilter
CC		= g++
FLAGS	= -Wall -Wextra -Werror -std=c++98
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