# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: qli <qli@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/03/09 17:06:23 by qli           #+#    #+#                  #
#    Updated: 2020/04/13 14:45:28 by qli           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	cub3d

SRC 			=	utilis/general_utils.c \
					utilis/print_utils.c \
					utilis/reset_value.c \
					1_main.c \
					2_input_parse.c \
					3_input_2d_array.c \
					4_validate_map.c \
					5_cast_ray.c \
					calculations/ft_calculate_camera.c \
					calculations/ft_calculate_ray_dir.c \
					calculations/ft_map_location.c \
					calculations/ft_calculate_delta.c \
					calculations/ft_step_direction.c \
					calculations/ft_calculate_side_dist.c \
					calculations/ft_calculate_ray_len.c \
					calculations/ft_calculate_line_height.c \
					calculations/ft_calculate_draw_start.c \
					calculations/ft_calculate_draw_end.c \
					calculations/ft_perform_dda.c \
					calculations/ft_set_player_orientation.c \
					calculations/ft_set_plane_orientation.c \
					calculations/ft_set_player_position.c \
					colors/ft_choose_color.c \
					colors/ft_put_color_ceilling.c \
					colors/ft_put_color_wall.c \
					colors/ft_put_color_floor.c \
					mlx/my_mlx_pixel_put.c \

SRC_O 			=	$(SRC:.c=.o)

EXTERNAL_LIBS	=	libft/libft.a \
					gnl/libgnl.a \
					minilibx-master/libmlx.a \

LIBS 			= 	-lXext -lX11 -lm -lz -AppKit

INLCUDES		=	-Ilibft \
					-Ignl \
					-Iminilibx_master

FLAGS 			=	-Wall -Wextra -Werror -g

COMPILE 		=	gcc

C_GREEN			=	\033[0;38;5;119m
C_WHITE			=	\033[38;5;7m
C_BLUE			=	\033[38;5;73m
C_GREY			=	\033[38;5;241m
C_ORANGE 		= 	\033[38;5;202m
C_DGREEN		=	\033[0;38;5;22m
RESET			=	$(C_WHITE)

all: $(NAME)

$(NAME): $(SRC_O)
	@echo "$(C_GREEN)compiling libft ... $(RESET)"
	@make bonus -C libft
	@echo "$(C_GREEN)compiling gnl ... $(RESET)"
	@make -C gnl
	@echo "$(C_GREEN)compiling minilibx ... $(RESET)"
	@make -C minilibx-master
	@echo "$(C_GREEN)compiling cub3d ... $(RESET)"
	@$(COMPILE) $(FLAGS) $(INLCUDES) $(SRC_O) $(EXTERNAL_LIBS) $(LIBS) -o $(NAME)
	@echo "$(C_GREEN)*****cub3d created***** $(RESET)"

%.o: %.c
	@echo "CUB3D: Compiling $<"
	@$(COMPILE) $(FLAGS) $(INLCUDES) -c $< -o $@

clean:
	@echo "$(C_ORANGE)cleaning libft...$(RESET)"
	@make clean -C libft
	@echo "$(C_ORANGE)cleaning gnl...$(RESET)"
	@make clean -C gnl
	# @echo "$(C_ORANGE)cleaning minilibx...$(RESET)"
	# @make clean -C minilibx-master
	@echo "$(C_ORANGE)cleaning cub3d...$(RESET)"
	@rm -f $(SRC_O)
	@echo "$(C_ORANGE)make clean complete...$(RESET)"

fclean: clean
	@echo "$(C_ORANGE)fcleaning libft...$(RESET)"
	@make fclean -C libft
	@echo "$(C_ORANGE)fcleaning gnl...$(RESET)"
	@make fclean -C gnl
	@echo "$(C_ORANGE)fcleaning cub3d...$(RESET)"
	@rm -f $(NAME)
	@echo "$(C_ORANGE)fcleaning complete...$(RESET)"

re: fclean all

.PHONY: all clean fclean re
