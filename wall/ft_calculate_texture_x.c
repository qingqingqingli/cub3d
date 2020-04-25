/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_texture_x.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/16 14:53:45 by qli           #+#    #+#                 */
/*   Updated: 2020/04/25 12:36:30 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_calculate_texture_x(t_input *input)
{
	input->wall.texture_x = (int)(input->wall.texture_wall_x
	* (double)(input->wall.texture_width));
	if ((input->dda.side == 0 && input->ray_casting.ray_direction_x > 0) ||
	(input->dda.side == 1 && input->ray_casting.ray_direction_y < 0))
		input->wall.texture_x = input->wall.texture_width - input->wall.texture_x - 1;
}
