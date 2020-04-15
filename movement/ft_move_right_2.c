/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_move_right_2.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 15:00:19 by qli           #+#    #+#                 */
/*   Updated: 2020/04/15 14:50:56 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int 	ft_move_right(t_input *input)
{
	double old_direction_x;
	double old_plane_x;

	old_direction_x = direction_x;
	old_plane_x = plane_dir_x;
	direction_x = direction_x * cos(ROTATE_SPEED)
	- direction_y * sin(ROTATE_SPEED);
	direction_y = old_direction_x * sin(ROTATE_SPEED)
	+ direction_y * cos(ROTATE_SPEED);
	plane_dir_x = plane_dir_x * cos(ROTATE_SPEED)
	- plane_dir_y * sin(ROTATE_SPEED);
	plane_dir_y = old_plane_x * sin(ROTATE_SPEED)
	+ plane_dir_y * cos(ROTATE_SPEED);
	return (0);
}
