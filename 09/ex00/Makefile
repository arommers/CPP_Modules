# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/18 10:05:32 by arommers      #+#    #+#                  #
#    Updated: 2024/01/29 13:12:25 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			= btc
CC				= c++
CPPFLAGS		= -Wall -Werror -Wextra
SRC				= ./main.cpp ./BitcoinExchange.cpp
OBJ				= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $^ -o $@

run: all
	@clear
	@./test_script.sh

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@clear

re: fclean all

.PHONY: all run clean fclean re