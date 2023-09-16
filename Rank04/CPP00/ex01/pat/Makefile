# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 16:13:11 by pnopjira          #+#    #+#              #
#    Updated: 2023/09/13 18:28:01 by pnopjira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC 	=	main.cpp Contact.class.cpp
OBJ		= 	$(SRC:%.cpp=%.o)
NAME	= 	phonebook
CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		= 	rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re