# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/11 15:23:06 by arommers      #+#    #+#                  #
#    Updated: 2024/01/11 15:23:32 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= span
CC			= c++
CPPFLAGS	= -Wall -Werror -Wextra
SRC			= ./main.cpp ./span.cpp
OBJ			= $(SRC:.cpp=.o)

all: find

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re