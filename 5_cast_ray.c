/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   5_cast_ray.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:34:06 by qli           #+#    #+#                 */
/*   Updated: 2020/04/10 14:37:39 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_put_color(t_input *input, int x)
{
	ft_put_color_ceilling(input, x);
	ft_put_color_wall(input, x);
	printf("passing 2\n");
	ft_put_color_floor(input, x);
	printf("passing 3\n");
	return (0);
}

int 	ft_draw_line(t_input *input)
{
	ft_calculate_ray_len(input);
	ft_calculate_line_height(input);
	ft_calculate_draw_start(input);
	ft_calculate_draw_end(input);
	ft_choose_color(input);
	return (0);
}

int 	ft_dda(t_input *input)
{
	ft_map_location(input);
	ft_calculate_delta(input);
	ft_calculate_side_dist(input);
	ft_perform_dda(input);
	return (0);
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

void	ft_initiate_variables(t_input *input)
{
	ft_set_player_position(input);
	ft_set_player_orientation(input);
	ft_set_plane_orientation(input);
	// printf("direction_x is %f\n", direction_x);
	// printf("direction_y is %f\n", direction_y);
	// printf("plane_dir_x is %f\n", plane_dir_x);
	// printf("plane_dir_y is %f\n", plane_dir_y);
}

int 	ft_cast_ray(t_input *input)
{
	ft_initiate_variables(input);
	ft_calculate_ray(input);
	return (0);
}