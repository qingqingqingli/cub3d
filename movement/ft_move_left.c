/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_move_left.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 15:00:19 by qli           #+#    #+#                 */
/*   Updated: 2020/04/14 17:55:45 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int 	ft_move_left(int keycode, t_input *input)
{
	double old_direction_x;
	double old_plane_x;

	old_direction_x = direction_x;
	old_plane_x = plane_dir_x;
	if (keycode == KEY_LEFT)
	{
		direction_x = direction_x * cos(input->move.rotate_speed)
		- direction_y * sin(input->move.rotate_speed);
		direction_y = old_direction_x * sin(input->move.rotate_speed)
		+ direction_y * cos(input->move.rotate_speed);
		plane_dir_x = plane_dir_x * cos(input->move.rotate_speed)
		- plane_dir_y * sin(input->move.rotate_speed);
		plane_dir_y = old_plane_x * sin(input->move.rotate_speed)
		+ plane_dir_y * cos(input->move.rotate_speed);
	}
	return (0);
}
