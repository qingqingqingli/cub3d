/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   8_render_sprites.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 19:44:54 by qli           #+#    #+#                 */
/*   Updated: 2020/04/24 16:08:49 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int 	ft_render_sprites(t_input *input)
{
	int i;

	i = 0;
	ft_locate_sprite(input);
	ft_sort_distance(input);
	while (i < input->sprite_data.sprite_number)
	{
		ft_translate_sprite_pos(input, i);
		ft_inverse_camera(input);
		ft_transform_sprite(input);
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
