# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: adri <adri@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/14 11:33:12 by adri          #+#    #+#                  #
#    Updated: 2024/01/14 11:38:18 by adri          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= mutantstack
CC			= c++
CPPFLAGS	= -Wall -Werror -Wextra
SRC			= ./main.cpp
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