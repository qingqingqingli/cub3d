/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   9_draw_line.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/09 11:57:50 by qli           #+#    #+#                 */
/*   Updated: 2020/04/09 12:23:58 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void 	ft_calculate_ray_len(t_input *input)
{
	if (input->dda.side == 0)
	{
		input->dda.ray_len = (input->dda.map_x  - position_x + (1 -
		input->dda.step_x) / 2) / ray_dir_x;
	}
	else
	{
		input->dda.ray_len = (input->dda.map_y - position_y + (1 -
		input->dda.step_y) / 2) / ray_dir_y;
	}	
}
/* translate the ray len to how many pixels need to be draw ss*/
void 	ft_calculate_line_height(t_input *input)
{
	input->dda.line_height = (int)(input->res_y / input->dda.ray_len);
}

void 	ft_calculate_draw_start(t_input *input)
{
	input->dda.draw_start = (-1 * input->dda.line_height) / 2 +
	input->res_y / 2;
	if (input->dda.draw_start < 0)
		input->dda.draw_start = 0;
}

void 	ft_calculate_draw_end(t_input *input)
{
	input->dda.draw_end = input->dda.line_height / 2 +
	input->res_y / 2;
	if (input->dda.draw_end >= input->res_y)
		input->dda.draw_end = input->res_y - 1;
}

int 	ft_draw_line(t_input *input)
{
	ft_calculate_ray_len(input);
	ft_calculate_line_height(input);
	ft_calculate_draw_start(input);
	ft_calculate_draw_end(input);
	return (0);
}