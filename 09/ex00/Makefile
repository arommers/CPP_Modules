# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/18 10:05:32 by arommers      #+#    #+#                  #
#    Updated: 2024/01/19 15:42:37 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			= btc
CC				= c++
CPPFLAGS		= -Wall -Werror -Wextra
SRC				= ./main.cpp ./BitcoinExchange.cpp
OBJ				= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

run: all
	@./test_script.sh

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@clear

re: fclean all

.PHONY: all clean fclean re