/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   5_cast_ray.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:34:06 by qli           #+#    #+#                 */
/*   Updated: 2020/04/23 13:25:54 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_put_color(t_input *input, int x)
{
	ft_put_color_ceilling(input, x);
	ft_render_wall(input, x);
	// ft_put_color_wall(input, x);
	ft_put_color_floor(input, x);
	return (0);
}

int 	ft_draw_line(t_input *input)
{
	ft_calculate_ray_len(input);
	ft_calculate_line_height(input);
	ft_calculate_draw_start(input);
	ft_calculate_draw_end(input);
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
		ft_store_ray_len(input, x); //sprite
		ft_put_color(input, x);
		x++;
	}
	ft_render_sprites(input);
	ft_display_img(input);
	return (0);
}

void	ft_initiate_variables(t_input *input)
{
	ft_set_player_position(input);
	ft_set_player_orientation(input);
	ft_set_plane_orientation(input);
	ft_set_color(input);
}

int 	ft_initiate_sprite(t_input *input)
{
	ft_initiate_sprite_texture(input); //sprite
	ft_initiate_sprite_buffer(input); //sprite
	ft_calculate_sprite_number(input); //sprite
	ft_initiate_sprite_pos(input); //sprite
	ft_initiate_sprite_order(input); //sprite
	ft_initiate_sprite_distance(input); //sprite
	return (0);
}

int 	ft_cast_ray(t_input *input)
{
	ft_initiate_variables(input);
	ft_initiate_img_2(input);
	ft_initiate_sprite(input); //sprite
	ft_calculate_ray(input);
	return (0);
}