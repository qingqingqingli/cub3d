/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_parse_path_2.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/06 10:15:55 by qli           #+#    #+#                 */
/*   Updated: 2020/05/06 10:22:13 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	ft_parse_n_2(t_input *input, int line, int *i)
{
	int count;

	count = 0;
	while (input->north_present == 1 && *i > 0)
	{
		input->cub_array[line] = input->cub_array[line] + 1;
		*i = *i - 1;
		count++;
	}
	if (input->north_present == 1)
		input->north_path = input->cub_array[line];
	while (count > 0)
	{
		input->cub_array[line] = input->cub_array[line] - 1;
		count--;
	}
}

void	ft_parse_s_2(t_input *input, int line, int *i)
{
	int count;

	count = 0;
	while (input->south_present == 1 && *i > 0)
	{
		input->cub_array[line] = input->cub_array[line] + 1;
		*i = *i - 1;
		count++;
	}
	if (input->south_present == 1)
		input->south_path = input->cub_array[line];
	while (count > 0)
	{
		input->cub_array[line] = input->cub_array[line] - 1;
		count--;
	}
}

void	ft_parse_w_2(t_input *input, int line, int *i)
{
	int count;

	count = 0;
	while (input->west_present == 1 && *i > 0)
	{
		input->cub_array[line] = input->cub_array[line] + 1;
		*i = *i - 1;
		count++;
	}
	if (input->west_present == 1)
		input->west_path = input->cub_array[line];
	while (count > 0)
	{
		input->cub_array[line] = input->cub_array[line] - 1;
		count--;
	}
}

void	ft_parse_e_2(t_input *input, int line, int *i)
{
	int count;

	count = 0;
	while (input->east_present == 1 && *i > 0)
	{
		input->cub_array[line] = input->cub_array[line] + 1;
		*i = *i - 1;
		count++;
	}
	if (input->east_present == 1)
		input->east_path = input->cub_array[line];
	while (count > 0)
	{
		input->cub_array[line] = input->cub_array[line] - 1;
		count--;
	}
}

void	ft_parse_sprite_2(t_input *input, int line, int *i)
{
	int count;

	count = 0;
	while (input->sprite_present == 1 && *i > 0)
	{
		input->cub_array[line] = input->cub_array[line] + 1;
		*i = *i - 1;
		count++;
	}
	if (input->sprite_present == 1)
		input->sprite_path = input->cub_array[line];
	while (count > 0)
	{
		input->cub_array[line] = input->cub_array[line] - 1;
		count--;
	}
}
