# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/12/06 13:19:08 by arommers      #+#    #+#                  #
#    Updated: 2023/12/08 11:06:18 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 		= bureaucrat
CC			= c++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98
SRC 		= ./main.cpp ./Bureaucrat.cpp
OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	
clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -f $(NAME)

re: clean all
	
.PHONY: all clean fclean re