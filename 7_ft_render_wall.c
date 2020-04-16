/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   7_ft_render_wall.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/16 14:23:08 by qli           #+#    #+#                 */
/*   Updated: 2020/04/16 18:08:41 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int 	ft_render_wall(t_input *input, int x)
{
	input->wall.texture_width = 65;
	input->wall.texture_height = 65;

	ft_calculate_texture_num(input);
	ft_calculate_wall_x(input);
	ft_calculate_texture_x(input);
	ft_calculate_texture_step(input);
	ft_calculate_texture_start_pos(input);
	ft_calculate_texture_y(input);
	printf("x is %d\n", x);
	// printf("input->wall.texture_number is %d\n", input->wall.texture_number);
	// printf("input->wall.texture_wall_x is %f\n", input->wall.texture_wall_x);
	// printf("input->wall.texture_x is %d\n", input->wall.texture_x);
	// printf("input->wall.texture_step is %f\n", input->wall.texture_step);
	// printf("input->wall.texture_start_pos is %f\n", input->wall.texture_start_pos);
	// printf("input->wall.texture_y is %d\n", input->wall.texture_y);
	return (0);
}