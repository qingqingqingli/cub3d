/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cast_ray_5.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:34:06 by qli           #+#    #+#                 */
/*   Updated: 2020/05/05 13:52:29 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void		ft_put_color(t_input *input, int x)
{
	ft_put_color_ceilling(input, x);
	ft_render_wall(input, x);
	ft_put_color_floor(input, x);
}

void		ft_draw_line(t_input *input)
{
	ft_calculate_ray_len(input);
	ft_calculate_line_height(input);
	ft_calculate_draw_start(input);
	ft_calculate_draw_end(input);
}

void		ft_dda(t_input *input)
{
	ft_map_location(input);
	ft_calculate_delta(input);
	ft_step_direction(input);
	ft_calculate_side_dist(input);
	ft_perform_dda(input);
}

int			ft_calculate_ray(t_input *input)
{
	int x;

	x = 0;
	while (x < input->res_x)
	{
		ft_calculate_camera(input, x);
		ft_calculate_ray_dir(input);
		ft_dda(input);
		ft_draw_line(input);
		ft_store_ray_len(input, x);
		ft_put_color(input, x);
		x++;
	}
	ft_render_sprites(input);
	if (input->bmp_needed == 0)
		ft_display_img(input);
	return (0);
}

int			ft_cast_ray(t_input *input)
{
	ft_initiate_texture(input);
	ft_initiate_variables(input);
	ft_initiate_sprite(input);
	if (input->bmp_needed == 0)
		ft_initiate_img_2(input);
	ft_calculate_ray(input);
	if (input->bmp_needed == 1)
	{
		ft_create_bmp(input);
		ft_close(input);
	}
	printf("here 2\n");
	return (0);
}
