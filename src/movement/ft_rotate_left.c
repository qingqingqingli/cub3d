/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rotate_left.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 14:54:45 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	ft_rotate_left(t_input *input)
{
	double old_direction_x;
	double old_plane_x;

	old_direction_x = input->ray_casting.dir_x;
	old_plane_x = input->ray_casting.plane_x;
	input->ray_casting.dir_x = input->ray_casting.dir_x * cos(-ROTATE_SPEED)
	- input->ray_casting.dir_y * sin(-ROTATE_SPEED);
	input->ray_casting.dir_y = old_direction_x * sin(-ROTATE_SPEED)
	+ input->ray_casting.dir_y * cos(-ROTATE_SPEED);
	input->ray_casting.plane_x = input->ray_casting.plane_x * cos(-ROTATE_SPEED)
	- input->ray_casting.plane_y * sin(-ROTATE_SPEED);
	input->ray_casting.plane_y = old_plane_x * sin(-ROTATE_SPEED)
	+ input->ray_casting.plane_y * cos(-ROTATE_SPEED);
}
