# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/30 12:31:05 by pnopjira          #+#    #+#              #
#    Updated: 2023/12/06 20:19:01 by pnopjira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= interface_recap
SRC			= main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp
OBJ			= $(SRC:.cpp=.o)
CC			= c++
RM 			= rm -rf
CPPFLAGS	= -Wall -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re