# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 21:50:10 by pnopjira          #+#    #+#              #
#    Updated: 2023/09/15 23:42:21 by pnopjira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Account
CC	=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	Account.cpp tests.cpp

all:	$(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

re:	clean all

.PHONY:	all clean fclean re
# NAME = Accout
# CC = g++
# CFLAGS = -Wall -Wextra -Werror -std=c++98
# SRCS = Account.cpp tests.cpp
# OJB = $(SRCS:.cpp=.o)

# all: $(NAME)

# $(NAME): $(OJB)
# 	$(CC) $(CFLAGS) $(OJB) -o $(NAME)

# clean:
# 	rm -f $(OJB)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY: all clean fclean re
