# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: qli <qli@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/03/09 17:06:23 by qli           #+#    #+#                  #
#    Updated: 2020/05/06 11:08:30 by qli           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	cub3d

SRC 			=	main_1.c \
					input_intake_2.c \
					input_parsing_3.c \
					validate_map_4.c \
					cast_ray_5.c \
					movement_6.c \
					render_wall_7.c \
					render_sprites_8.c \
					create_bmp_9.c \
					src/utilis/general_utils_1.c \
					src/utilis/general_utils_2.c \
					src/utilis/reset_value_1.c \
					src/utilis/reset_value_2.c \
					src/flood_fill/ft_calculate_height.c \
					src/flood_fill/ft_check_border.c \
					src/flood_fill/ft_flood_fill.c \
					src/flood_fill/ft_find_player_position.c \
					src/wall_rendering/ft_calculate_camera.c \
					src/wall_rendering/ft_calculate_ray_dir.c \
					src/wall_rendering/ft_map_location.c \
					src/wall_rendering/ft_calculate_delta.c \
					src/wall_rendering/ft_step_direction.c \
					src/wall_rendering/ft_calculate_side_dist.c \
					src/wall_rendering/ft_calculate_ray_len.c \
					src/wall_rendering/ft_calculate_line_height.c \
					src/wall_rendering/ft_calculate_draw_start.c \
					src/wall_rendering/ft_calculate_draw_end.c \
					src/wall_rendering/ft_perform_dda.c \
					src/wall_rendering/ft_set_player_orientation.c \
					src/wall_rendering/ft_set_plane_orientation.c \
					src/wall_rendering/ft_set_player_position.c \
					src/wall_rendering/initiate_functions.c \
					src/colors/ft_put_color_ceilling.c \
					src/colors/ft_put_color_floor.c \
					src/colors/ft_set_color.c \
					src/mlx_functions/my_mlx_pixel_put.c \
					src/mlx_functions/ft_close.c \
					src/mlx_functions/ft_initiate_window.c \
					src/mlx_functions/ft_read_png_file.c \
					src/mlx_functions/ft_initiate_img_2.c \
					src/mlx_functions/ft_render_img.c \
					src/mlx_functions/ft_display_img.c \
					src/movement/ft_move_forward.c \
					src/movement/ft_move_backward.c \
					src/movement/ft_rotate_left.c \
					src/movement/ft_rotate_right.c \
					src/movement/ft_move_right.c \
					src/movement/ft_move_left.c \
					src/wall_texture/ft_calculate_wall_x.c \
					src/wall_texture/ft_calculate_texture_x.c \
					src/wall_texture/ft_calculate_texture_step.c \
					src/wall_texture/ft_calculate_texture_start_pos.c \
					src/wall_texture/ft_calculate_texture_y.c \
					src/wall_texture/ft_select_texture_path.c \
					src/wall_texture/ft_get_texture_color.c \
					src/wall_texture/ft_initiate_textures.c \
					src/sprites/ft_store_ray_len.c \
					src/sprites/ft_initiate_sprite_buffer.c \
					src/sprites/ft_initiate_sprite_texture.c \
					src/sprites/ft_calculate_sprite_number.c \
					src/sprites/ft_locate_sprite.c \
					src/sprites/ft_inverse_camera.c \
					src/sprites/ft_initiate_sprite_pos.c \
					src/sprites/ft_calculate_sprite_distance.c \
					src/sprites/ft_sort_distance.c \
					src/sprites/ft_translate_sprite_pos.c \
					src/sprites/ft_transform_sprite.c \
					src/sprites/ft_sprite_screen_x.c \
					src/sprites/ft_calculate_sprite_height.c \
					src/sprites/ft_draw_sprite_y.c \
					src/sprites/ft_draw_sprie_x.c \
					src/sprites/ft_calculate_sprite_width.c \
					src/sprites/ft_get_sprite_color.c \
					src/sprites/ft_calculate_texture_pos.c \
					src/input_parsing/error_management.c \
					src/input_parsing/ft_parse_path.c \
					src/input_parsing/ft_parse_res_floor_ceilling.c \
					src/input_parsing/validate_input.c \
					src/input_parsing/ft_lines_join.c \
					src/input_parsing/validation_functions.c \
					src/input_parsing/ft_split_2.c \
					src/input_parsing/validate_element.c \
					src/input_parsing/ft_parse_path_2.c	\
					src/input_parsing/ft_split_3.c		

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
