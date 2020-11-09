# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: qli <qli@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/03/10 14:17:15 by qli           #+#    #+#                  #
#    Updated: 2020/05/06 15:02:41 by qli           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libgnl.a

SRC =	get_next_line.c\
		get_next_line_utils.c\
		get_next_line_utils_2.c

SRC_O = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC_O)
	@echo "GNL: Putting into library"
	@ar rc $(NAME) $(SRC_O)

%.o: %.c
	@echo "GNL: Compilling $<"
	@gcc $(FLAGS) -c -o $@ $<

clean:
	@echo "GNL: Cleaning all .o files"
	@rm -f $(SRC_O)

fclean: clean
	@echo "GNL: Cleaning all .a files"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
