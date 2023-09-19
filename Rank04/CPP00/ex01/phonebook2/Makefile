# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 05:41:44 by pnopjira          #+#    #+#              #
#    Updated: 2023/09/17 15:30:14 by pnopjira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= Phonebook.cpp Contact.class.cpp Phonebook.class.cpp
OBJ			= $(SRC:%.cpp=%.o)
CC			= g++
RM 			= rm -rf
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 

NAME		= phonebook

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re