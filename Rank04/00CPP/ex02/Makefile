# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 21:50:10 by pnopjira          #+#    #+#              #
#    Updated: 2023/09/19 21:25:12 by pnopjira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Accout
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Account.cpp tests.cpp
OJB = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OJB)
	$(CC) $(CFLAGS) $(OJB) -o $(NAME)

clean:
	rm -f $(OJB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
