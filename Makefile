# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: qli <qli@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/03/09 17:06:23 by qli           #+#    #+#                  #
#    Updated: 2020/04/07 17:02:46 by qli           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	cub3d

SRC 			=	0_general_utils.c \
					0_print_utils.c \
					1_main.c \
					2_input_parse.c \
					3_input_2d_array.c \
					4_validate_map.c \
					5_initiate_ray_casting.c \
					6_calculate_ray.c \
					7_dda.c

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

%.o: %.c
	@echo "CUB3D: Compiling $<"
	@$(COMPILE) $(FLAGS) $(INLCUDES) -c $< -o $@

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
