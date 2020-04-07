/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   6_calculate_ray.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/06 16:59:08 by qli           #+#    #+#                 */
/*   Updated: 2020/04/06 19:08:12 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void ft_calculate_ray_dir(t_input *input)
{
	ray_dir_x = direction_x + (plane_dir_x * camera_x_pos);
	ray_dir_y = direction_y + (plane_dir_y * camera_x_pos);
}

void ft_calculate_camera(t_input *input)
{
	camera_x_pos = (2 * position_x / (double)res_width) - 1;
}

int ft_calculate_ray(t_input *input)
{
	ft_calculate_camera(input);
	ft_calculate_ray_dir(input);
	ft_dda(input);
	printf("camera_x_pos is %f\n", camera_x_pos);
	printf("ray_dir_x is %f\n", ray_dir_x);
	printf("ray_dir_y is %f\n", ray_dir_y);
	return (0);
}