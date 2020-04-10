/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_ray_dir.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:08:00 by qli           #+#    #+#                 */
/*   Updated: 2020/04/10 14:08:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void ft_calculate_ray_dir(t_input *input)
{
	ray_dir_x = direction_x + (plane_dir_x * camera_x_pos);
	ray_dir_y = direction_y + (plane_dir_y * camera_x_pos);
}