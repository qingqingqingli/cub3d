/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   7_ft_render_wall.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/16 14:23:08 by qli           #+#    #+#                 */
/*   Updated: 2020/04/21 20:10:09 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int 	ft_render_wall(t_input *input, int x)
{
	int y;

	y = input->dda.draw_start;
	ft_select_texture_path(input);
	ft_read_png_file(input);
	ft_calculate_wall_x(input);
	ft_calculate_texture_x(input);
	ft_calculate_texture_step(input);
	ft_calculate_texture_start_pos(input);
	while(y < input->dda.draw_end)
	{
		ft_calculate_texture_y(input);
		input->wall.texture_start_pos += input->wall.texture_step;
		ft_get_texture_color(input);
		ft_render_img(input, x, y, input->wall.wall_color);
		y++;
	}
	return (0);
}