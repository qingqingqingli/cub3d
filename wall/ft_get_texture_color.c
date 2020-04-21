/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_texture_color.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/20 18:09:55 by qli           #+#    #+#                 */
/*   Updated: 2020/04/21 08:11:23 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

/*
** 1 = South --> East
** 2 = North --> West
** 3 = East --> South
** 4 = West --> North
*/

void	ft_get_texture_color(t_input *input)
{
	if (input->wall.texture_number == 1) //east
	{
		input->wall.wall_color = input->east.addr[input->wall.texture_y
		+ input->wall.texture_x * input->east.line_length / 4];
	}
	else if (input->wall.texture_number == 2) //west
	{
		input->wall.wall_color = input->west.addr[input->wall.texture_y
		+ input->wall.texture_x * input->west.line_length / 4];
	}
	else if (input->wall.texture_number == 3) //south
	{
		input->wall.wall_color = input->south.addr[input->wall.texture_y
		+ input->wall.texture_x * input->south.line_length / 4];
	}
	else if (input->wall.texture_number == 4) //north
	{
		input->wall.wall_color = input->north.addr[input->wall.texture_y
		+ input->wall.texture_x * input->north.line_length / 4];
	}
	if (input->dda.side == 1)
		input->wall.wall_color = (input->wall.wall_color >> 1) & 8355711;
}