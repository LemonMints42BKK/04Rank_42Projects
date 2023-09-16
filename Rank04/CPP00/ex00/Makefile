# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 02:23:20 by pnopjira          #+#    #+#              #
#    Updated: 2023/08/14 02:28:36 by pnopjira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= megaphone.cpp
OBJ			= $(SRC:.cpp=.o)
CC			= g++
RM 			= rm -rf
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 

NAME		= megaphone

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re