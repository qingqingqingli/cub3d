/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_texture_color.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/20 18:09:55 by qli           #+#    #+#                 */
/*   Updated: 2020/05/03 06:23:31 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_get_texture_color(t_input *input)
{
	if (input->wall.texture_number == 1)
	{
		input->wall.wall_color = input->east.addr[input->wall.texture_x
		+ input->wall.texture_y * input->east.line_length / 4];
	}
	else if (input->wall.texture_number == 2)
	{
		input->wall.wall_color = input->west.addr[input->wall.texture_x
		+ input->wall.texture_y * input->west.line_length / 4];
	}
	else if (input->wall.texture_number == 3)
	{
		input->wall.wall_color = input->south.addr[input->wall.texture_x
		+ input->wall.texture_y * input->south.line_length / 4];
	}
	else if (input->wall.texture_number == 4)
	{
		input->wall.wall_color = input->north.addr[input->wall.texture_x
		+ input->wall.texture_y * input->north.line_length / 4];
	}
	// if (input->dda.side == 1)
	// 	input->wall.wall_color = (input->wall.wall_color >> 1) & 8355711;
}
