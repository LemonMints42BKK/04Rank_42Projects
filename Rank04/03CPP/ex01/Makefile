# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 10:37:59 by pnopjira          #+#    #+#              #
#    Updated: 2023/09/27 04:29:00 by pnopjira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ			= $(SRC:.cpp=.o)
CC			= c++
RM 			= rm -rf
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 

NAME		= scavTrap

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re