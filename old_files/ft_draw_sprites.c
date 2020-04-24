/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_draw_sprites.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/24 09:44:08 by qli           #+#    #+#                 */
/*   Updated: 2020/04/24 18:37:03 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int 	ft_draw_sprites(t_input *input)
{
	int stripe;
	int y;

	stripe = input->sprite_data.draw_start_x;
	y = input->sprite_data.draw_start_y;
	while (stripe < input->sprite_data.draw_end_x)
	{
		ft_calculate_sprite_texture_x(input, stripe);
		if (input->sprite_data.transform_y > 0 && stripe > 0 &&
		stripe < input->res_x && input->sprite_data.transform_y
		< input->sprite_data.buffer[stripe])
		{
			while (y < input->sprite_data.draw_end_y)
			{
				ft_calculate_sprite_texture_y(input, y);
				ft_get_sprite_color(input);
				if ((input->sprite_data.sprite_color & 0x00FFFFFF) != 0)
					ft_render_img(input, stripe, y, input->sprite_data.sprite_color);
				y++;	
			}
		}
		stripe++;
	}
	return (0);
}
