/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   5_cast_ray.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:34:06 by qli           #+#    #+#                 */
/*   Updated: 2020/04/15 10:41:52 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_put_color(t_input *input, int x)
{
	ft_put_color_ceilling(input, x);
	ft_put_color_wall(input, x);
	ft_put_color_floor(input, x);
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
	ft_step_direction(input);
	ft_calculate_side_dist(input);
	ft_perform_dda(input);
	return (0);
}

int ft_calculate_ray(t_input *input)
{
	int x; 

	x = 0;
	while (x < input->res_x)
	{
		ft_calculate_camera(input, x);
		ft_calculate_ray_dir(input);
		ft_dda(input);
		ft_draw_line(input);
		ft_put_color(input, x);
		x++;
	}
	mlx_put_image_to_window(input->img.mlx, input->img.mlx_win,
	input->img.img, 0, 0);
	return (0);
}

void	ft_initiate_variables(t_input *input)
{
	ft_set_player_position(input);
	ft_set_player_orientation(input);
	ft_set_plane_orientation(input);
}

int 	ft_cast_ray(t_input *input)
{
	ft_initiate_variables(input);
	ft_calculate_ray(input);
	return (0);
}