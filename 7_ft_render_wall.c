/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   7_ft_render_wall.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/16 14:23:08 by qli           #+#    #+#                 */
/*   Updated: 2020/04/27 11:25:37 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int 	ft_render_wall(t_input *input, int x)
{
	int y;

	y = input->dda.draw_start;
	ft_select_texture_path(input); //checked
	ft_read_png_file(input); //checked
	ft_calculate_wall_x(input); //checked
	ft_calculate_texture_x(input); //checked
	ft_calculate_texture_step(input); //checked
	ft_calculate_texture_start_pos(input); //checked
	while(y < input->dda.draw_end)
	{
		ft_calculate_texture_y(input); //checked
		input->wall.texture_start_pos += input->wall.texture_step; //checked
		ft_get_texture_color(input); //checked
		ft_render_img(input, x, y, input->wall.wall_color); //checked
		y++;
	}
	return (0);
}