/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_wall_x.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/16 14:28:58 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 10:57:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void 	ft_calculate_wall_x(t_input *input)
{
	if (input->dda.side == 0)
		input->wall.texture_wall_x = input->ray_casting.pos_y + input->dda.ray_len *
		input->ray_casting.ray_direction_y;
	else
		input->wall.texture_wall_x = input->ray_casting.pos_x + input->dda.ray_len *
		input->ray_casting.ray_direction_x;
	input->wall.texture_wall_x -= (int)input->wall.texture_wall_x;
}
