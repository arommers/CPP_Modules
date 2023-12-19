# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/12/11 14:03:15 by arommers      #+#    #+#                  #
#    Updated: 2023/12/19 11:32:03 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 		= convert
CC			= c++
CPPFLAGS	= -Wall -Werror -Wextra
INCLUDE		= -I./includes
SRC			= ./sources/Scalar.cpp ./sources/main.cpp ./sources/types.cpp
OBJ			= $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.cpp=.o)))
OBJ_DIR		= objects

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: ./sources/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re