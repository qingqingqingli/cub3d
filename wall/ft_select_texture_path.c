/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_select_texture_path.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/20 17:56:56 by qli           #+#    #+#                 */
/*   Updated: 2020/04/21 08:20:10 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

/*
** 1 = South --> East
** 2 = North --> West
** 3 = East --> South
** 4 = West --> North
*/

void ft_select_texture_path(t_input *input)
{
	if (input->dda.side == 1 && ray_dir_y > 0)
	{
		input->wall.texture_number = 1;
		input->wall.texture_width = input->east.texture_width;
		input->wall.texture_height = input->east.texture_height;
	}
	else if (input->dda.side == 1 && ray_dir_y < 0)
	{
		input->wall.texture_number = 2;
		input->wall.texture_width = input->west.texture_width;
		input->wall.texture_height = input->west.texture_height;
	}
	else if (input->dda.side == 0 && ray_dir_x > 0)
	{
		input->wall.texture_number = 3;
		input->wall.texture_width = input->south.texture_width;
		input->wall.texture_height = input->south.texture_height;
	}
	else if (input->dda.side == 0 && ray_dir_x < 0)
	{
		input->wall.texture_number = 4;
		input->wall.texture_width = input->north.texture_width;
		input->wall.texture_height = input->north.texture_height;
	}
}

// void ft_select_texture_path(t_input *input)
// {
// 	if (input->dda.side == 0 && ray_dir_x > 0)
// 	{
// 		input->wall.texture_number = 1;
// 		input->wall.texture_width = input->east.texture_width;
// 		input->wall.texture_height = input->east.texture_height;
// 	}
// 	else if (input->dda.side == 0 && ray_dir_x < 0)
// 	{
// 		input->wall.texture_number = 2;
// 		input->wall.texture_width = input->west.texture_width;
// 		input->wall.texture_height = input->west.texture_height;
// 	}
// 	else if (input->dda.side == 1 && ray_dir_y > 0)
// 	{
// 		input->wall.texture_number = 3;
// 		input->wall.texture_width = input->south.texture_width;
// 		input->wall.texture_height = input->south.texture_height;
// 	}
// 	else if (input->dda.side == 1 && ray_dir_y < 0)
// 	{
// 		input->wall.texture_number = 4;
// 		input->wall.texture_width = input->north.texture_width;
// 		input->wall.texture_height = input->north.texture_height;
// 	}
// }