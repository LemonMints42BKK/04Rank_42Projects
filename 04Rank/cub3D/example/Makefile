
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

NAME	= cub3d
INC		= cub3d.h
CUB		= cub3d.a

SRC		= main.c
OBJS	= $(SRCS:%.c=%.o)

MLX_DIR	= ./minilibx-linux
MLX_LINK= $(MLX_DIR)/libmlx.a
MLXS	= -L./minilibx-linux -lmlx -framework OpenGL -framework AppKit
LIBMLX	= minilibx-linux/libmlx.a

$(NAME): $(OBJS)
	@make -C $(MLX_DIR)
	@cp $(MLX_LINK) $(CUB)
	ar rcs $(CUB) *.o
	@echo " "
	@echo " Make cub3d.a "
	@echo " "

	@cc $(FLAGS) $(OBJ) $(INC) -I./ -L./workspaces/42Projects/Rank04/cub3D/example/minilibx-linux -lmlx -framework OpenGL -framework AppKit -o $(NAME)

	@echo "\033[0;34m   _   _      _ _          __        __         _     _ "
	@echo "\033[0;34m  | | | | ___| | | ___     \ \      / /__  _ __| | __| |"
	@echo "\033[0;34m  | |_| |/ _ \ | |/ _ \     \ \ /\ / / _ \| '__| |/ _  |"
	@echo "\033[0;33m  |  _  |  __/ | | (_) |    \  V  V / (_) | |  | | (_| |"
	@echo "\033[0;33m  |_| |_|\___|_|_|\___/       \_/\_/ \___/|_|  |_|\__,_|"

all: $(NAME)

.PHONY: all clean fclean re

clean:
	@$(RM) $(OBJS)
	@make clean -C libmlx

fclean: clean
	@$(RM) $(OBJS) $(NAME)
	@make clean -C libmlx

re: fclean all
