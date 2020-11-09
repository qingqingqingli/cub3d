/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_management.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/29 15:56:25 by qli           #+#    #+#                 */
/*   Updated: 2020/05/06 09:28:51 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	ft_free_2d_array(char **array)
{
	int height;

	height = 0;
	if (!array)
		return ;
	while (array[height] != NULL)
	{
		free(array[height]);
		height++;
	}
	free(array);
}

void	ft_free_parsing(t_input *input)
{
	if (input->cub_line_present == 1)
		free(input->cub_line);
	if (input->line_present == 1)
		free(input->line);
	if (input->cub_array_present == 1)
		ft_free_2d_array(input->cub_array);
	if (input->array_present == 1)
		ft_free_2d_array(input->array);
}

void	ft_free_sprite(t_input *input)
{
	if (input->sprite_data.buffer_present == 1)
		free(input->sprite_data.buffer);
	if (input->sprite_data.pos_present == 1)
		free(input->sprite_data.pos);
}

void	ft_free_malloc(t_input *input)
{
	ft_free_parsing(input);
	ft_free_sprite(input);
}

int		ft_return_error(char *s, t_input *input)
{
	ft_putstr_fd(s, 2);
	ft_free_malloc(input);
	exit(0);
}
