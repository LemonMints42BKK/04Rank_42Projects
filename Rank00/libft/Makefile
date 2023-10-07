# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/07 11:43:03 by pnopjira          #+#    #+#              #
#    Updated: 2023/10/07 13:02:18 by pnopjira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
SRCS	=	ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isascii.c ft_isprint.c
#			 ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c
#
OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	@rm -f $(OBJS)
	@echo "cleaned object"

fclean:	clean
	@rm -f $(NAME)
	@echo "fcleaned"

re:			fclean all

.PHONY:		all clean fclean re