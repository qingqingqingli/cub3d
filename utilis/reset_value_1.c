/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reset_value_1.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/08 19:45:27 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 16:31:18 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

static void	ft_reset_struct(t_input *input)
{
	input->res_present = 0;
	input->res_x = 0;
	input->res_y = 0;
	input->north_present = 0;
	input->north_path = "null";
	input->south_present = 0;
	input->south_path = "null";
	input->west_present = 0;
	input->west_path = "null";
	input->east_present = 0;
	input->east_path = "null";
	input->sprite_present = 0;
	input->sprite_path = "null";
	input->floor_present = 0;
	input->floor_r = 0;
	input->floor_g = 0;
	input->floor_b = 0;
	input->ceilling_present = 0;
	input->ceilling_r = 0;
	input->ceilling_g = 0;
	input->ceilling_b = 0;
	input->line = "null";
	input->flood_fill_x = 0;
	input->flood_fill_y = 0;
}

static void	ft_reset_ray_casting(t_input *input)
{
	input->ray_casting.pos_x = 0;
	input->ray_casting.pos_y = 0;
	input->ray_casting.sprawing_dir = 0;
	input->ray_casting.dir_x = 0;
	input->ray_casting.dir_y = 0;
	input->ray_casting.plane_x = 0;
	input->ray_casting.plane_y = 0;
	input->ray_casting.ray_direction_x = 0;
	input->ray_casting.ray_direction_y = 0;
	input->ray_casting.camera_x = 0;
}

static void	ft_reset_dda(t_input *input)
{
	input->dda.map_x = 0;
	input->dda.map_y = 0;
	input->dda.side_dis_x = 0;
	input->dda.side_dis_y = 0;
	input->dda.delta_dis_x = 0;
	input->dda.delta_dis_y = 0;
	input->dda.step_x = 0;
	input->dda.step_y = 0;
	input->dda.side = 0;
	input->dda.ray_len = 0;
	input->dda.line_height = 0;
	input->dda.draw_start = 0;
	input->dda.draw_end = 0;
}

static void	ft_reset_color(t_input *input)
{
	input->ceilling_color = 0;
	input->floor_color = 0;
	input->color.r = 0;
	input->color.g = 0;
	input->color.b = 0;
	input->color.wall = 0;
	input->color.ceilling = 0;
	input->color.floor = 0;
}

void		ft_reset_input(t_input *input)
{
	ft_reset_struct(input);
	ft_reset_ray_casting(input);
	ft_reset_dda(input);
	ft_reset_color(input);
	ft_reset_move(input);
	ft_reset_wall(input);
	ft_reset_sprite(input);
	ft_reset_bmp(input);
}
