/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   8_render_sprites.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 19:44:54 by qli           #+#    #+#                 */
/*   Updated: 2020/04/24 20:10:22 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int 	ft_draw_sprites(t_input *input)
{
	int stripe;
	int y;

	stripe = input->sprite_data.draw_start_x;
	while (stripe < input->sprite_data.draw_end_x)
	{
		ft_calculate_sprite_texture_x(input, stripe);
		if (input->sprite_data.transform_y > 0 && stripe > 0 &&
		stripe < input->res_x && input->sprite_data.transform_y
		< input->sprite_data.buffer[stripe])
		{
			y = input->sprite_data.draw_start_y;
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


int 	ft_render_sprites(t_input *input)
{
	int i;

	i = 0;
	ft_locate_sprite(input);
	ft_sort_distance(input);
	while (i < input->sprite_data.sprite_number)
	{
		ft_translate_sprite_pos(input, i);
		// printf("input->sprite_data.sprite_x is %f\n", input->sprite_data.sprite_x);
		// printf("input->sprite_data.sprite_y is %f\n", input->sprite_data.sprite_y);
		// printf("input->sprite_data.sprite_pos[i][0] is %f\n", input->sprite_data.sprite_pos[i][0]);
		// printf("input->sprite_data.sprite_pos[i][1] is %f\n", input->sprite_data.sprite_pos[i][1]);
		// printf("position_x is %f\n", position_x);
		// printf("position_y is %f\n", position_y);
		ft_inverse_camera(input);
		// printf("input->sprite_data.inverse_camera is %f\n", input->sprite_data.inverse_camera);
		ft_transform_sprite(input);
		// printf("input->sprite_data.transform_x is %f\n", input->sprite_data.transform_x);
		// printf("input->sprite_data.transform_y is %f\n", input->sprite_data.transform_y);		ft_sprite_screen_x(input);
		ft_sprite_screen_x(input);
		// printf("input->sprite_data.sprite_screen_x is %d\n", input->sprite_data.sprite_screen_x);
		ft_calculate_sprite_height(input);
		// printf("input->sprite_data.sprite_height is %d\n", input->sprite_data.sprite_height);
		ft_draw_sprite_y(input);
		// printf("input->sprite_data.draw_start_y is %d\n", input->sprite_data.draw_start_y);
		// printf("input->sprite_data.draw_end_y is %d\n", input->sprite_data.draw_end_y);
		ft_calculate_sprite_width(input);
		// printf("input->sprite_data.sprite_width is %d\n", input->sprite_data.sprite_width);
		ft_draw_sprite_x(input);
		// printf("input->sprite_data.draw_start_x is %d\n", input->sprite_data.draw_start_x);
		// printf("input->sprite_data.draw_end_x is %d\n", input->sprite_data.draw_end_x);
		ft_draw_sprites(input);
		i++;
	}
	return (0);
}
