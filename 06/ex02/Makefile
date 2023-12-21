# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/12/20 14:39:04 by arommers      #+#    #+#                  #
#    Updated: 2023/12/21 11:33:25 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 		= dynamic
CC			= c++
CPPFLAGS	= -Wall -Werror -Wextra -pedantic -fsanitize=address
INCLUDE		= -I./includes
SRC			= ./sources/main.cpp ./sources/Base.cpp
OBJ			= $(addprefix $(OBJ_DIR)/,$(notdir $(SRC:.cpp=.o)))
OBJ_DIR		= objects

all:$(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: ./sources/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re