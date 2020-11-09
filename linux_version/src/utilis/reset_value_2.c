/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reset_value_2.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/29 16:30:41 by qli           #+#    #+#                 */
/*   Updated: 2020/11/09 12:26:37 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	ft_reset_move(t_input *input)
{
	input->move.move_backward = 0;
	input->move.move_forward = 0;
	input->move.move_left = 0;
	input->move.move_right = 0;
	input->move.rotate_left = 0;
	input->move.rotate_right = 0;
	input->move.close_window = 0;
}

void	ft_reset_wall(t_input *input)
{
	input->wall.texture_height = 0;
	input->wall.texture_width = 0;
	input->wall.texture_number = 0;
	input->wall.texture_wall_x = 0;
	input->wall.texture_x = 0;
	input->wall.texture_step = 0;
	input->wall.texture_start_pos = 0;
	input->wall.texture_y = 0;
	input->wall.wall_color = 0;
	input->wall.texture_number = 0;
	input->wall.line_length = 0;
	input->wall.img_active = 0;
	input->north.texture_height = 0;
	input->north.texture_width = 0;
	input->south.texture_height = 0;
	input->south.texture_width = 0;
	input->west.texture_height = 0;
	input->west.texture_width = 0;
	input->east.texture_height = 0;
	input->east.texture_width = 0;
}

void	ft_reset_sprite(t_input *input)
{
	input->sprite.texture_height = 0;
	input->sprite.texture_width = 0;
	input->sprite_data.sprite_number = 0;
	input->sprite_data.sprite_x = 0;
	input->sprite_data.sprite_y = 0;
	input->sprite_data.inverse_camera = 0;
	input->sprite_data.transform_x = 0;
	input->sprite_data.transform_y = 0;
	input->sprite_data.sprite_screen_x = 0;
	input->sprite_data.sprite_height = 0;
	input->sprite_data.sprite_width = 0;
	input->sprite_data.draw_start_x = 0;
	input->sprite_data.draw_end_x = 0;
	input->sprite_data.draw_start_y = 0;
	input->sprite_data.draw_end_y = 0;
	input->sprite_data.sprite_color = 0;
	input->sprite_data.texture_x = 0;
	input->sprite_data.texture_y = 0;
	input->sprite_data.buffer_present = 0;
	input->sprite_data.pos_present = 0;
}

void	ft_reset_bmp(t_input *input)
{
	input->bmp.image_size = 0;
	input->bmp.file_size = 0;
	input->bmp.dpi = 0;
	input->bmp.ppm = 0;
	input->bmp.pixel_color = 0;
	input->bmp.padding = 0;
	input->bmp_needed = 0;
}
