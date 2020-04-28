/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_select_texture_path.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/20 17:56:56 by qli           #+#    #+#                 */
/*   Updated: 2020/04/27 11:13:43 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

/*
** 1 = East
** 2 = West
** 3 = South
** 4 = North
*/

void ft_select_texture_path(t_input *input)
{
	if (input->dda.side == 1 && input->ray_casting.ray_direction_y > 0)
		input->wall.texture_number = 1; //west
	else if (input->dda.side == 1 && input->ray_casting.ray_direction_y < 0)
		input->wall.texture_number = 2; //east
	else if (input->dda.side == 0 && input->ray_casting.ray_direction_x > 0)
		input->wall.texture_number = 3; //south
	else if (input->dda.side == 0 && input->ray_casting.ray_direction_x < 0)
		input->wall.texture_number = 4; //north
}
