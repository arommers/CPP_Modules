# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: arommers <arommers@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/12/20 12:27:09 by arommers      #+#    #+#                  #
#    Updated: 2023/12/20 13:17:45 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 		= serial
CC			= c++
CPPFLAGS	= -Wall -Werror -Wextra -pedantic
INCLUDE		= -I./includes
SRC			= ./sources/main.cpp ./sources/Serializer.cpp
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