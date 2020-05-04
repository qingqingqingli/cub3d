/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_ray_dir.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:08:00 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	ft_calculate_ray_dir(t_input *input)
{
	input->ray_casting.ray_direction_x = input->ray_casting.dir_x +
	(input->ray_casting.plane_x * input->ray_casting.camera_x);
	input->ray_casting.ray_direction_y = input->ray_casting.dir_y +
	(input->ray_casting.plane_y * input->ray_casting.camera_x);
}
