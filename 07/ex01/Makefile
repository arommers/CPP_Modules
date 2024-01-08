# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/08 12:17:30 by arommers      #+#    #+#                  #
#    Updated: 2024/01/08 12:20:38 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			= iter
CC				= c++
CPPFLAGS		= -Wall -Werror -Wextra
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