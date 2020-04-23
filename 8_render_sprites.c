/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   8_render_sprites.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 19:44:54 by qli           #+#    #+#                 */
/*   Updated: 2020/04/23 19:22:02 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void 	ft_get_sprite_color(t_input *input, int stripe, int y)
{
	input->sprite_data.sprite_color = input->sprite.addr[y + stripe
	* input->sprite.line_length / 4];
}

int 	ft_draw_sprites(t_input *input)
{
	int stripe;
	int y;

	stripe = input->sprite_data.draw_start_x;
	y = input->sprite_data.draw_start_y;
	while (stripe < input->sprite_data.draw_end_x)
	{
		if (input->sprite_data.transform_y > 0 && stripe > 0 &&
		stripe < input->res_x && input->sprite_data.transform_y 
		< input->sprite_data.buffer[stripe])
		{
			while (y < input->sprite_data.draw_end_y)
			{
				ft_get_sprite_color(input, stripe, y);
				ft_render_img(input, stripe, y, input->sprite_data.sprite_color);
				y++;
			}
		}
		stripe++;
	}
	return (0);
}

int 	ft_render_sprites(t_input *input)
{
	int i;

	i = 0;
	ft_read_sprite_png(input);
	ft_locate_sprite(input);
	ft_sort_distance(input);
	while (i < input->sprite_data.sprite_number)
	{
		ft_translate_sprite_pos(input, i);
		ft_inverse_camera(input); //value does not change
		ft_transform_sprite(input, i);
		ft_sprite_screen_x(input);
		ft_calculate_sprite_height(input);
		ft_draw_sprite_y(input);
		ft_calculate_sprite_width(input);
		ft_draw_sprite_x(input);
		ft_draw_sprites(input);
		i++;
	}
	return (0);
}
