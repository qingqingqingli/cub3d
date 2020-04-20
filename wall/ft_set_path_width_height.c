/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_set_path_width_height.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/20 20:55:50 by qli           #+#    #+#                 */
/*   Updated: 2020/04/20 21:00:55 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void ft_set_path_width_height(t_input *input)
{
	if (input->wall.texture_number == 1)
	{
		input->wall.texture_width = input->south.texture_width;
		input->wall.texture_height = input->south.texture_height;
		input->wall.line_length = input->south.texture_height;
	}
	else if (input->wall.texture_number == 2)
	{
		input->wall.texture_width = input->north.texture_width;
		input->wall.texture_height = input->north.texture_height;
		input->wall.line_length = input->north.texture_height;
	}
	else if (input->wall.texture_number == 3)
	{
		input->wall.texture_width = input->east.texture_width;
		input->wall.texture_height = input->east.texture_height;
		input->wall.line_length = input->east.texture_height;
	}
	else if (input->wall.texture_number == 4)
	{
		input->wall.texture_width = input->west.texture_width;
		input->wall.texture_height = input->west.texture_height;
		input->wall.line_length = input->west.texture_height;
	}
}