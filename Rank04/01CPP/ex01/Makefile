# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 16:06:07 by pnopjira          #+#    #+#              #
#    Updated: 2023/09/20 05:54:29 by pnopjira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= main.cpp Zombie.cpp zombieHorde.cpp
OBJ			= $(SRC:.cpp=.o)
CC			= c++
RM 			= rm -rf
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 
# CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=leak

NAME		= moar_brainz

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re