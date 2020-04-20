/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_texture_color.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/20 18:09:55 by qli           #+#    #+#                 */
/*   Updated: 2020/04/20 19:41:54 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void	ft_get_texture_color(t_input *input)
{
	if (input->wall.texture_number == 1) //south
	{
		printf("south\n");
		input->wall.wall_color = input->south.addr[input->wall.texture_y
		+ input->wall.texture_x * input->south.line_length];
	}
	else if (input->wall.texture_number == 2) //north
	{
		printf("north\n");
		input->wall.wall_color = input->north.addr[input->wall.texture_y
		+ input->wall.texture_x * input->north.line_length];
	}
	else if (input->wall.texture_number == 3) //east
	{
		printf("east\n");
		input->wall.wall_color = input->east.addr[input->wall.texture_y
		+ input->wall.texture_x * input->east.line_length];
	}
	else if (input->wall.texture_number == 4) //west
	{
		printf("west\n");
		input->wall.wall_color = input->west.addr[input->wall.texture_y
		+ input->wall.texture_x * input->west.line_length];
	}
	printf("input->wall.wall_color is %d\n", input->wall.wall_color);
	// printf("input->wall.texture_x is %d\n", input->wall.texture_x);
	// printf("input->wall.texture_y is %d\n", input->wall.texture_y);
	printf("input->west.line_length is %d\n", input->west.line_length);
}