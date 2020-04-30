/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_management.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/29 15:56:25 by qli           #+#    #+#                 */
/*   Updated: 2020/04/30 09:17:40 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		ft_validate_input(int argc, char **argv, t_input *input)
{
	if (argc < 2)
		return (ft_return_error("Error\nNo map description\n", input));
	if (argc == 3)
	{
		if (ft_strncmp(argv[2], "--save", 7) == 0)
			input->bmp_needed = 1;
		else
			(ft_return_error("Error\nWrong save argument\n", input));
	}
	if (argc > 3)
		return (ft_return_error("Error\nToo many arguments\n", input));
	return (0);
}

void	ft_free_malloc(t_input *input)
{
	if (input->sprite_data.buffer_present == 1)
		free(input->sprite_data.buffer);
	if (input->sprite_data.pos_present == 1)
		free(input->sprite_data.pos);
	printf("freed all malloc\n");
}

int		ft_return_error(char *s, t_input *input)
{
	ft_putstr_fd(s, 2);
	ft_free_malloc(input);
	exit(0);
}
