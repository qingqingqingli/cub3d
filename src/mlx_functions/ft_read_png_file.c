/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_read_png_file.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/17 10:53:35 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 16:15:45 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	ft_read_png_file(t_input *input)
{
	if (input->wall.texture_number == 1)
	{
		input->wall.texture_width = input->east.texture_width;
		input->wall.texture_height = input->east.texture_height;
	}
	else if (input->wall.texture_number == 2)
	{
		input->wall.texture_width = input->west.texture_width;
		input->wall.texture_height = input->west.texture_height;
	}
	else if (input->wall.texture_number == 3)
	{
		input->wall.texture_width = input->south.texture_width;
		input->wall.texture_height = input->south.texture_height;
	}
	else if (input->wall.texture_number == 4)
	{
		input->wall.texture_width = input->north.texture_width;
		input->wall.texture_height = input->north.texture_height;
	}
}
