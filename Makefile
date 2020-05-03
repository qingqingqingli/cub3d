# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: qli <qli@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/03/09 17:06:23 by qli           #+#    #+#                  #
<<<<<<< HEAD
#    Updated: 2020/05/03 05:39:52 by qli           ########   odam.nl          #
=======
#    Updated: 2020/05/03 06:09:10 by qli           ########   odam.nl          #
>>>>>>> dda
#                                                                              #
# **************************************************************************** #

NAME			=	cub3d

SRC 			=	utilis/general_utils_1.c \
					utilis/general_utils_2.c \
					utilis/print_utils.c \
					utilis/reset_value_1.c \
					utilis/reset_value_2.c \
					1_main.c \
					2_parse_input.c \
					3_validate_input.c \
					3_validate_input_new.c \
					4_validate_map.c \
					5_cast_ray.c \
					6_movement.c \
					7_render_wall.c \
					8_render_sprites.c \
					9_create_bmp.c \
					flood_fill/ft_duplicate_array.c \
					flood_fill/ft_calculate_height.c \
					flood_fill/ft_check_border.c \
					flood_fill/ft_flood_fill.c \
					flood_fill/ft_find_player_position.c \
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
					colors/ft_put_color_ceilling.c \
					colors/ft_put_color_floor.c \
					colors/ft_set_color.c \
					mlx/my_mlx_pixel_put.c \
					mlx/ft_close.c \
					mlx/ft_initiate_window.c \
					mlx/ft_read_png_file.c \
					mlx/ft_initiate_img_2.c \
					mlx/ft_render_img.c \
					mlx/ft_display_img.c \
					movement/ft_move_forward.c \
					movement/ft_move_backward.c \
					movement/ft_rotate_left.c \
					movement/ft_rotate_right.c \
					movement/ft_move_right.c \
					movement/ft_move_left.c \
					wall/ft_calculate_wall_x.c \
					wall/ft_calculate_texture_x.c \
					wall/ft_calculate_texture_step.c \
					wall/ft_calculate_texture_start_pos.c \
					wall/ft_calculate_texture_y.c \
					wall/ft_select_texture_path.c \
					wall/ft_get_texture_color.c \
					sprites/ft_store_ray_len.c \
					sprites/ft_initiate_sprite_buffer.c \
					sprites/ft_initiate_sprite_texture.c \
					sprites/ft_calculate_sprite_number.c \
					sprites/ft_locate_sprite.c \
					sprites/ft_inverse_camera.c \
					sprites/ft_initiate_sprite_pos.c \
					sprites/ft_calculate_sprite_distance.c \
					sprites/ft_sort_distance.c \
					sprites/ft_translate_sprite_pos.c \
					sprites/ft_transform_sprite.c \
					sprites/ft_sprite_screen_x.c \
					sprites/ft_calculate_sprite_height.c \
					sprites/ft_draw_sprite_y.c \
					sprites/ft_draw_sprie_x.c \
					sprites/ft_calculate_sprite_width.c \
					sprites/ft_get_sprite_color.c \
					sprites/ft_calculate_texture_pos.c \
					parsing/error_management.c \
					parsing/ft_parse_path.c \
					parsing/ft_parse_res_floor_ceilling.c \
					parsing/validate_input.c				

SRC_O 			=	$(SRC:.c=.o)

EXTERNAL_LIBS	=	libft/libft.a \
					gnl/libgnl.a \
					minilibx-master/libmlx.a \

LIBS 			= 	-lXext -lX11 -lm -lz -AppKit

INLCUDES		=	-Ilibft \
					-Ignl \
					-Iminilibx_master

HEADERS 		= 	cub3d.h \
					struct.h \

FLAGS 			=	-g -Wall -Wextra -Werror

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

%.o: %.c $(HEADERS)
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
