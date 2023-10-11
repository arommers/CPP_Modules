# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/06 12:06:52 by arommers      #+#    #+#                  #
#    Updated: 2023/10/11 22:24:58 by adri          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= interface
CC			= g++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98
SRC			=	./main.cpp ./AMateria.cpp ./Ice.cpp			\
				./Cure.cpp ./Source.cpp ./Character.cpp
OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re