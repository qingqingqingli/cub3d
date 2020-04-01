# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: qli <qli@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/03/09 17:06:23 by qli            #+#    #+#                 #
#    Updated: 2020/03/11 13:47:37 by qli           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	cub3d

SRC 			=	1_main.c \
					2_input_parse.c \
					0_general_utils.c \
					0_print_utils.c \
					3_input_2d_array.c \
					4_validate_map.c

SRC_O 			=	$(SRC:.c=.o)

EXTERNAL_LIBS	=	libft/libft.a \
						gnl/libgnl.a

INLCUDES		=	-Ilibft \
						-Ignl

FLAGS 			=	-Wall -Wextra -Werror

COMPILE 		=	gcc

C_GREEN			=	\033[0;38;5;119m
C_WHITE			=	\033[38;5;7m
C_BLUE			=	\033[38;5;73m
C_GREY			=	\033[38;5;241m
C_ORANGE 		= 	\033[38;5;202m
C_DGREEN		=	\033[0;38;5;22m
RESET			=	$(C_WHITE)

UNAME_S			:=	$(shell uname -s)

ifeq ($(UNAME_S),Linux)
LIBS			+=	-LMinilibX -lmlx -lX11 -lXext -lm -lft -lbsd
INCLUDES		+=	-IMinilibX/X11
EXTERNAL_LIBS	+=	MinilibX/libmlx.a
FLAGS			+=	-DLINUX
endif

ifeq ($(UNAME_S),MacOS)
LIBS			+=	-Lmlx -lmlx -framework OpenGL -framework Appkit
INCLUDES		+=	-Imlx
EXTERNAL_LIBS	+=	mlx/libmlx.dylib
FLAGS			+=	-DMACOS
endif

all: $(NAME)

%.o: %.c
	@echo "CUB3D: Compiling $<"
	@$(COMPILE) $(FLAGS) $(INLCUDES) -c $< -o $@

$(NAME): $(SRC_O)
	@echo "$(C_GREEN)compiling libft ... $(RESET)"
	@make bonus -C libft
	@echo "$(C_GREEN)compiling gnl ... $(RESET)"
	@make -C gnl
	@echo "$(C_GREEN)compiling mlx ... $(RESET)"
	@make -C MinilibX 2> /dev/null
	@$(COMPILE) -o $(NAME) $(SRC_O) $(EXTERNAL_LIBS)
	@echo "$(C_GREEN)*****cub3d created***** $(RESET)"

clean:
	@echo "$(C_ORANGE)cleaning libft...$(RESET)"
	@make clean -C libft
	@echo "$(C_ORANGE)cleaning gnl...$(RESET)"
	@make clean -C gnl
	@echo "$(C_ORANGE)cleaning MinilibX...$(RESET)"
	@make clean -C MinilibX	
	@echo "$(C_ORANGE)cleaning cub3d...$(RESET)"
	@rm -f $(SRC_O)
	@echo "$(C_ORANGE)make clean complete...$(RESET)"

fclean: clean
	@echo "$(C_ORANGE)fcleaning libft...$(RESET)"
	@make fclean -C libft
	@echo "$(C_ORANGE)fcleaning gnl...$(RESET)"
	@make fclean -C gnl
	@echo "$(C_ORANGE)fcleaning MinilibX...$(RESET)"
	@make fclean -C MinilibX
	@echo "$(C_ORANGE)fcleaning cub3d...$(RESET)"
	@rm -f $(NAME)
	@echo "$(C_ORANGE)fcleaning complete...$(RESET)"

re: fclean all

.PHONY: all clean fclean re
