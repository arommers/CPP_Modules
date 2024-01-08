# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/08 13:12:50 by arommers      #+#    #+#                  #
#    Updated: 2024/01/08 14:11:14 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			= Array
CC				= c++
CPPFLAGS		= -Wall -Werror -Wextra -fsanitize=address
SRC				= ./main.cpp
OBJ				= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re