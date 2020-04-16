/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_wall_x.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/16 14:28:58 by qli           #+#    #+#                 */
/*   Updated: 2020/04/16 14:34:17 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_calculate_wall_x(t_input *input)
{
	if (input->dda.side == 0)
		input->wall.texture_wall_x = position_y + input->dda.ray_len * ray_dir_y;
	else
		input->wall.texture_wall_x = position_x + input->dda.ray_len * ray_dir_x;
	input->wall.texture_wall_x -= floor(input->wall.texture_wall_x);
}
