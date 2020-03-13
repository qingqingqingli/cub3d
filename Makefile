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

NAME = test

FLAGS = -Wall -Wextra -Werror

SRC = main.c\
		input_parse.c\
		utils.c\
		print_utils.c

SRC_O = $(SRC:.c=.o)

SRC_GNL = gnl/get_next_line_utils.c\
			gnl/get_next_line.c

SRC_O_GNL = $(SRC_GNL:.c=.o)

SRC_LIBFT = libft/ft_strlen.c\
			libft/ft_strncmp.c\
			libft/ft_toupper.c\
			libft/ft_tolower.c\
			libft/ft_memset.c\
			libft/ft_bzero.c\
			libft/ft_memcpy.c\
			libft/ft_memccpy.c\
			libft/ft_memmove.c\
			libft/ft_memchr.c\
			libft/ft_memcmp.c\
			libft/ft_isalpha.c\
			libft/ft_isdigit.c\
			libft/ft_isalnum.c\
			libft/ft_isascii.c\
			libft/ft_isprint.c\
			libft/ft_strchr.c\
			libft/ft_strrchr.c\
			libft/ft_strlcpy.c\
			libft/ft_strlcat.c\
			libft/ft_strnstr.c\
			libft/ft_atoi.c\
			libft/ft_calloc.c\
			libft/ft_strdup.c\
			libft/ft_substr.c\
			libft/ft_strjoin.c\
			libft/ft_strmapi.c\
			libft/ft_putchar_fd.c\
			libft/ft_putstr_fd.c\
			libft/ft_putendl_fd.c\
			libft/ft_putnbr_fd.c\
			libft/ft_strtrim.c\
			libft/ft_split.c\
			libft/ft_itoa.c

SRC_O_LIBFT = $(SRC_LIBFT:.c=.o)

LIBRARIES = libft/libft.a\
			gnl/libgnl.a

all: $(NAME)

%.o: %.c
	@echo "CUB3D: Compiling $<"
	@gcc $(FLAGS) -Imlx -Ilibft -Ignl -c $< -o $@

$(NAME): $(SRC_O)
	@echo "creating libraries"
	@make -C mlx
	@make -C libft
	@make -C gnl
	@gcc -Lmlx/ -lmlx -Llibft/ -lft -Lgnl/ -lgnl -framework OpenGL -framework AppKit -o $(NAME) $(SRC_O)

clean:
	@echo "Cleaning all .o files"
	@rm -f $(SRC_O) $(SRC_O_GNL) $(SRC_O_LIBFT)

fclean: clean
	@echo "Cleaning all .a files"
	@rm -f $(NAME) $(LIBRARIES)

re: fclean all

.PHONY: all clean fclean re
