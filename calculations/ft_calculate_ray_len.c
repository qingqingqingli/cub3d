/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_ray_len.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:15:04 by qli           #+#    #+#                 */
/*   Updated: 2020/04/10 14:15:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_calculate_ray_len(t_input *input)
{
	if (input->dda.side == 0)
	{
		input->dda.ray_len = (input->dda.map_x  - position_x + (1 -
		input->dda.step_x) / 2) / ray_dir_x;
	}
	else
	{
		input->dda.ray_len = (input->dda.map_y - position_y + (1 -
		input->dda.step_y) / 2) / ray_dir_y;
	}
}