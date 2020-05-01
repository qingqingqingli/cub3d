/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rotate_right.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 15:00:19 by qli           #+#    #+#                 */
/*   Updated: 2020/05/01 11:18:17 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void 	ft_rotate_right(t_input *input)
{
	double old_direction_x;
	double old_plane_x;

	old_direction_x = input->ray_casting.dir_x;
	old_plane_x = input->ray_casting.plane_x;
	input->ray_casting.dir_x = input->ray_casting.dir_x * cos(ROTATE_SPEED)
	- input->ray_casting.dir_y * sin(ROTATE_SPEED);
	input->ray_casting.dir_y = old_direction_x * sin(ROTATE_SPEED)
	+ input->ray_casting.dir_y * cos(ROTATE_SPEED);
	input->ray_casting.plane_x = input->ray_casting.plane_x * cos(ROTATE_SPEED)
	- input->ray_casting.plane_y * sin(ROTATE_SPEED);
	input->ray_casting.plane_y = old_plane_x * sin(ROTATE_SPEED)
	+ input->ray_casting.plane_y * cos(ROTATE_SPEED);
}
