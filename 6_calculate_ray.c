/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   6_calculate_ray.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/06 16:59:08 by qli           #+#    #+#                 */
/*   Updated: 2020/04/10 10:56:53 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** calculate the ray direction vector
*/

void ft_calculate_ray_dir(t_input *input)
{
	ray_dir_x = direction_x + (plane_dir_x * camera_x_pos);
	ray_dir_y = direction_y + (plane_dir_y * camera_x_pos);
}

/*
** calculate the camera x position
*/

void ft_calculate_camera(t_input *input, int x)
{
	camera_x_pos = 2 * x / (double)input->res_x - 1;
}

int ft_calculate_ray(t_input *input)
{
	int x; 

	x = 0;
	/* should this be < or <= */
	while (x <= input->res_x)
	{
		ft_calculate_camera(input, x);
		ft_calculate_ray_dir(input);
		ft_dda(input);
		ft_draw_line(input);
		ft_put_color(input, x);
		printf("passing\n");
		x++;
		// printf("camera_x_pos is %f\n", camera_x_pos);
		// printf("ray_dir_x is %f\n", ray_dir_x);
		// printf("ray_dir_y is %f\n", ray_dir_y);
		// printf("input->dda.line_height is %d\n", input->dda.line_height);
		// printf("input->dda.draw_start is %d\n", input->dda.draw_start);
		// printf("input->dda.draw_end is %d\n", input->dda.draw_end);		
	}
	printf("here 10\n");
	return (0);
}