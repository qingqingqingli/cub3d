/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_texture_pos.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/24 09:54:02 by qli           #+#    #+#                 */
/*   Updated: 2020/04/24 16:06:26 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_calculate_sprite_texture_x(t_input *input, int stripe)
{
	input->sprite_data.texture_x = (int)(256 * (stripe - (-input->sprite_data.sprite_width
	/ 2 + input->sprite_data.sprite_screen_x)) * input->res_y 
	/ input->sprite_data.sprite_width) / 256;
}

void 	ft_calculate_sprite_texture_y(t_input *input, int y)
{
	int d;

	d = y * 256 - input->res_y * 128 +
	input->sprite_data.sprite_height * 128;
	input->sprite_data.texture_y = ((d * input->res_x)
	/ input->sprite_data.sprite_height) / 256;
}
